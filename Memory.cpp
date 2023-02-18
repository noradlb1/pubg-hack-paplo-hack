#include "Memory.h"
#include "Aimbot.h"
#include <thread>

BYTE MagicBulletShell[60] =
{
 0xC7, 0x45, 0x78, 0x4B, 0x48, 0x41, 0x4E,
  0x83, 0x3D, 0x00, 0x0A, 0x52, 0x55, 0x45,
  0x74, 0x0E,
  0x60,
  0x8B, 0x5D, 0x50,
  0x8B, 0x53, 0x18,
  0x8A, 0x02,
  0x3C, 0x9C,
  0x74, 0x02,
  0x61,
  0xC3,
  0x8A, 0x42, 0x01,
  0x3C, 0x21,
  0x75, 0x14,
  0xC7, 0x83, 0x20, 0x02, 0x00, 0x00, 0x50, 0x45, 0x4F, 0x00,
  0xC7, 0x83, 0x24, 0x02, 0x00, 0x00, 0x50, 0x4C, 0x45, 0x00,
  0xEB, 0xE1
};


BYTE MagicBulletSearch1[] = { 0x66, 0x0F, 0x7E, '?', 0x28, 0x02, 0x00, 0x00, 0xC7, 0x45, 0x78, 0x90 }; // Need update
BYTE MagicBulletSearch2[] = { 0x66, 0x0F, 0x7E, '?', 0x28, 0x02, 0x00, 0x00, 0xC7, 0x45, '?', 0x90 }; // Need update


DWORD MagicBulletAddress = 0;
vector<DWORD_PTR> MagicBulletList = {};
INT MagicBulletHook = 0;
BYTE RealByteCode[7];
DWORD FlyCarAddress = 0;
VOID GetMagicAddress()
{
	std::vector<DWORD_PTR> FoundedBase;

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x20000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x20000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		if (Utility::ReadMemoryEx<BYTE>(FoundedBase[i] + 0xC) == 0x9D) // Need update
		{
			MagicBulletList.push_back(FoundedBase[i]);
			MagicBulletAddress = FoundedBase[i];
		}
	}

	FoundedBase.clear();
}

VOID InitializeMagic()
{
	INT Addv = MagicBulletAddress;

	WriteProcessMemory(Game::hProcess, (LPVOID)MagicBulletHook, &MagicBulletShell, sizeof(MagicBulletShell), 0);

	MagicBulletHook = (INT)VirtualAllocEx(Game::hProcess, 0, 500, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(Game::hProcess, (LPVOID)MagicBulletHook, &MagicBulletShell, sizeof(MagicBulletShell), 0);

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}
	if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}

	Utility::WriteMemoryEx<INT>(MagicBulletHook + 9, MagicBulletHook + 0x5E);
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
	WriteProcessMemory(Game::hProcess, (LPVOID)(MagicBulletHook), &RealByteCode, sizeof(RealByteCode), 0);
}

VOID HookCall(INT Address, INT HookAdress)
{
	BYTE Shell[7] = { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x90, 0x90 };
	*(INT*)(Shell + 1) = (INT)(HookAdress - Address - 5);
	WriteProcessMemory(Game::hProcess, (LPVOID)Address, &Shell, sizeof(Shell), 0);
}

bool IsEqual(BYTE Array1[], BYTE Array2[])
{
	for (int i = 0; i < 6; i++)
	{
		if (Array1[i] != Array2[i])
		{
			return false;
		}
	}

	return true;
}

bool Hooked(int Address)
{
	unsigned char Tmp[7];
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Address + 0x8), &Tmp, sizeof(Tmp), 0);

	if ((Tmp[0] == 0xE8 && Tmp[5] == 0x90 && Tmp[6] == 0x90))
	{
		return true;
	}

	return false;
}

VOID HookMagic()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		BYTE Tmp[7];
		ReadProcessMemory(Game::hProcess, (LPCVOID)((int)Addv + 0x8), &Tmp, sizeof(Tmp), 0);

		if (IsEqual(Tmp, RealByteCode))
		{
			HookCall((INT)(Addv + 0x8), (INT)MagicBulletHook);
		}
	}
}

VOID Memory::RestoreHook()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		if (Hooked(Addv))
		{
			WriteProcessMemory(Game::hProcess, (LPVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
		}
	}
}

VECTOR3 Subtract(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result;
	Result.X = Src.X - Dst.X;
	Result.Y = Src.Y - Dst.Y;
	Result.Z = Src.Z - Dst.Z;
	return Result;
}

float Magnitude(VECTOR3 Vec)
{
	return sqrtf(Vec.X * Vec.X + Vec.Y * Vec.Y + Vec.Z * Vec.Z);
}

float GetDistance(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result = Subtract(Src, Dst);
	return Magnitude(Result);
}

VECTOR3 NormalizeVec(VECTOR3 Vector)
{
	float Length = Magnitude(Vector);

	Vector.X /= Length;
	Vector.Y /= Length;
	Vector.Z /= Length;

	return Vector;
}
float Distance(VECTOR3 myPos, VECTOR3 enPos)
{
	return sqrt((myPos.X - enPos.X) * (myPos.X - enPos.X) + (myPos.Y - enPos.Y) * (myPos.Y - enPos.Y) + (myPos.Z - enPos.Z) * (myPos.Z - enPos.Z));
}
float BulletDrop(float TravelTime)
{
	return (TravelTime * TravelTime * 980 / 2);
}
bool Fov(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR2 PlayerW2SBone, float FovRadius)
{
	VECTOR2 Cenpoint;
	Cenpoint.X = PlayerW2SBone.X - (OverlayScreenWidth / 2);
	Cenpoint.Y = PlayerW2SBone.Y - (OverlayScreenHeight / 2);

	if (Cenpoint.X * Cenpoint.X + Cenpoint.Y * Cenpoint.Y <= FovRadius * FovRadius)
	{
		return true;
	}

	return false;
}

////FPS + UltraHD
void offsetsearch2(int offset, BYTE write[], SIZE_T size, DWORD header)
{
	DWORD pidd = Game::Id;
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
	DWORD addr = header + offset;
	unsigned long OldProtect;
	unsigned long OldProtect2;
	VirtualProtectEx(hProcess, (void*)addr, size, PAGE_EXECUTE_READWRITE, &OldProtect);
	WriteProcessMemory(hProcess, (void*)addr, write, size, NULL);
	//NtWriteVirtualMemory(phandle, (BYTE*)addr, write, size, NULL);
	VirtualProtectEx(hProcess, (void*)addr, size, OldProtect, NULL);
}


VECTOR2 GetMagicCoordinates()
{
	if (Data::AActorList.size() > 0)
	{

		VECTOR2 Coordinate;
		Coordinate.X = 0;
		Coordinate.Y = 0;
		VECTOR3 HeadPos;
		HeadPos.X = 0;
		HeadPos.Y = 0;
		HeadPos.Z = 0;
		VECTOR2 Screen;
		Screen.X = 0;
		Screen.Y = 0;
		VECTOR3 Velocity;
		Velocity.X = 0;
		Velocity.Y = 0;
		Velocity.Z = 0;
		FLOAT TargetDistance = 9999.0f;
		FLOAT CrossDist = 0;
		INT Distance4 = 0;
		VECTOR3 posi;


		for (AActor& AActor : Data::AActorList)
		{
			if (AActor.Health > 0 && !AActor.IsDead) //Alive
			{
				if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
				{
					if (Setting::fovcircle)
					{
						if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus))
						{
							HookMagic();
							CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));


							if (CrossDist < TargetDistance)
							{
								if (Setting::curraim == 0)
								{
									HeadPos = AActor.HeadPos;
									HeadPos.Z += 7;

								}
								if (Setting::curraim == 1)
								{
									HeadPos = AActor.ChestPos;
									HeadPos.Z += 3;

								}
								if (Setting::curraim == 2)
								{
									HeadPos = AActor.PelvisPos;
									HeadPos.Z += 1;

								}
								if (!Setting::knocked)
								{
									if (AActor.Health <= 0)
									{
										Memory::RestoreHook();
										continue;
									}
								}
								if (Setting::SkipBots)
								{
									if (AActor.IsBot)
									{
										Memory::RestoreHook();
										continue;
									}
								}
								TargetDistance = CrossDist;
								Velocity = AActor.Velocity;
							}


						}
						//else
						//{
						//	Memory::RestoreHook();
						//	MagicBulletList.clear();
						//	VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
						//	MagicBulletAddress = 0;
						//	MagicBulletHook = 0;
						//	ZeroMemory(RealByteCode, sizeof(RealByteCode));

						//	//MagicRested = true;
						//	Memory::IsMagicInitialized = false;

						//}
					}
					else /// feen ? 
					{
						HookMagic();
						if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
						{

							CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
							if (CrossDist < TargetDistance)
							{
								if (Setting::curraim == 0)
								{
									HeadPos = AActor.HeadPos;
									HeadPos.Z += 7;

								}
								if (Setting::curraim == 1)
								{
									HeadPos = AActor.ChestPos;
									HeadPos.Z += 3;

								}
								if (Setting::curraim == 2)
								{
									HeadPos = AActor.PelvisPos;
									HeadPos.Z += 1;

								}
								if (!Setting::knocked)
								{
									if (AActor.Health <= 0)
									{
										Memory::RestoreHook();
										continue;
									}
								}
								if (Setting::SkipBots)
								{
									if (AActor.IsBot)
									{
										Memory::RestoreHook();
										continue;
									}
								}
								TargetDistance = CrossDist;
								Velocity = AActor.Velocity;
							}
						}
					}


				}
			}
			if (AActor.Health <= 0 && !AActor.IsDead)
			{
				if (Setting::knocked)/////
				{
					if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
					{

						if (Setting::fovcircle)
						{
							if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
							{
								HookMagic();

								CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
								if (CrossDist < TargetDistance)
								{
									if (Setting::curraim == 0)
									{
										HeadPos = AActor.HeadPos;
										HeadPos.Z += 7;

									}
									if (Setting::curraim == 1)
									{
										HeadPos = AActor.ChestPos;
										HeadPos.Z += 3;

									}
									if (Setting::curraim == 2)
									{
										HeadPos = AActor.PelvisPos;
										HeadPos.Z += 1;

									}
									if (!Setting::knocked)
									{
										if (AActor.Health <= 0)
										{
											Memory::RestoreHook();
											continue;
										}
									}
									if (Setting::SkipBots)
									{
										if (AActor.IsBot)
										{
											Memory::RestoreHook();
											continue;
										}
									}
									TargetDistance = CrossDist;
									Velocity = AActor.Velocity;
								}

							}

						}
						else
						{
							HookMagic();
							if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
							{

								CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
								if (CrossDist < TargetDistance)
								{
									if (Setting::curraim == 0)
									{
										HeadPos = AActor.HeadPos;
										HeadPos.Z += 7;

									}
									if (Setting::curraim == 1)
									{
										HeadPos = AActor.ChestPos;
										HeadPos.Z += 3;

									}
									if (Setting::curraim == 2)
									{
										HeadPos = AActor.PelvisPos;
										HeadPos.Z += 1;

									}
									if (!Setting::knocked)
									{
										if (AActor.Health <= 0)
										{
											Memory::RestoreHook();
											continue;
										}
									}
									if (Setting::SkipBots)
									{
										if (AActor.IsBot)
										{
											Memory::RestoreHook();
											continue;
										}
									}
									TargetDistance = CrossDist;
									Velocity = AActor.Velocity;
								}
							}
						}

					}
				}
			}
			if (AActor.Health <= 0 && AActor.IsDead)
			{
				//Memory::RestoreHook();
				//MagicBulletList.clear();
				//VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
				//MagicBulletAddress = 0;
				//MagicBulletHook = 0;
				//ZeroMemory(RealByteCode, sizeof(RealByteCode));

				////MagicRested = true;
				//Memory::IsMagicInitialized = false;
			}
			if (Setting::fovcircle) {
				if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, HeadPos, Screen, &Distance4))
				{
					Memory::RestoreHook();
					continue;

				}
				if (!Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
				{
					Memory::RestoreHook();
					continue;
				}
			}
		}

		DWORD MeshAddv = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::Mesh);
		DWORD BodyAddv = MeshAddv + Offset::BodyAddv;
		DWORD BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
		VECTOR3 MyPosition = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);

		float AddTime = 30 / 10.0f + 1.0f;
		float Gravity = 5.72f;
		float distance = GetDistance(MyPosition, HeadPos) / 100.0f;
		float zAssist;
		if (distance < 5000.f)
			zAssist = 1.8f;
		else if (distance < 10000.f)
			zAssist = 1.72f;
		else if (distance < 15000.f)
			zAssist = 1.23f;
		else if (distance < 20000.f)
			zAssist = 1.24f;
		else if (distance < 25000.f)
			zAssist = 1.25f;
		else if (distance < 30000.f)
			zAssist = 1.26f;
		else if (distance < 35000.f)
			zAssist = 1.27f;
		else if (distance < 50000.f)
			zAssist = 1.28f;
		else if (distance < 45000.f)
			zAssist = 1.29f;
		else if (distance < 50000.f)
			zAssist = 1.30f;


		DWORD CurrentReloadWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
		DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrentReloadWeapon + Offset::ShootWeaponEntity);
		float BulletSpeed = Utility::ReadMemoryEx<FLOAT>(ShootWeaponEntity + Offset::BulletFireSpeed) / 750.f;
		float BulletTravelTime = distance / 750.0f;
		DWORD SceneComponent = Utility::ReadMemoryEx<INT>(Offset::RootComponent + 0x14C);
		DWORD VehicleCommon = Utility::ReadMemoryEx<INT>(Offset::VehicleCommon + 0x6dc);


		HeadPos.X += Velocity.X * BulletTravelTime;
		HeadPos.Y += Velocity.Y * BulletTravelTime;
		HeadPos.Z += Velocity.Z * BulletTravelTime * zAssist + 50.5f * 5.72f * BulletTravelTime * BulletTravelTime;


		FLOAT xDif = HeadPos.X - MyPosition.X;
		FLOAT yDif = HeadPos.Y - MyPosition.Y;
		FLOAT zDif = HeadPos.Z - MyPosition.Z;

		float Hyp = sqrt(xDif * xDif + yDif * yDif);
		Coordinate.X = atan2(zDif, Hyp) * 180.0f / 3.1415926535897f;
		Coordinate.Y = atan2(yDif, xDif) * 180.0f / 3.1415926535897f;

		return Coordinate;
	}
	else
	{
		Memory::RestoreHook();
		MagicBulletList.clear();
		VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
		MagicBulletAddress = 0;
		MagicBulletHook = 0;
		ZeroMemory(RealByteCode, sizeof(RealByteCode));

		//MagicRested = true;
		Memory::IsMagicInitialized = false;
	}

}
int Memory::AimFindBestTarget() {
	float targetDistance = 9999.f;
	VECTOR2 retval;
	int dist, headdist;
	int ret;
	for (int i = 0; i < Data::AActorList.size(); i++)
	{
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;
		VECTOR2 chest;
		VECTOR2 head;
		VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);


		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, chestPos, chest, &dist))
		{
			if (Setting::fovcircle)
			{
				if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, chest, Setting::fovcircleredus/*FovRadius*/))
				{
					float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
					if (cross_dist < targetDistance)
					{
						ret = i;
						targetDistance = cross_dist;

					}
				}
			}
			else
			{

				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));

				if (cross_dist < targetDistance)
				{
					ret = i;
					targetDistance = cross_dist;

				}

			}
		}
	}
	return ret;

}

static bool BulletKeyState = false;
bool  Memory::IsMagicInitialized = false;
VECTOR2 MagicCoordinate;
VECTOR3 AimRotation;
VOID Memory::MemoryThread()
{
	while (true)
	{
		Sleep(20);
		if (Data::NetDriver > 0)
		{
			if (Setting::MagicBullet || Setting::engine == 1)
			{
				if (IsMagicInitialized == false)
				{
					GetMagicAddress();
					InitializeMagic();
					IsMagicInitialized = true;
				}

				MagicCoordinate = GetMagicCoordinates();
				if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
				{
					if (IsMagicInitialized == false)
					{
						GetMagicAddress();
						InitializeMagic();
						IsMagicInitialized = true;
					}
					BulletKeyState = true;
					//MagicCoordinate = GetMagicCoordinates();
					Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 44, MagicCoordinate.X);
					Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 54, MagicCoordinate.Y);
					if (IsMagicInitialized == false)
					{
						GetMagicAddress();
						InitializeMagic();
						IsMagicInitialized = true;
					}
				}
				if (GetAsyncKeyState(VK_LBUTTON) == 0 && BulletKeyState == true && IsMagicInitialized == true) // كود فاشل هيخلي المجيك يتحول ل 0 ميطلعش من السلاح 
				{
					BulletKeyState = false;
					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					IsMagicInitialized = false;
				}
				else if (IsMagicInitialized == false)
				{
					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					GetMagicAddress();
					InitializeMagic();
					IsMagicInitialized = true;
				}
				if (GetAsyncKeyState(0x50))
				{
					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					IsMagicInitialized = false;
				}
			}
			else if (Setting::MagicBullet == false /*&& IsMagicInitialized == true*/)
			{
				RestoreHook();
				MagicBulletList.clear();
				VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
				MagicBulletAddress = 0;
				MagicBulletHook = 0;
				ZeroMemory(RealByteCode, sizeof(RealByteCode));
				//    MagicRested = false;
				IsMagicInitialized = false;
			}
		}
	}
}

















struct FRotator
{
	float Pitch;
	float Yaw;
	float Roll;
};

struct MinimalViewInfo
{
	VECTOR3 Location;
	VECTOR3 LocationLocalSpace;
	FRotator Rotation;
	float FOV;
};

struct CameraCacheEntry
{
	float TimeStamp;
	char chunks[0xC];
	MinimalViewInfo POV;
};

FRotator ToRotator(VECTOR3 local, VECTOR3 target)
{
	VECTOR3 rotation;
	rotation.X = local.X - target.X;
	rotation.Y = local.Y - target.Y;
	rotation.Z = local.Z - target.Z;

	FRotator newViewAngle = { 0 };

	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Roll = (float)0.f;

	if (rotation.X >= 0.f)
		newViewAngle.Yaw += 180.0f;

	return newViewAngle;
}

int SINGLEAOBSCAN(BYTE BypaRep[], SIZE_T size)
{
	DWORD pid = Game::Id;
	HANDLE phandle = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
	std::vector<DWORD_PTR> Bypassdo;
	Utility::MemSearch(BypaRep, size, 0x26000000, 0xB0000000, false, 0, Bypassdo);

	if (Bypassdo.size() != 0) {
		return Bypassdo[0];
	}
}


//void offsetsearch2(int offset, BYTE write[], SIZE_T size, DWORD header)
//{
//	DWORD pidd = Game::Id;
//	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
//	DWORD addr = header + offset;
//	unsigned long OldProtect;
//	unsigned long OldProtect2;
//	VirtualProtectEx(hProcess, (void*)addr, size, PAGE_EXECUTE_READWRITE, &OldProtect);
//	WriteProcessMemory(hProcess, (void*)addr, write, size, NULL);
//	//NtWriteVirtualMemory(phandle, (BYTE*)addr, write, size, NULL);
//	VirtualProtectEx(hProcess, (void*)addr, size, OldProtect, NULL);
//}

void WriteUE4Float(DWORD offset, float replace)
{
	DWORD pidd = Game::Id;
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
	DWORD libUE4Base = Utility::ReadMemoryEx<UINT>(0xE0C36E8);
	DWORD oldprotect;
	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_EXECUTE_READWRITE, &oldprotect);
	WriteProcessMemory(hProcess, (LPVOID)(libUE4Base + offset), &replace, sizeof(float), NULL);
	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_READONLY, &oldprotect);
}


VECTOR3 ClosestToCrosshair()
{
	float targetDistance = 500.0f;
	VECTOR2 retval;
	int dist, headdist;
	VECTOR3 ret;
	for (int i = 0; i < Data::AActorList.size(); i++) {
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;
		VECTOR2 chest;
		VECTOR2 head;
		//VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 3 * 48); 
		VECTOR3 CurrPos = { 0 };
		if (Setting::curraim == 0) {
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 5 * 48);
			//CurrPos.z += 15; 
		}
		if (Setting::curraim == 1)
		{
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);
		}
		if (Setting::curraim == 2)
		{
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 1 * 48);
		}
		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
		{
			if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
			{
				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));

				if (cross_dist < targetDistance)
				{
					ret = CurrPos;
					targetDistance = cross_dist;

				}
			}

		}
	}
	return ret;
}












bool IsFlyCarInitialized = false;

BYTE FlyCarSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };

VOID SetFlyCarAddress()
{
	std::vector<DWORD_PTR> FoundedBase;
	Utility::FindPattern(FlyCarSearch, sizeof(FlyCarSearch), 0x10000000, 0x90000000, 0, 0, FoundedBase);
	FlyCarAddress = FoundedBase[0];
}



//bool IsFlyCarInitialized = false;
//
//
//BYTE FlyCarSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };
//
//VOID SetFlyCarAddress()
//{
//	std::vector<DWORD_PTR> FoundedBase;
//	Utility::FindPattern(FlyCarSearch, sizeof(FlyCarSearch), 0x10000000, 0x90000000, 0, 0, FoundedBase);
//	FlyCarAddress = FoundedBase[0];
//}
//
//struct FRotator 
//{
//	float Pitch;
//	float Yaw;
//	float Roll;
//};
//
//struct MinimalViewInfo 
//{
//	VECTOR3 Location;
//	VECTOR3 LocationLocalSpace;
//	FRotator Rotation;
//	float FOV;
//};
//
//struct CameraCacheEntry 
//{
//	float TimeStamp;
//	char chunks[0xC];
//	MinimalViewInfo POV;
//};
//
//FRotator ToRotator(VECTOR3 local, VECTOR3 target) 
//{
//	VECTOR3 rotation = Subtract(local, target);
//
//	FRotator newViewAngle = { 0 };
//
//	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
//
//	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
//	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
//	newViewAngle.Roll = (float)0.f;
//
//	if (rotation.X >= 0.f)
//		newViewAngle.Yaw += 180.0f;
//
//	return newViewAngle;
//}
//
//int SINGLEAOBSCAN(BYTE BypaRep[], SIZE_T size)
//{
//	DWORD pid = Game::Id;
//	HANDLE phandle = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
//	std::vector<DWORD_PTR> Bypassdo;
//	Utility::MemSearch(BypaRep, size, 0x26000000, 0xB0000000, false, 0, Bypassdo);
//
//	if (Bypassdo.size() != 0) {
//		return Bypassdo[0];
//	}
//}
//
//
////void offsetsearch2(int offset, BYTE write[], SIZE_T size, DWORD header)
////{
////	DWORD pidd = Game::Id;
////	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
////	DWORD addr = header + offset;
////	unsigned long OldProtect;
////	unsigned long OldProtect2;
////	VirtualProtectEx(hProcess, (void*)addr, size, PAGE_EXECUTE_READWRITE, &OldProtect);
////	WriteProcessMemory(hProcess, (void*)addr, write, size, NULL);
////	//NtWriteVirtualMemory(phandle, (BYTE*)addr, write, size, NULL);
////	VirtualProtectEx(hProcess, (void*)addr, size, OldProtect, NULL);
////}
//
//void WriteUE4Float(DWORD offset, float replace)
//{
//	DWORD pidd = Game::Id;
//	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
//	DWORD libUE4Base = Utility::ReadMemoryEx<UINT>(0xE0C36E8);
//	DWORD oldprotect;
//	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_EXECUTE_READWRITE, &oldprotect);
//	WriteProcessMemory(hProcess, (LPVOID)(libUE4Base + offset), &replace, sizeof(float), NULL);
//	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_READONLY, &oldprotect);
//}
//
//VECTOR3 ClosestToCrosshair()
//{
//	//Sleep(20);
//	float targetDistance = 9999.0;
//	VECTOR2 retval;
//	int dist, headdist;
//	VECTOR3 ret;
//	for (int i = 0; i < Data::AActorList.size(); i++) {
//		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
//		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
//		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;
//		VECTOR2 chest;
//		VECTOR2 head;
//		//VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 3 * 48); 
//		VECTOR3 CurrPos = { 0 };
//		if (Setting::curraim == 0) {
//			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 5 * 48);
//			//CurrPos.z += 15; 
//		}
//		if (Setting::curraim == 1)
//		{
//			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);
//		}
//		if (Setting::curraim == 2)
//		{
//			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 1 * 48);
//		}
//		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
//		{
//			if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
//			{
//				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
//
//				if (cross_dist < targetDistance)
//				{
//					ret = CurrPos;
//					targetDistance = cross_dist;
//
//				}
//			}
//
//		}
//	}
//	return ret;
//}


////Allinone

VOID Memory::ALLINONEThread()
{
	while (true)
	{
		//instanthit

		if (Setting::instanthit)
		{
			DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
			if (weaponOffSet != 0)
			{
				DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeaponEntity);
				if (shootOffset != 0)
				{
					//float x = 770000.0f;

					float InstantHit = Utility::ReadMemoryEx<FLOAT>(shootOffset + Offset::BulletFireSpeed);

					if (InstantHit != Setting::instantv)
					{
						//WriteProcessMemory(Offsets::pHandle, (void*)(Memory::iGet(weaponOffSet + 3244) + 964), &x, sizeof(float), NULL);
						Utility::WriteMemoryEx<float>(shootOffset + Offset::BulletFireSpeed, Setting::instantv);
					}
				}
			}
		}


		//CameraCatch

		if (Setting::CameraCatch)
		{
			DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x2B24);
			if (LocalController)
			{

				DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + 0x360);
				if (PlayerCameraManager)
				{
					CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x370);

					VECTOR3 HeadPosition = ClosestToCrosshair();
					VECTOR3 currentViewAngle = CameraCache.POV.Location;

					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
					{
						FRotator aimRotation = ToRotator(currentViewAngle, HeadPosition);
						CameraCache.POV.Rotation = aimRotation;
						Utility::WriteMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x370, CameraCache);

					}
				}
			}
		}

		if (Setting::ipadview)
		{
			WriteUE4Float(0x40897E4, Setting::IPADSIZE);//0x3c24c14
			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
		}
		else if (!Setting::ipadview)
		{
			WriteUE4Float(0x40897E4, 360);//0x3c24c14

			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
		}

		//FPS
		bool FPS = false;
		if (Setting::NINEFPS && FPS == false)
		{
			DWORD libUE4Base = Utility::ReadMemoryEx<UINT>(0xE0C36E8);

			BYTE NINEFPS1[] = { 0x5A, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1 };
			offsetsearch2(0x1C0D918, NINEFPS1, sizeof(NINEFPS1), libUE4Base);
			FPS = true;
		}
		else if (Setting::NINEFPS && FPS == true)
		{
			DWORD libUE4Base = Utility::ReadMemoryEx<UINT>(0xE0C36E8);

			BYTE NINEFPS2[] = { 0x5A, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1 };
			offsetsearch2(0x1C0D918, NINEFPS2, sizeof(NINEFPS2), libUE4Base);
			FPS = false;
		}

		if (Setting::MagicX)
		{
			BYTE pattern[] = { 0x41 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
			BYTE patter2[] = { 0x45 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
		}
		else if (!Setting::MagicX)
		{
			BYTE patter2[] = { 0x45 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
			BYTE pattern[] = { 0x41 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
		}
		if (Setting::MagicX)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		//Speedcar
		//if (Setting::speedcar)
		//{

		//	if (GetAsyncKeyState(VK_LSHIFT) & 0x8000) {
		//		auto currentvehicla = Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0xfd0) + 0x194) + 0x58);
		//		if (currentvehicla)
		//		{

		//			//RepMovement rep = Utility::ReadMemoryEx<RepMovement>(currentvehicla + Offset::ReplicatedMovement);
		//			//VECTOR3 Velocity = rep.LinearVelocity;
		//			//Velocity.X = (float)Setting::carsv;

		//			Utility::WriteMemoryEx<float>(currentvehicla, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 4, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 8, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 12, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 16, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 20, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 24, (float)Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 28, (float)Setting::carsv);

		//		}
		//	}
		//	else if (GetAsyncKeyState('S') & 0x8000) {
		//		auto currentvehicla = Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0xfd0) + 0x194) + 0x58);
		//		if (currentvehicla)
		//		{

		//			//RepMovement rep = Utility::ReadMemoryEx<RepMovement>(currentvehicla + Offset::ReplicatedMovement);
		//			//VECTOR3 Velocity = rep.LinearVelocity;
		//			//Velocity.X = (float)Setting::carsv;

		//			Utility::WriteMemoryEx<float>(currentvehicla, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 4, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 8, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 12, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 16, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 20, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 24, (float)-Setting::carsv);
		//			Utility::WriteMemoryEx<float>(currentvehicla + 28, (float)-Setting::carsv);

		//		}
		//	}
		//}


		//Fast Run
		/*if (Setting::fastrun)
		{
			if (GetAsyncKeyState(VK_LSHIFT) & 1) {
				float write = Setting::fastrv;


				Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x2220, write);
			}
			else if (GetAsyncKeyState(VK_LSHIFT) == 0)
			{
				float writee = 1.0f;

				Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x2220, writee);
			}



		}*/


		//Les Recoil
		/*if (Setting::recoil)
		{
			DWORD CurrentWeapon = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
			if (CurrentWeapon != 0)
			{
				DWORD ShootWeapon = Utility::ReadMemoryEx<INT>(CurrentWeapon + Offset::ShootWeaponEntity);

				if (ShootWeapon != 0)
				{
					Utility::WriteMemoryEx<float>(ShootWeapon + Offset::AccessoriesVRecoilFactor, 0.0f);
					Utility::WriteMemoryEx<float>(ShootWeapon + Offset::AccessoriesHRecoilFactor, 0.0f);

				}
			}
		}*/


		//Carfly
		/*if (Setting::carfly)
		{
			if (IsFlyCarInitialized == false)
			{
				SetFlyCarAddress();

				IsFlyCarInitialized = true;
			}

			if (GetAsyncKeyState(VK_SPACE) & 1)
			{
				Utility::WriteMemoryEx<FLOAT>(FlyCarAddress, Setting::flycarv);
			}
			else if (GetAsyncKeyState(VK_SPACE) == 0)
			{
				if (Utility::ReadMemoryEx<float>(FlyCarAddress) != Setting::flycarv)
				{
					Utility::WriteMemoryEx<FLOAT>(FlyCarAddress, Setting::flycarv);
				}
			}
		}*/



		/*if (Setting::instanthit)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		if (Setting::
		)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		if (Setting::fastrun)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		if (Setting::recoil)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		if (Setting::carfly)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		if (Setting::speedcar)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		if (Setting::CameraCatch)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(0));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}*/



		/////////////GodView
		if (Setting::GodView)
		{
			bool godview1 = false;
			bool godview2 = false;
			bool godview3 = false;
			bool godview4 = false;
			bool godview5 = false;

			DWORD body = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11d0);
			DWORD camera = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1324);
			if (GetAsyncKeyState(Setting::GodDown)) // C down
			{
				Utility::WriteMemoryEx<FLOAT>(camera + 0x120, -280); //0x120 // 0x11c //-288
				Utility::WriteMemoryEx<FLOAT>(body + 0x120, -280);
				godview1 = true;
			}
			if (Setting::GodView)
			{
				if (!GetAsyncKeyState(Setting::GodDown) && godview1 == true)
				{
					Utility::WriteMemoryEx<FLOAT>(body + 0x120, 0);
					Utility::WriteMemoryEx<FLOAT>(camera + 0x120, 0);
					godview1 = false;
				}
			}
			if (Setting::GodView)
			{
				DWORD root = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x164) + 0x158;
				if (GetAsyncKeyState(Setting::GodUp))
				{
					FLOAT ground;
					ReadProcessMemory(Game::hProcess, (LPCVOID)root, &ground, sizeof(ground), nullptr);
					while (true)
					{
						Utility::WriteMemoryEx<FLOAT>(root, ground + 281);
						if (!GetAsyncKeyState(Setting::GodUp))
						{
							break;
						}
					}
				}
			}
			if (Setting::GodView)
			{
				DWORD body = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1344);
				DWORD camera = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11f0);
				if (GetAsyncKeyState(Setting::GodRight)) // E //right
				{
					Utility::WriteMemoryEx<FLOAT>(camera + 0x11c, 360); //0x120 // 0x11c //-288
					Utility::WriteMemoryEx<FLOAT>(body + 0x11c, 360);
					godview2 = true;
				}
				if (Setting::GodView)
				{
					if (!GetAsyncKeyState(Setting::GodRight) && godview2 == true)
					{
						Utility::WriteMemoryEx<FLOAT>(body + 0x11c, 0);
						Utility::WriteMemoryEx<FLOAT>(camera + 0x11c, 0);
						godview2 = false;
					}
				}
				if (Setting::GodView)
				{
					DWORD body = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1344);
					DWORD camera = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11f0);
					if (GetAsyncKeyState(Setting::GodLeft)) // Q //left
					{
						Utility::WriteMemoryEx<FLOAT>(camera + 0x11c, -360); //0x120 // 0x11c //-288
						Utility::WriteMemoryEx<FLOAT>(body + 0x11c, -360);
						godview3 = true;
					}
				}
				if (Setting::GodView)
				{
					if (!GetAsyncKeyState(Setting::GodLeft) && godview3 == true)
					{
						Utility::WriteMemoryEx<FLOAT>(body + 0x11c, 0);
						Utility::WriteMemoryEx<FLOAT>(camera + 0x11c, 0);
						godview3 = false;
					}
				}
				if (Setting::GodView)
				{
					DWORD body = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1344);
					DWORD camera = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11f0);
					if (GetAsyncKeyState(Setting::GodFront)) // F
					{
						Utility::WriteMemoryEx<FLOAT>(camera + 0x118, 288); //0x120 // 0x11c //-288
						Utility::WriteMemoryEx<FLOAT>(body + 0x118, 288);
						godview4 = true;
					}
					if (Setting::GodView)
					{
						if (!GetAsyncKeyState(Setting::GodFront) && godview4 == true)
						{
							Utility::WriteMemoryEx<FLOAT>(body + 0x118, 0);
							Utility::WriteMemoryEx<FLOAT>(camera + 0x118, 0);
							godview4 = false;
						}
					}
				}
			}
		}



		if (Memory::ALLINONEThread)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		}
	}

}

////VOID Memory::GODVIEW1()
////{
////	bool GodView = false;
////
////	while (true)
////	{
////		if (Setting::GodView1)
////		{
////			//DWORD oldprotect, temps;
////			//DWORD oldprotect;
////			float GodViewtop = 280.0f;
////			float GodViewdown = -200.0f;
////			float GodViewdefult = 1.0f;
////			DWORD GodControl = Utility::ReadMemoryEx<INT>(Data::PlayerController + 0x1124);
////			DWORD View = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1324);
////			DWORD self = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11d0);
////			DWORD AllControl = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1bd8);
////
////			DWORD oldprotect;
////			float GodViewValueV = -280.f;
////			float GodViewValueR = 80.f;
////			//    VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x111C), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
////			//    Utility::WriteMemoryEx<FLOAT>(Data::LocalPlayer + 0x111C, 80.0f);
////			DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
////			DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
////			DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
////			DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);
////
////			if (GetAsyncKeyState(Setting::GodUp)) //y key
////			{
////
////				//Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C);
////				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, 240.0f); // UP VALA JADA HAI? value kam karo
////
////
////				Utility::WriteMemoryEx<FLOAT>(GodControl + 0x120, GodViewtop);
////				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewtop);
////				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewtop);
////				Utility::WriteMemoryEx<FLOAT>(AllControl + 0x120, GodViewtop);
////
////				//Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C); 
////				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, -280.0f);
////
////				VirtualProtectEx(Game::hProcess, LPVOID(Data::PlayerController + 0x1124), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
////				VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x1324), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
////				VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x11d0), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
////				VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x1bd8), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
////				//WriteProcessMemory(Game::hProcess, (LPVOID)(Data::LocalPlayer + 0x1b38), &GodViewValueV, 4, NULL);
////				VirtualProtectEx(Game::hProcess, LPVOID(uMyObject + 0x1124), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
////				//WriteProcessMemory(Game::hProcess, (LPVOID)(uMyObject + 0x1124), &GodViewValueV, 4, NULL);
////
////
////				GodView = true;
////
////
////			}
////			if (GetAsyncKeyState(Setting::GodDown)) { //h key
////				Utility::WriteMemoryEx<FLOAT>(GodControl + 0x120, GodViewdown);
////				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewdown);
////				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdown);
////				Utility::WriteMemoryEx<FLOAT>(AllControl + 0x120, GodViewdown);
////
////				//Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C);
////				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, -280.0f);
////				GodView = true;
////
////			}
////			if (!GetAsyncKeyState(Setting::GodUp) && !GetAsyncKeyState(Setting::GodDown) && GodView == true)
////			//if (!GetAsyncKeyState(Setting::GodUp) && !GetAsyncKeyState(Setting::GodDown) && GodView == true)
////			{
////				Utility::WriteMemoryEx<FLOAT>(GodControl + 0x120, GodViewdefult);
////				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewdefult);
////				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdefult);
////				Utility::WriteMemoryEx<FLOAT>(AllControl + 0x120, GodViewdefult);
////
////				Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C);
////				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, 80.0f);
////
////				float write = 1.0f;
////				Utility::WriteMemoryEx<float>(Data::PlayerController + 0x1124, write);
////				GodView = false;
////
////
////			}
////			std::this_thread::sleep_for(std::chrono::milliseconds(100));
////		}
////	}
////}


//VOID Memory::GODVIEW1()
//{
//	bool GodView = false;
//
//	while (true)
//	{
//		if (Setting::GodView1)
//		{
//			//DWORD oldprotect, temps;
//			//DWORD oldprotect;
//			float GodViewtop = 280.0f;
//			float GodViewdown = -200.0f;
//			float GodViewdefult = 1.0f;
//			DWORD GodControl = Utility::ReadMemoryEx<INT>(Data::PlayerController + 0x1124);
//			DWORD View = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1324);
//			DWORD self = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11d0);
//			DWORD AllControl = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1bd8);
//
//			DWORD oldprotect;
//			float GodViewValueV = -280.f;
//			float GodViewValueR = 80.f;
//			//    VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x111C), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//			//    Utility::WriteMemoryEx<FLOAT>(Data::LocalPlayer + 0x111C, 80.0f);
//			DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//			DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//			DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//			DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);
//
//			if (GetAsyncKeyState(Setting::GodUp)) //y key
//			{
//
//				//Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C);
//				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, 240.0f); // UP VALA JADA HAI? value kam karo
//
//
//				Utility::WriteMemoryEx<FLOAT>(GodControl + 0x120, GodViewtop);
//				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewtop);
//				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewtop);
//				Utility::WriteMemoryEx<FLOAT>(AllControl + 0x120, GodViewtop);
//
//				//Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C); 
//				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, -280.0f);
//
//				VirtualProtectEx(Game::hProcess, LPVOID(Data::PlayerController + 0x1124), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x1324), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x11d0), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x1bd8), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				//WriteProcessMemory(Game::hProcess, (LPVOID)(Data::LocalPlayer + 0x1b38), &GodViewValueV, 4, NULL);
//				VirtualProtectEx(Game::hProcess, LPVOID(uMyObject + 0x1124), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				//WriteProcessMemory(Game::hProcess, (LPVOID)(uMyObject + 0x1124), &GodViewValueV, 4, NULL);
//
//
//				GodView = true;
//
//
//			}
//			if (GetAsyncKeyState(Setting::GodDown)) { //h key
//				Utility::WriteMemoryEx<FLOAT>(GodControl + 0x120, GodViewdown);
//				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewdown);
//				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdown);
//				Utility::WriteMemoryEx<FLOAT>(AllControl + 0x120, GodViewdown);
//
//				//Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C);
//				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, -280.0f);
//				GodView = true;
//
//			}
//			if (!GetAsyncKeyState(Setting::GodUp) && !GetAsyncKeyState(Setting::GodDown) && GodView == true)
//				//if (!GetAsyncKeyState(Setting::GodUp) && !GetAsyncKeyState(Setting::GodDown) && GodView == true)
//			{
//				Utility::WriteMemoryEx<FLOAT>(GodControl + 0x120, GodViewdefult);
//				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewdefult);
//				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdefult);
//				Utility::WriteMemoryEx<FLOAT>(AllControl + 0x120, GodViewdefult);
//
//				Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x111C);
//				//Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x1b38, 80.0f);
//
//				float write = 1.0f;
//				Utility::WriteMemoryEx<float>(Data::PlayerController + 0x1124, write);
//				GodView = false;
//
//
//			}
//			std::this_thread::sleep_for(std::chrono::milliseconds(100));
//		}
//	}
//}


//////bool IsGodViewInitialized = false;
//////DWORD GodViewAddress = 0;
//////DWORD uMyObject = 0;
//////const DWORD GodViewOffset = 0x111c;
//////BYTE GodViewSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };
//////
//////VOID SetGodViewAddress()
//////{
//////	DWORD oldprotect;
//////	float GodViewValue = 420.0f;
//////	DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//////	DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//////	DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//////	DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x328);
//////	VirtualProtectEx(Game::hProcess, LPVOID(uMyObject + 0x1134), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//////	WriteProcessMemory(Game::hProcess, (LPVOID)(uMyObject + 0x1134), &GodViewValue, 4, NULL);
//////	VirtualProtectEx(Game::hProcess, LPVOID(playerController + 0x6969), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//////	Utility::WriteMemoryEx<float>(playerController + 0x6969, 420.0f);
//////	Utility::WriteMemoryEx<float>(GodViewOffset + 0x111c, 420.0f);
//////	std::vector<DWORD_PTR> FoundedBase;
//////	Utility::FindPattern(GodViewSearch, sizeof(GodViewSearch), 0x10000000, 0xA0000000, 0, 0, FoundedBase);
//////	GodViewAddress = FoundedBase[0];
//////}
//////
//////void Memory::GODVIEW1()
//////{
//////	bool IsChanged = false;
//////	while (true)
//////	{
//////		if (Setting::GodView1)
//////		{
//////			if (IsGodViewInitialized == false)
//////			{
//////				SetGodViewAddress();
//////
//////				//float GodViewValue = 420.0f;
//////
//////				IsGodViewInitialized = true;
//////			}
//////
//////			if (GetAsyncKeyState(0x56) & 1)
//////			{
//////				Utility::WriteMemoryEx<FLOAT>(GodViewAddress, Setting::GodViewPower);
//////			}
//////			else if (GetAsyncKeyState(0x56) == 0)
//////			{
//////				if (Utility::ReadMemoryEx<float>(GodViewAddress) != -420.0f)
//////				{
//////					Utility::WriteMemoryEx<FLOAT>(GodViewAddress, -420.0f);
//////				}
//////			}
//////		}
//////	}
//////}
//////
//////int GodViewPower = 420.0f;

//void Memory::GODVIEW9()
//{
//	if (Setting::GodView)
//	{
//		DWORD oldprotect;
//		float GodViewValueV = 280.f;
//		float GodViewValueR = 80.f;
//		//    VirtualProtectEx(Game::hProcess, LPVOID(Data::LocalPlayer + 0x111C), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//		//    Utility::WriteMemoryEx<FLOAT>(Data::LocalPlayer + 0x111C, 80.0f);
//		DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//		DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//		DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//		DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x328);
//		//Utility::WriteMemoryEx<float>(uMyObject + 0x111C, rrrrr);
//		if (Setting::GodViewA)
//		{
//			VirtualProtectEx(Game::hProcess, LPVOID(uMyObject + 0x1134), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//			WriteProcessMemory(Game::hProcess, (LPVOID)(uMyObject + 0x1134), &GodViewValueV, 4, NULL);
//		}
//		else if (!Setting::GodViewA)
//		{
//			VirtualProtectEx(Game::hProcess, LPVOID(uMyObject + 0x1134), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//			WriteProcessMemory(Game::hProcess, (LPVOID)(uMyObject + 0x1134), &GodViewValueR, 4, NULL);
//		}
//	}
//}

//bool IsFlyManInitialized = false;
//DWORD FlyManAddress = 0;
//BYTE FlyManSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };
//
//VOID SetFlyManAddress()
//{
//	std::vector<DWORD_PTR> FoundedBase;
//	Utility::FindPattern(FlyManSearch, sizeof(FlyManSearch), 0x10000000, 0xA0000000, 0, 0, FoundedBase);
//	FlyManAddress = FoundedBase[0];
//}//FlyMan Code By Dev-RUDRAISLIVE
//
//void Memory::flyman()
//{
//	bool IsChanged = false;
//	while (true)
//	{
//		if (Setting::fly)
//		{
//			if (IsFlyManInitialized == false)
//			{
//				SetFlyManAddress();
//
//				IsFlyManInitialized = true;
//			}
//
//			if (GetAsyncKeyState(VK_SPACE) & 1)
//			{
//				Utility::WriteMemoryEx<FLOAT>(FlyManAddress, Setting::flyPower);//Add This In Memory.cpp
//			}
//			else if (GetAsyncKeyState(VK_SPACE) == 0)
//			{
//				if (Utility::ReadMemoryEx<float>(FlyManAddress) != -980.0f)
//				{
//					Utility::WriteMemoryEx<FLOAT>(FlyManAddress, -980.0f);
//				}
//			}
//		}
//	}
//}

//struct FRotator
//{
//	float Pitch;
//	float Yaw;
//	float Roll;
//};
//
//struct MinimalViewInfo
//{
//	VECTOR3 Location;
//	VECTOR3 LocationLocalSpace;
//	FRotator Rotation;
//	float FOV;
//};
//
//struct CameraCacheEntry
//{
//	float TimeStamp;
//	char chunks[0xC];
//	MinimalViewInfo POV;
//};
//
//FRotator ToRotator(VECTOR3 local, VECTOR3 target)
//{
//	VECTOR3 rotation;
//	rotation.X = local.X - target.X;
//	rotation.Y = local.Y - target.Y;
//	rotation.Z = local.Z - target.Z;
//
//	FRotator newViewAngle = { 0 };
//
//	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
//
//	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
//	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
//	newViewAngle.Roll = (float)0.f;
//
//	if (rotation.X >= 0.f)
//		newViewAngle.Yaw += 180.0f;
//
//	return newViewAngle;
//}

//VECTOR3 ClosestToCrosshair()
//{
//	Sleep(20);
//	float targetDistance = 500.0f;
//	VECTOR2 retval;
//	int dist, headdist;
//	VECTOR3 ret;
//	for (int i = 0; i < Data::AActorList.size(); i++) {
//		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + 800);
//		DWORD bodyAddv = tmpAddv + 336;
//		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + 0x5b0) + 48;
//		VECTOR2 chest;
//		VECTOR2 head;
//		//VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 3 * 48); 
//		VECTOR3 CurrPos = { 0 };
//		if (Setting::curraim == 0) {
//			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 5 * 48);
//			//CurrPos.z += 15; 
//		}
//		if (Setting::curraim == 1)
//		{
//			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);
//		}
//		if (Setting::curraim == 2)
//		{
//			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 1 * 48);
//		}
//		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
//		{
//			if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
//			{
//				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
//
//				if (cross_dist < targetDistance)
//				{
//					ret = CurrPos;
//					targetDistance = cross_dist;
//
//				}
//			}
//
//		}
//	}
//	return ret;
//}

//void Memory::magnatbullot()
//{
//	while (true)
//	{
//		//Sleep(10);
//		if (Setting::CameraCatch)
//		{
//			DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x2B24);
//			if (LocalController)
//			{
//
//				DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + 0x360);
//				if (PlayerCameraManager)
//				{
//					CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x370);
//
//					VECTOR3 HeadPosition = ClosestToCrosshair();
//					VECTOR3 currentViewAngle = CameraCache.POV.Location;
//
//					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
//					{
//						FRotator aimRotation = ToRotator(currentViewAngle, HeadPosition);
//						CameraCache.POV.Rotation = aimRotation;
//						Utility::WriteMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x370, CameraCache);
//
//					}
//				}
//			}
//		}
//		std::this_thread::sleep_for(std::chrono::milliseconds(0));
//	}
//}
//void Memory::Instant() {
//	while (true)
//	{
//		if (Setting::instanthit)
//		{
//			DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//			DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//			DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//			DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);
//			int weaponOffSet = Utility::ReadMemoryEx<INT>(uMyObject + 6188);
//			if (weaponOffSet != 0)
//			{
//				int shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + 3468);
//
//				if (shootOffset != 0)
//				{
//					//float x = 770000.0f;
//
//					float InstantHit = Utility::ReadMemoryEx<FLOAT>(shootOffset + 980);
//					if (InstantHit != Setting::instantv)
//					{
//						//WriteProcessMemory(Offsets::pHandle, (void*)(Memory::iGet(weaponOffSet + 3244) + 964), &x, sizeof(float), NULL);
//						Utility::WriteMemoryEx<float>(shootOffset + 980, Setting::instantv);
//					}
//				}
//			}
//		}
//		//std::this_thread::sleep_for(std::chrono::milliseconds(200));
//
//		
//	}
//}

//void Memory::FastCar() {
//	while (true)
//	{
//		if (Setting::speedcar)
//		{
//		
//			if (GetAsyncKeyState(VK_LSHIFT)) {
//
//
//				DWORD num12 = Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x16c) + 0x710) + 0x6f0) + 0x258) + 0x5c);
//				Utility::WriteMemoryEx<float>(num12, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 4, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 8, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 12, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 16, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 20, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 24, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 28, Setting::carsv);
//
//			}
//		}
//		std::this_thread::sleep_for(std::chrono::milliseconds(400));
//	}
//}

//void Memory::FastRunn() {
//	while (true)
//	{
//		if (Setting::fastrun)
//		{
//			if (GetAsyncKeyState(VK_LSHIFT) & 1) {
//				float write = Setting::fastrv;
//
//
//				Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x2220, write);
//			}
//			else if (GetAsyncKeyState(VK_LSHIFT) == 0)
//			{
//				float writee = 1.0f;
//
//				Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x2220, writee);
//			}
//
//
//
//		}
//		//std::this_thread::sleep_for(std::chrono::milliseconds(200));
//	}
//}

//void Memory::norecoil()
//{
//	while (true)
//	{
//		Sleep(10);
//		if (Setting::recoil)
//		{
//			DWORD CurrentWeapon = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
//			if (CurrentWeapon != 0)
//			{
//				DWORD ShootWeapon = Utility::ReadMemoryEx<INT>(CurrentWeapon + Offset::ShootWeaponEntity);
//
//				if (ShootWeapon != 0)
//				{
//					Utility::WriteMemoryEx<float>(ShootWeapon + Offset::AccessoriesVRecoilFactor, 0.0f);
//					Utility::WriteMemoryEx<float>(ShootWeapon + Offset::AccessoriesHRecoilFactor, 0.0f);
//
//				}
//			}
//		}
//		std::this_thread::sleep_for(std::chrono::milliseconds(200));
//	}
//}



//bool IsFlyCarInitialized = false;
//
//
//BYTE FlyCarSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };
//
//VOID SetFlyCarAddress()
//{
//	std::vector<DWORD_PTR> FoundedBase;
//	Utility::FindPattern(FlyCarSearch, sizeof(FlyCarSearch), 0x10000000, 0x90000000, 0, 0, FoundedBase);
//	FlyCarAddress = FoundedBase[0];
//}
//
//
//void Memory::flyCar()
//{
//	while (true)
//	{
//
//
//		if (Setting::carfly)
//		{
//			if (IsFlyCarInitialized == false)
//			{
//				SetFlyCarAddress();
//
//				IsFlyCarInitialized = true;
//			}
//
//			if (GetAsyncKeyState(VK_SPACE) & 1)
//			{
//				Utility::WriteMemoryEx<FLOAT>(FlyCarAddress, Setting::flycarv);
//			}
//			else if (GetAsyncKeyState(VK_SPACE) == 0)
//			{
//				if (Utility::ReadMemoryEx<float>(FlyCarAddress) != Setting::flycarv)
//				{
//					Utility::WriteMemoryEx<FLOAT>(FlyCarAddress, Setting::flycarv);
//				}
//			}
//		}
//		std::this_thread::sleep_for(std::chrono::milliseconds(200));
//	}
//}

//void Memory::MagicX()
//{
//
//	bool IsChanged = false;
//	while (true)
//	{
//		if (Setting::MagicX && IsChanged == false)
//		{
//			BYTE pattern[] = { 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
//			BYTE patter2[] = { 0x00, 0x08, 0xF3, 0x45, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//		//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = true;
//		}
//		else if (!Setting::MagicX && IsChanged == true)
//		{
//			BYTE pattern[] = { 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
//			BYTE patter2[] = { 0x00, 0x08, 0xF3, 0x45, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//		//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = false;
//		}
//		if (Setting::MagicX)
//			std::this_thread::sleep_for(std::chrono::milliseconds(70));
//		else {
//			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//		}
//	}
//
//}
//
//void Memory::MagicBct()
//{
//
//	bool IsChanged1 = false;
//	while (true)
//	{
//		if (Setting::magicb && IsChanged1 == false)
//		{
//			//std::thread([=]()
//				//{
//
//					BYTE Scan[] = { 0xB8, 0x41, 0x00, 0x00, 0xC8, 0x41, 0x00, 0x00, 0xF4, 0x41 };
//					BYTE Replace[] = { 0xB8, 0x43, 0x00, 0x00, 0xAF, 0x96, 0x00, 0x00, 0xAF, 0x43 };
//					BYTE Scan2[] = { 0x01, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', 0x3F, '?', 0x00, 0x00, 0x00, 0x01 };
//                    BYTE Replace2[] = { 0x01, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', 0xFA, 0x96, 0x28, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', 0x3F, '?', 0x00, 0x00, 0x00, 0x01 };
//					BYTE Scan3[] = { 0xB8, 0x41, 0x00, 0x00, 0xC8, 0x41, 0x00, 0x00, 0xF4, 0x41 };
//					BYTE Replace3[] = { 0xB8, 0x41, 0x00, 0x00, 0xAF, 0x43, 0x00, 0x00, 0xAF, 0x43 };
//					BYTE Scan4[] = { 0xB8, 0x41, 0x00, 0x00, 0x2F, 0x44, 0x00, 0x00, 0x2F, 0x44 };
//					BYTE Replace4[] = { 0xB8, 0x41, 0x00, 0x00, 0xAF, 0x43, 0x00, 0x00, 0xAF, 0x43 };
//
//					Utility::AOBREP(Scan, Replace, sizeof(Scan), sizeof(Replace), 4000);
//					Utility::AOBREP(Scan2, Replace2, sizeof(Scan2), sizeof(Replace2), 4000);
//					Utility::AOBREP(Scan3, Replace3, sizeof(Scan3), sizeof(Replace3), 4000);
//					Utility::AOBREP(Scan4, Replace4, sizeof(Scan4), sizeof(Replace4), 4000);
//
//
//					IsChanged1 = true;
//				//}).detach();
//		}
//		else if (!Setting::magicb && IsChanged1 == true)
//		{
//			//std::thread([=]()
//				//{
//			BYTE Scan[] = { 0xB8, 0x41, 0x00, 0x00, 0xC8, 0x41, 0x00, 0x00, 0xF4, 0x41 };
//			BYTE Replace[] = { 0xB8, 0x43, 0x00, 0x00, 0xAF, 0x96, 0x00, 0x00, 0xAF, 0x43 };
//			BYTE Scan2[] = { 0x01, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', 0x3F, '?', 0x00, 0x00, 0x00, 0x01 };
//			BYTE Replace2[] = { 0x01, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', 0xFA, 0x96, 0x28, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', 0x3F, '?', 0x00, 0x00, 0x00, 0x01 };
//			BYTE Scan3[] = { 0xB8, 0x41, 0x00, 0x00, 0xC8, 0x41, 0x00, 0x00, 0xF4, 0x41 };
//			BYTE Replace3[] = { 0xB8, 0x41, 0x00, 0x00, 0xAF, 0x43, 0x00, 0x00, 0xAF, 0x43 };
//			BYTE Scan4[] = { 0xB8, 0x41, 0x00, 0x00, 0x2F, 0x44, 0x00, 0x00, 0x2F, 0x44 };
//			BYTE Replace4[] = { 0xB8, 0x41, 0x00, 0x00, 0xAF, 0x43, 0x00, 0x00, 0xAF, 0x43 };
//
//			Utility::AOBREP(Replace, Scan, sizeof(Replace), sizeof(Scan), 4000);
//			Utility::AOBREP(Replace2, Scan2, sizeof(Replace2), sizeof(Scan2), 4000);
//			Utility::AOBREP(Replace3, Scan3, sizeof(Replace3), sizeof(Scan3), 4000);
//			Utility::AOBREP(Replace4, Scan4, sizeof(Replace4), sizeof(Scan4), 4000);
//
//
//					IsChanged1 = false;
//				//}).detach();
//		}
//	}
//
//}

//VOID Memory::flyman()
//{
//	
//	
//
//		if (Setting::fly) {
//			std::thread([=]()
//				{
//
//					BYTE Scan[] = { 0x00 ,0x00 ,0x75 ,0xC4 ,0x00,0x00 ,0x7A ,0x45 ,0x9A ,0x99 ,0x99 ,0x3E ,0x00 ,0x00 ,0x04 ,0x00 ,0x04 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xA0 ,0x40 ,0x00 };
//					BYTE Scan2[] = { 0x10 ,0x27 ,0x00 ,0x00 ,0x10 ,0x27 ,0x00 ,0x00 ,0x20 ,0x4E ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 };
//					BYTE Replace[] = { 0x00 ,0x00 ,0x70,0xC1 ,0x00,0x00,0x7A ,0x45 ,0x9A ,0x99 ,0x99 ,0x3E ,0x00 ,0x00 ,0x04 ,0x00 ,0x04,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0xA0 ,0x40 ,0x00 };
//					BYTE Replace2[] = { 0xF4 ,0x01 ,0x00 ,0x00 ,0x10 ,0x27 ,0x00 ,0x00 ,0x20 ,0x4E ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0x00 ,0x00 ,0x00 };
//
//					Utility::AOBREP(Scan, Replace, sizeof(Scan), sizeof(Replace), 4000);
//					Utility::AOBREP(Scan2, Replace2, sizeof(Scan2), sizeof(Replace2), 4000);
//				}).detach();
//
//		}
//		else if (!Setting::fly)
//		{
//			std::thread([=]()
//				{
//					BYTE Scan[] = { 0x00 ,0x00 ,0x70,0xC1 ,0x00,0x00,0x7A ,0x45 ,0x9A ,0x99 ,0x99 ,0x3E ,0x00 ,0x00 ,0x04 ,0x00 ,0x04,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0xA0 ,0x40 ,0x00 };
//					BYTE Scan2[] = { 0xF4 ,0x01 ,0x00 ,0x00 ,0x10 ,0x27 ,0x00 ,0x00 ,0x20 ,0x4E ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0x00 ,0x00 ,0x00 };
//					BYTE Replace[] = { 0x00 ,0x00 ,0x75 ,0xC4 ,0x00,0x00 ,0x7A ,0x45 ,0x9A ,0x99 ,0x99 ,0x3E ,0x00 ,0x00 ,0x04 ,0x00 ,0x04 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xA0 ,0x40 ,0x00 };
//					BYTE Replace2[] = { 0x10 ,0x27 ,0x00 ,0x00 ,0x10 ,0x27 ,0x00 ,0x00 ,0x20 ,0x4E ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 };
//
//					Utility::AOBREP(Scan, Replace, sizeof(Scan), sizeof(Replace), 0);
//					Utility::AOBREP(Scan2, Replace2, sizeof(Scan2), sizeof(Replace2), 0);
//				}).detach();
//
//		}
//	
//
//
//
//	
//
//
//
//}
//void Memory::Luffy()
//{
//	bool IsChanged = false;
//	while (true)
//	{
//		if (Setting::luffy && IsChanged == false)
//		{
//			BYTE pattern[] = { 0x95, 0x2D, 0xBC, 0x41, 0x00, 0x80, 0x6F, 0x39, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			BYTE patter2[] = { 0x00, 0x00, 0xC8, 0x42, 0x00, 0x00, 0x48, 0x43, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = true;
//		}
//		else if (!Setting::luffy && IsChanged == true)
//		{
//			BYTE pattern[] = { 0x00, 0x00, 0xC8, 0x42, 0x00, 0x00, 0x48, 0x43, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			BYTE patter2[] = { 0x95, 0x2D, 0xBC, 0x41, 0x00, 0x80, 0x6F, 0x39, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = false;
//		}
//		if (Setting::luffy)
//			std::this_thread::sleep_for(std::chrono::milliseconds(70));
//		else {
//			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//		}
//	}
//
//}

//void Memory::IPADVIEW()
//{
//	bool IsChanged = false;
//	while (true)
//	{
//		if (Setting::ipadview && IsChanged == false)
//		{
//			BYTE pattern[] = { 0x00, 0x00, 0xB4, 0x43, 0x3C, 0x1E, 0x8F, 0x03, 0x30, 0xBE, 0x71, 0x03, 0x30, 0x48 };
//			BYTE patter2[] = { 0x00, 0x00, 0x82, 0x43, 0x3C, 0x1E, 0x8F, 0x03, 0x30, 0xBE, 0x71, 0x03, 0x30, 0x48 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = true;
//		}
//		else if (!Setting::ipadview && IsChanged == true)
//		{
//			BYTE pattern[] = { 0x00, 0x00, 0x82, 0x43, 0x3C, 0x1E, 0x8F, 0x03, 0x30, 0xBE, 0x71, 0x03, 0x30, 0x48 };
//			BYTE patter2[] = { 0x00, 0x00, 0xB4, 0x43, 0x3C, 0x1E, 0x8F, 0x03, 0x30, 0xBE, 0x71, 0x03, 0x30, 0x48 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = false;
//		}
//		if (Setting::ipadview)
//			std::this_thread::sleep_for(std::chrono::milliseconds(70));
//		else {
//			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//		}
//	}
//
//}
//
//void Memory::NOHEADSHOT()
//{
//	bool IsChanged = false;
//	while (true)
//	{
//		if (Setting::noheadshot && IsChanged == false)
//		{
//			BYTE pattern[] = { 0xCD, 0xCC, 0xCC, 0x3D, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xD9, 0x78, 0x03, 0xDC, 0xD9, 0x78, 0x03, 0xD0, 0xD9, 0x78, 0x03 };
//			BYTE patter2[] = { 0x00, 0x00, 0x20, 0x42, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xD9, 0x78, 0x03, 0xDC, 0xD9, 0x78, 0x03, 0xD0, 0xD9, 0x78, 0x03 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = true;
//		}
//		else if (!Setting::noheadshot && IsChanged == true)
//		{
//			BYTE pattern[] = { 0x00, 0x00, 0x20, 0x42, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xD9, 0x78, 0x03, 0xDC, 0xD9, 0x78, 0x03, 0xD0, 0xD9, 0x78, 0x03 };
//			BYTE patter2[] = { 0xCD, 0xCC, 0xCC, 0x3D, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xD9, 0x78, 0x03, 0xDC, 0xD9, 0x78, 0x03, 0xD0, 0xD9, 0x78, 0x03 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = false;
//		}
//		if (Setting::noheadshot)
//			std::this_thread::sleep_for(std::chrono::milliseconds(70));
//		else {
//			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//		}
//	}
//
//}
//
//void Memory::SMALLCROSSHAIR()
//{
//	bool IsChanged = false;
//	while (true)
//	{
//		if (Setting::smallcrosshair && IsChanged == false)
//		{
//			BYTE pattern[] = { 0x00, 0x0A, 0x90, 0x1D, 0x10, 0x0A, 0x10, 0xEE, 0x1E, 0xFF, 0x2F, 0xE1, 0x40, 0x1B, 0x90, 0xE5, 0x00, 0x00, 0xA0, 0xE3 };
//			BYTE patter2[] = { 0x01, 0x00, 0x00, 0x00, 0x10, 0x0A, 0x10, 0xEE, 0x1E, 0xFF, 0x2F, 0xE1, 0x40, 0x1B, 0x90, 0xE5, 0x00, 0x00, 0xA0, 0xE3 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = true;
//		}
//		else if (!Setting::smallcrosshair && IsChanged == true)
//		{
//			BYTE pattern[] = { 0x01, 0x00, 0x00, 0x00, 0x10, 0x0A, 0x10, 0xEE, 0x1E, 0xFF, 0x2F, 0xE1, 0x40, 0x1B, 0x90, 0xE5, 0x00, 0x00, 0xA0, 0xE3 };
//			BYTE patter2[] = { 0x00, 0x0A, 0x90, 0x1D, 0x10, 0x0A, 0x10, 0xEE, 0x1E, 0xFF, 0x2F, 0xE1, 0x40, 0x1B, 0x90, 0xE5, 0x00, 0x00, 0xA0, 0xE3 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			IsChanged = false;
//		}
//		if (Setting::smallcrosshair)
//			std::this_thread::sleep_for(std::chrono::milliseconds(70));
//		else {
//			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//		}
//	}
//}