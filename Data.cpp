#include "Data.h"
#include<thread>
#include "Memory.h"
Espp* g_pEsp = new Espp();

DWORD Data::ViewMatrixBase;
DWORD Data::UWorld = 0;
BYTE ViewMatrixSearch[] =
{
	0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01
};

DWORD Data::GetViewMatrixBase(DWORD StartAddress, DWORD EndAddress)
{
	DWORD ViewMatrixBase = 0;
	std::vector<DWORD_PTR> FoundedBase;
	Utility::MemSearch(ViewMatrixSearch, sizeof(ViewMatrixSearch), StartAddress, EndAddress, 0, 0, FoundedBase);

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		DWORD Cand = FoundedBase[i] - 0x20;
		DWORD Eng = Utility::ReadMemoryEx<DWORD>(Cand) + 0x20;
		DWORD Tmp = Utility::ReadMemoryEx<DWORD>(Eng) + 0x200;

		float v1, v2, v3, v4;
		v1 = Utility::ReadMemoryEx<float>(Tmp + 0x8);
		v2 = Utility::ReadMemoryEx<float>(Tmp + 0x18);
		v3 = Utility::ReadMemoryEx<float>(Tmp + 0x28);
		v4 = Utility::ReadMemoryEx<float>(Tmp + 0x38);

		if (v1 == 0 && v2 == 0 && v3 == 0 && v4 >= 3)
		{
			ViewMatrixBase = Cand;
			FoundedBase.clear();
			break;
		}
	}

	FoundedBase.clear();
	return ViewMatrixBase;
}


string GetString(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i);
	}

	string Result = String;

	delete[] String;
	return Result;
}

string GetEntityType(LONG GNames, LONG Id)
{
	string Result = "";

	DWORD GName = Utility::ReadMemoryEx<DWORD>(GNames);

	if (Id > 0 && Id < 2000000)
	{
		DWORD Page = Id / 16384;
		DWORD Index = Id % 16384;
		DWORD SecPartAddv = Utility::ReadMemoryEx<DWORD>(GName + Page * 4);

		if (SecPartAddv > 0)
		{
			LONG NameAddv = Utility::ReadMemoryEx<DWORD>(SecPartAddv + Index * 4);

			if (NameAddv > 0)
			{
				Result = GetString(NameAddv + 0x8);
			}
		}
	}

	return Result;
}

struct ObjectName
{
	char Data[64];
};

string GetEntityType2(LONG GNames, LONG Id)
{
	DWORD GName = Utility::ReadMemoryEx<DWORD>(GNames);
	DWORD NamePtr = Utility::ReadMemoryEx<DWORD>(GName + int(Id / 16384) * 0x4);
	DWORD Name = Utility::ReadMemoryEx<DWORD>(NamePtr + int(Id % 16384) * 0x4);
	ObjectName pBuffer = Utility::ReadMemoryEx<ObjectName>(Name + 0x8);

	return string(pBuffer.Data);
}

string GetPlayerName(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i * 2);
	}

	string Name = String;


	delete[] String;
	return Name;
}
string GetPlayerFlag(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i * 2);
	}

	string Name = String;

	delete[] String;
	return Name;
}

BOOL IsPlayer(string str)
{
	if (str.find("BP_PlayerPawn") != std::string::npos ||
		str.find("BP_PlayerCharacter") != std::string::npos ||
		str.find("PlanET_FakePlayer") != std::string::npos ||
		str.find("BP_PlayerPawn_FM_C") != std::string::npos ||
		str.find("BP_PlayerPawn_C") != std::string::npos ||
		str.find("BP_PlayerPawn_Rune_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_InvisibleZombie_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_Human_C") != std::string::npos ||
		str.find("BP_PlayerPawn_ZombieBase_C") != std::string::npos ||
		str.find("BP_PlayerPawn_TDM_TPP_C") != std::string::npos ||
		str.find("BP_PlayerPawn_FM_Bot_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_SlayTheBot_C") != std::string::npos ||
		str.find("PlanET_FakePlayer_AIPawn_C") != std::string::npos ||
		str.find("BP_PlayerPawn_SI_C") != std::string::npos ||
		str.find("BP_PlayerPawn_Heavy_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_Revenger_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_NormalZombie_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_KingZombie_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_FourMaps_PlanA_C") != std::string::npos ||
		str.find("BP_PlayerPawn_Sink_AI_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_Sink_Revival_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanS_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanS_Revival_C") != std::string::npos ||
		str.find("BP_PlayerPawn_FM_AI_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_FourMaps_PlanS_Revial_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_SlayTheBot_AI_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanA_C") != std::string::npos ||
		str.find("PlanX_PlayerCharacter_AI_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_Egypt2_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_Nusa_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanA_C") != std::string::npos ||
		str.find("BP_PlayerPawn_ST_AI_C") != std::string::npos ||
		str.find("BP_CharacterModelTaget_C") != std::string::npos)

	{
		return true;
	}

	return FALSE;
}
std::string GetGrenadeType(std::string classname)
{
	if (classname.find("BP_Grenade_Smoke_C") != std::string::npos)
		return "Smoke";
	if (classname.find("BP_Grenade_Burn_C") != std::string::npos)
		return "Burn";
	/* if (classname.find("BP_Grenade_tun_C") != std::string::npos)
		 return "[ALERT] !Flash Granade";*/
	if (classname.find("BP_Grenade_Shoulei_C") != std::string::npos)
		return "Frag";
	return "tatti";
}
std::string PlayerWeapon(std::string str)
{
	if (str == "BP_Sniper_AWM_C")
		return "AWM";
	else if (str == "BP_Sniper_QBU_C")
		return "QBU";
	else if (str == "BP_Sniper_SLR_C")
		return "SLR";
	else if (str == "BP_Sniper_SKS_C")
		return "SKS";
	else if (str == "BP_Sniper_Mini14_C")
		return "Mini14";
	else if (str == "BP_Sniper_M24_C")
		return "M24";
	else if (str == "BP_Sniper_Kar98k_C")
		return "Kar98k";
	else if (str == "BP_Sniper_VSS_C")
		return "VSS";
	else if (str == "BP_Sniper_Win94_C")
		return "Win94";
	else if (str == "BP_Sniper_Mosin_C")
		return "Mosin";
	else if (str == "BP_Sniper_MK12_C")
		return "MK12";
	else if (str == "BP_Rifle_AUG_C")
		return "AUG";
	else if (str == "BP_Rifle_M762_C")
		return "M762";
	else if (str == "BP_Rifle_SCAR_C")
		return "SCAR";
	else if (str == "BP_Rifle_M416_C")
		return "M416";
	else if (str == "BP_Rifle_M16A4_C")
		return "M16A4";
	else if (str == "BP_Rifle_Mk47_C")
		return "Mk47";
	else if (str == "BP_Rifle_G36_C")
		return "G36";
	else if (str == "BP_Rifle_QBZ_C")
		return "QBZ";
	else if (str == "BP_Rifle_AKM_C")
		return "AKM";
	else if (str == "BP_Rifle_Groza_C")
		return "Groza";
	else if (str == "BP_Other_DP28_C")
		return "DP28";
	else if (str == "BP_Other_M249_C")
		return "M249";
	else if (str == "BP_MachineGun_P90_C")
		return "P90";
	else if (str == "BP_ShotGun_S12K_C")
		return "S12K";
	else if (str == "BP_ShotGun_DP12_C")
		return "DP12";
	else if (str == "BP_ShotGun_S686_C")
		return "S686";
	else if (str == "BP_ShotGun_S1897_C")
		return "S1897";
	else if (str == "BP_ShotGun_SawedOff_C")
		return "SawedOff";
	else if (str == "BP_MachineGun_PP19_C")
		return "PP19";
	else if (str == "BP_MachineGun_TommyGun_C")
		return "TommyGu";
	else if (str == "BP_MachineGun_MP5K_C")
		return "MP5K";
	else if (str == "BP_MachineGun_UMP9_C")
		return "UMP9";
	else if (str == "BP_MachineGun_Vector_C")
		return "Vector";
	else if (str == "BP_MachineGun_Uzi_C")
		return "Uzi";
	else if (str == "BP_Pistol_Flaregun_C")
		return "Flaregun";
	else if (str == "BP_Pistol_R1895_C")
		return "R1895";
	else if (str == "BP_Pistol_Vz61_C")
		return "Vz61";
	else if (str == "BP_Pistol_P92_C")
		return "P92";
	else if (str == "BP_Pistol_P18C_C")
		return "P18C";
	else if (str == "BP_Pistol_R45_C")
		return "R45";
	else if (str == "BP_Pistol_P1911_C")
		return "P1911";
	else if (str == "BP_Pistol_DesertEagle_C")
		return "DesertEagle";
	else if (str == "BP_WEP_Mk14_C")
		return "Mk14";
	else if (str == "BP_Other_CrossBow_C")
		return "CrossBow";
	else if (str == "BP_Grenade_Shoulei_C")
		return "Shoulei Grenade";
	else if (str == "BP_Grenade_Smoke_C")
		return "Smoke Grenade";
	else if (str == "BP_Grenade_Burn_C")
		return "Burn Grenade";
	else
		return "Fist";
	return "Fist";
}
std::string PlayerWeapon2(std::string str)
{
	if (str == "BP_Sniper_AWM_C")
		return "AWM";
	else if (str == "BP_Sniper_QBU_C")
		return "QBU";
	else if (str == "BP_Sniper_SLR_C")
		return "SLR";
	else if (str == "BP_Sniper_SKS_C")
		return "SKS";
	else if (str == "BP_Sniper_Mini14_C")
		return "Mini14";
	else if (str == "BP_Sniper_M24_C")
		return "M24";
	else if (str == "BP_Sniper_Kar98k_C")
		return "Kar98k";
	else if (str == "BP_Sniper_VSS_C")
		return "VSS";
	else if (str == "BP_Sniper_Win94_C")
		return "Win94";
	else if (str == "BP_Sniper_Mosin_C")
		return "Mosin";
	else if (str == "BP_Sniper_MK12_C")
		return "MK12";
	else if (str == "BP_Rifle_AUG_C")
		return "AUG";
	else if (str == "BP_Rifle_M762_C")
		return "M762";
	else if (str == "BP_Rifle_SCAR_C")
		return "SCAR";
	else if (str == "BP_Rifle_M416_C")
		return "M416";
	else if (str == "BP_Rifle_M16A4_C")
		return "M16A4";
	else if (str == "BP_Rifle_Mk47_C")
		return "Mk47";
	else if (str == "BP_Rifle_G36_C")
		return "G36";
	else if (str == "BP_Rifle_QBZ_C")
		return "QBZ";
	else if (str == "BP_Rifle_AKM_C")
		return "AKM";
	else if (str == "BP_Rifle_Groza_C")
		return "Groza";
	else if (str == "BP_Other_DP28_C")
		return "DP28";
	else if (str == "BP_Other_M249_C")
		return "M249";
	else if (str == "BP_MachineGun_P90_C")
		return "P90";
	else if (str == "BP_ShotGun_S12K_C")
		return "S12K";
	else if (str == "BP_ShotGun_DP12_C")
		return "DP12";
	else if (str == "BP_ShotGun_S686_C")
		return "S686";
	else if (str == "BP_ShotGun_S1897_C")
		return "S1897";
	else if (str == "BP_ShotGun_SawedOff_C")
		return "SawedOff";
	else if (str == "BP_MachineGun_PP19_C")
		return "PP19";
	else if (str == "BP_MachineGun_TommyGun_C")
		return "TommyGu";
	else if (str == "BP_MachineGun_MP5K_C")
		return "MP5K";
	else if (str == "BP_MachineGun_UMP9_C")
		return "UMP9";
	else if (str == "BP_MachineGun_Vector_C")
		return "Vector";
	else if (str == "BP_MachineGun_Uzi_C")
		return "Uzi";
	else if (str == "BP_Pistol_Flaregun_C")
		return "Flaregun";
	else if (str == "BP_Pistol_R1895_C")
		return "R1895";
	else if (str == "BP_Pistol_Vz61_C")
		return "Vz61";
	else if (str == "BP_Pistol_P92_C")
		return "P92";
	else if (str == "BP_Pistol_P18C_C")
		return "P18C";
	else if (str == "BP_Pistol_R45_C")
		return "R45";
	else if (str == "BP_Pistol_P1911_C")
		return "P1911";
	else if (str == "BP_Pistol_DesertEagle_C")
		return "DesertEagle";
	else if (str == "BP_WEP_Mk14_C")
		return "Mk14";
	else if (str == "BP_Other_CrossBow_C")
		return "CrossBow";
	else if (str == "BP_Grenade_Shoulei_C")
		return "Shoulei Grenade";
	else if (str == "BP_Grenade_Smoke_C")
		return "Smoke Grenade";
	else if (str == "BP_Grenade_Burn_C")
		return "Burn Grenade";
	else
		return "Fist";
	return "Fist";
}


string GetItemType(string Name)
{///name.find("BP_Rifle_AKM_Wrapper_C") != std::string::npos
	if (Setting::Esp_Item_AKM) if (Name.find("BP_Rifle_AKM_Wrapper_C") != std::string::npos) return "AKM";
	if (Setting::Esp_Item_M249) if (Name.find("BP_Other_M249_Wrapper_C") != std::string::npos)return "M249";

	if (Setting::Esp_Item_Mk12) if (Name.find("BP_Other_MK12_Wrapper_C") != std::string::npos)return "MK12";
	if (Setting::plan)  if (Name.find("BP_AirDropPlane_C") != std::string::npos) return "Plan";
	if (Setting::Esp_Item_SCARL) if (Name.find("BP_Rifle_SCAR_Wrapper_C") != string::npos) return "SCAR-L";
	if (Setting::Esp_Item_M416) if (Name.find("BP_Rifle_M416_Wrapper_C") != std::string::npos) return "M416";
	if (Setting::Esp_Item_M24) if (Name.find("BP_Sniper_M24_Wrapper_C") != string::npos) return "M24";
	if (Setting::Esp_Item_Kar98k) if (Name.find("BP_Sniper_Kar98k_Wrapper_C") != string::npos) return "Kar98k";
	if (Setting::Esp_Item_Awm) if (Name.find("BP_Sniper_AWM_Wrapper_C") != string::npos) return "AWM";
	if (Setting::Esp_Item_FlareGun) if (Name.find("BP_Pistol_Flaregun_Wrapper_C") != string::npos) return "Flare Gun";
	if (Setting::Esp_Item_Flare) if (Name.find("BP_Ammo_Flare_Pickup_C") != string::npos) return "Flare";
	if (Setting::Esp_Item_AirDrop) if (Name.find("BP_AirDropBox_New_C") != string::npos) return "Air Drop";

	if (Setting::Esp_Item_M762) if (Name.find("BP_Rifle_M762_Wrapper_C") != string::npos) return "M762";
	if (Setting::Esp_Item_Mk47Mutant) if (Name.find("BP_Rifle_Mk47_Wrapper_C") != string::npos) return "Mk47 Mutant";
	if (Setting::Esp_Item_DP28) if (Name.find("BP_Other_DP28_Wrapper_C") != string::npos) return "DP28";
	if (Setting::Esp_Item_SCARL) if (Name.find("BP_Rifle_SCAR_Wrapper_C") != string::npos) return "SCAR-L";
	if (Setting::Esp_Item_M416) if (Name.find("BP_Rifle_M416_Wrapper_C") != string::npos) return "M416";
	if (Setting::Esp_Item_M16A4) if (Name.find("BP_Rifle_M16A4_Wrapper_C") != string::npos) return "M16A4";
	if (Setting::Esp_Item_G36C) if (Name.find("BP_Rifle_G36_Wrapper_C") != string::npos) return "G36C";
	if (Setting::Esp_Item_QBZ) if (Name.find("BP_Rifle_QBZ_Wrapper_C") != string::npos) return "QBZ";

	if (Setting::Esp_Item_QBU) if (Name.find("BP_Sniper_QBU_Wrapper_C") != string::npos) return "QBU";
	if (Setting::Esp_Item_SLR) if (Name.find("BP_Sniper_SLR_Wrapper_C") != string::npos) return "SLR";
	if (Setting::Esp_Item_SKS) if (Name.find("BP_Sniper_SKS_Wrapper_C") != string::npos) return "SKS";
	if (Setting::Esp_Item_Mini14) if (Name.find("BP_Sniper_Mini14_Wrapper_C") != string::npos) return "Mini-14";


	if (Setting::Esp_Item_PP19) if (Name.find("BP_MachineGun_PP19_Wrapper_C") != string::npos) return "PP19";
	if (Setting::Esp_Item_TommyGun) if (Name.find("BP_MachineGun_TommyGun_Wrapper_C") != string::npos) return "Tommy Gun";
	if (Setting::Esp_Item_MP5K) if (Name.find("BP_MachineGun_MP5K_Wrapper_C") != string::npos) return "MP5K";
	if (Setting::Esp_Item_UMP9) if (Name.find("BP_MachineGun_UMP9_Wrapper_C") != string::npos) return "UMP9";
	if (Setting::Esp_Item_Vector) if (Name.find("BP_MachineGun_Vector_Wrapper_C") != string::npos) return "Vector";
	if (Setting::Esp_Item_Uzi) if (Name.find("BP_MachineGun_Uzi_Wrapper_C") != string::npos) return "Uzi";
	if (Setting::Esp_Item_Awmimo) if (Name.find("BP_Ammo_300Magnum_Pickup_C") != std::string::npos) return "300Magnum";
	if (Setting::Esp_Item_762mm) if (Name.find("BP_Ammo_762mm_Pickup_C") != string::npos) return "7.62mm";
	if (Setting::Esp_Item_556mm) if (Name.find("BP_Ammo_556mm_Pickup_C") != string::npos) return "5.56mm";
	if (Setting::Esp_Item_9mm) if (Name.find("BP_Ammo_9mm_Pickup_C") != string::npos) return "9mm";
	if (Setting::Esp_Item_45ACP) if (Name.find("BP_Ammo_45ACP_Pickup_C") != string::npos) return "45ACP";
	if (Setting::Esp_Item_Holo) if (Name.find("BP_MZJ_QX_Pickup_C") != string::npos) return "Holo";



	if (Setting::Esp_Item_MedKit) if (Name.find("FirstAidbox_Pickup_C") != string::npos) return "Med Kit";
	if (Setting::Esp_Item_FirstAidKit) if (Name.find("Firstaid_Pickup_C") != string::npos) return "First Aid Kit";
	if (Setting::Esp_Item_Painkiller) if (Name.find("Pills_Pickup_C") != string::npos) return "Painkiller";
	if (Setting::Esp_Item_EnergyDrink) if (Name.find("Drink_Pickup_C") != string::npos) return "Energy Drink";
	if (Setting::Esp_Item_AdrenalineSyringe) if (Name.find("Injection_Pickup_C") != string::npos) return "Adrenaline Syringe";

	;

	if (Setting::Esp_Item_Smoke) if (Name.find("BP_Grenade_Smoke_Weapon_Wrapper_C") != string::npos) return "Smoke";
	if (Setting::Esp_Item_Molotof) 	if (Name.find("BP_Grenade_Burn_C") != std::string::npos)return "Burn";
	if (Setting::Esp_Item_Molotof) if (Name.find("BP_Grenade_Burn_Weapon_Wrapper_C") != string::npos) return "Molotof";

	if (Setting::Esp_Item_Helmet1) if (Name.find("PickUp_BP_Helmet_Lv1") != string::npos) return "Helmet L.1";
	if (Setting::Esp_Item_Helmet2) if (Name.find("PickUp_BP_Helmet_Lv2") != string::npos) return "Helmet L.2";
	if (Setting::Esp_Item_Helmet3) if (Name.find("PickUp_BP_Helmet_Lv3") != string::npos) return "Helmet L.3";

	if (Setting::Esp_Item_Armor1) if (Name.find("PickUp_BP_Armor_Lv1") != string::npos) return "Armor L.1";
	if (Setting::Esp_Item_Armor2) if (Name.find("PickUp_BP_Armor_Lv2") != string::npos) return "Armor L.2";
	if (Setting::Esp_Item_Armor3) if (Name.find("PickUp_BP_Armor_Lv3") != string::npos) return "Armor L.3";
	if (Setting::Esp_Item_x2) if (Name.find("BP_MZJ_2X_Pickup_C") != string::npos) return "2x";
	if (Setting::Esp_Item_x3) if (Name.find("BP_MZJ_3X_Pickup_C") != string::npos) return "3x";
	if (Setting::Esp_Item_x4) if (Name.find("BP_MZJ_4X_Pickup_C") != string::npos) return "4x";
	if (Setting::Esp_Item_x6) if (Name.find("BP_MZJ_6X_Pickup_C") != string::npos) return "6x";
	if (Setting::Esp_Item_x8) if (Name.find("BP_MZJ_8X_Pickup_C") != string::npos) return "8x";
	if (Setting::Esp_Item_Bag1) if (Name.find("PickUp_BP_Bag_Lv1") != string::npos) return "Bag L.1";
	if (Setting::Esp_Item_Bag2) if (Name.find("PickUp_BP_Bag_Lv2") != string::npos) return "Bag L.2";
	if (Setting::Esp_Item_Bag3) if (Name.find("PickUp_BP_Bag_Lv3") != string::npos) return "Bag L.3";
	if (Setting::Esp_Item_Bag3) if (Name.find("BP_ShotGun_Neostead2000_Wrapper_C") != string::npos)return "Neostead2000";
	if (Setting::Esp_Item_Bag3) if (Name.find("BP_Rifle_HoneyBadger_Wrapper_C") != string::npos)return " HoneyBadger";
	if (Setting::Esp_Item_Bag3) if (Name.find("BP_Other_HuntingBowEA_Wrapper_C") != string::npos)return "HuntingBowEA";


	return "Unknown";
}
bool IsBox(std::string classname)
{
	if (classname.find("PlayerDeadBox_C") != std::string::npos || classname.find("PickUpListWrapperActor") != std::string::npos)
		return true;

	return false;
}
bool IsAirBox(std::string classname)
{

	if (classname.find("BP_AirDropBox_New_C") != std::string::npos || classname.find("PickUpListWrapperActor") != std::string::npos)
		return true;

	return false;
}

string GetVehicleType(string Name)
{
	if (Name.find("BRDM") != std::string::npos) return "BRDM";
	if (Name.find("Scooter") != std::string::npos) return "Scooter";
	if (Name.find("Motorcycle") != std::string::npos) return "Motorcycle";
	if (Name.find("Snowmobile") != std::string::npos) return "Snowmobile";
	if (Name.find("Tuk") != std::string::npos) return "Tuk";
	if (Name.find("Buggy") != std::string::npos) return "Buggy";
	if (Name.find("open") != std::string::npos) return "Sports";
	if (Name.find("close") != std::string::npos) return "Sportsa";
	if (Name.find("Dacia") != std::string::npos) return "Dacia";
	if (Name.find("Rony") != std::string::npos) return "Rony";
	if (Name.find("UAZ") != std::string::npos) return "UAZ";
	if (Name.find("MiniBus") != std::string::npos) return "Minibus";
	if (Name.find("PG117") != std::string::npos) return "PG117";
	if (Name.find("AquaRail") != std::string::npos) return "Aquarail";
	if (Name.find("CoupeRB") != std::string::npos) return "Coupe";
	if (Name.find("ModelY") != std::string::npos) return "Tesla";
	if (Name.find("G-38Anti-GravityMotorcycle") != std::string::npos) return "Gravity";
	if (Name.find("Glider") != std::string::npos) return "Glider";
	return "Unknown";
}
std::string GetBoxItems(int code)
{
	if (code == 101008)
	{
		Setting::colorcode = weapon::m762;
		return "M762";

	}
	else if (code == 306001)
	{
		Setting::colorcode = weapon::AWMimmo;
		return "AWM Ammo";
	}

	else if (code == 101003)
	{
		Setting::colorcode = weapon::scarl;
		return "SCAR-L";
	}

	else if (code == 602004)
	{
		Setting::colorcode = Colors::Grandes;

		return "Grenade";
	}
	else if (code == 601006)
	{
		Setting::colorcode = Colors::madkit;

		return "Medkit";
	}
	else if (code == 101004)
	{
		Setting::colorcode = weapon::m16;
		return "M416";
	}

	else if (code == 101010)
	{
		Setting::colorcode = Colors::g36;
		return "G36";
	}

	else if (code == 101006)
	{
		Setting::colorcode = Colors::aug;
		return "AUG";
	}

	else if (code == 101101)
	{
		Setting::colorcode = Colors::assm;
		return "ASM"; //time
	}

	else if (code == 101001)
	{
		Setting::colorcode = weapon::AKM;
		return "AKM";
	}

	else if (code == 101005)
	{
		Setting::colorcode = weapon::GROZZA;
		return "Groza";
	}

	else if (code == 103003)
	{
		Setting::colorcode = weapon::AWM;
		return "AWM";
	}

	else if (code == 103002)
	{
		Setting::colorcode = weapon::M24;
		return "M24";
	}

	else if (code == 103001)
	{
		Setting::colorcode = weapon::kar98;
		return "Kar98k";
	}

	else if (code == 103011)
	{
		Setting::colorcode = Colors::mosin;
		return "Mosin";
	}

	else if (code == 502002)
	{
		Setting::colorcode = Colors::helmat;
		return "Helmet Lv.2";
	}

	else if (code == 502003)
	{
		Setting::colorcode = Colors::helmat;
		return "Helmet Lv.3";
	}

	else if (code == 503002)
	{
		Setting::colorcode = Colors::armer;
		return "Armour Lv.2";
	}

	else if (code == 503003)
	{
		Setting::colorcode = Colors::armer;
		return "Armour Lv.3";
	}

	else if (code == 501006)
	{
		Setting::colorcode = Colors::bag;
		return "Bag Lv.3";
	}

	else if (code == 501005)
	{
		Setting::colorcode = Colors::bag;
		return "Bag Lv.2";
	}

	else if (code == 106007)
	{
		Setting::colorcode = weapon::Flare;
		return "Flaregun";
	}

	else if (code == 105001)
	{
		Setting::colorcode = Colors::M249;
		return "M249";
	}

	else if (code == 105002)
	{
		Setting::colorcode = Colors::dp;
		return "DP28";
	}

	else if (code == 105010)
	{
		Setting::colorcode = Colors::mg3;
		return "MG3";
	}

	return "tatti";
}

DWORD Data::NetDriver;
DWORD Data::LocalPlayer;
DWORD Data::PlayerController;
DWORD Data::EntityAddress = 0;
vector<AActor> Data::AActorList = {};
vector<BombAlert> Data::BombAlertList = {};
vector<Item> Data::ItemList = {};
vector<impItem> Data::impItemList = {};
vector<Vehicle> Data::VehicleList = {};
//std::vector<Airdrop>  Data::LootData, Data::LootDatadatar = {};

VOID Data::QueryThread()
{
	DWORD ue4Headerr = Utility::ReadMemoryEx<UINT>(0xE0C36E8);
	DWORD GWorld = Utility::ReadMemoryEx<UINT>(Data::ViewMatrixBase + 114580) + 60;
	DWORD GName = Utility::ReadMemoryEx<UINT>(Data::ViewMatrixBase - 3231240) + 136;
	DWORD UWorld = 0;
	DWORD PersistentLevel = 0;
	DWORD ServerConnection = 0;
	DWORD EntityList = 0;
	INT EntityCount = 0;

	DWORD EntityStruct = 0;
	string EntityType = "";

	DWORD RootComponent = 0;
	INT MyTeamId = 9999;
	DWORD MeshAddv;
	DWORD BodyAddv;
	DWORD BoneAddv;

	string GrenadeType = "";
	string ItemType = "";
	string VehicleType = "";
	string airdroptype = "";
	string deadboxtype = "";
	string wep = "";
	vector<AActor> AActorList = {};
	vector<BombAlert> BombAlertList = {};
	vector<Item> ItemList = {};
	vector<impItem> impItemList = {};
	vector<Vehicle> VehicleList = {};

	while (true)
	{
		g_pEsp->lootbox.clear();

		//Sleep(50);

		UWorld = Utility::ReadMemoryEx<DWORD>(GWorld);
		PersistentLevel = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::PersistentLevel);
		NetDriver = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::NetDriver);

		ServerConnection = Utility::ReadMemoryEx<DWORD>(NetDriver + Offset::ServerConnection);
		PlayerController = Utility::ReadMemoryEx<DWORD>(ServerConnection + Offset::PlayerController);
		LocalPlayer = Utility::ReadMemoryEx<DWORD>(PlayerController + Offset::AcknowledgedPawn);
		EntityList = Utility::ReadMemoryEx<DWORD>(PersistentLevel + Offset::EntityList);
		EntityCount = Utility::ReadMemoryEx<INT>(PersistentLevel + Offset::EntityCount);

		for (int i = 0; i < EntityCount; ++i)
		{

			EntityAddress = Utility::ReadMemoryEx<DWORD>(EntityList + i * 4);
			EntityStruct = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x10);

			if (Emulator::IsGameLoop4 == TRUE)
			{
				EntityType = GetEntityType(GName, EntityStruct);
			}
			else if (Emulator::IsGameLoop7 == TRUE)
			{
				EntityType = GetEntityType2(GName, EntityStruct);
			}
			else if (Emulator::IsSmartGaGa4 == TRUE)
			{
				EntityType = GetEntityType2(GName, EntityStruct);
			}
			else if (Emulator::IsSmartGaGa7 == TRUE)
			{
				EntityType = GetEntityType2(GName, EntityStruct);
			}

			RootComponent = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::RootComponent);
			//cout << hex << "Root Component " << RootComponent << endl;
			if (IsPlayer(EntityType))
			{
				AActor AActor;
				AActor.TeamId = Utility::ReadMemoryEx<INT>(EntityAddress + Offset::TeamId);
				AActor.Address = EntityAddress;

				if (AActor.Address == LocalPlayer)
				{
					MyTeamId = AActor.TeamId;
					continue;
				}

				if (AActor.TeamId == MyTeamId) continue;

				/*AActor.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
				AActor.IsBot = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsBot);
				AActor.Name = GetPlayerName(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Name));
				AActor.Health = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::Health);
				AActor.HealthMax = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::HealthMax);
				AActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::CharacterMovement) + Offset::LastUpdateVelocity);
				AActor.TeamId = Utility::ReadMemoryEx<INT>(EntityAddress + Offset::TeamId);
				if (Setting::Bone || Setting::MagicBullet)
				{
					MeshAddv = Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::Mesh);
					BodyAddv = MeshAddv + Offset::BodyAddv;
					BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
					AActor.HeadPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);
				}*/

				AActor.IsDead = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsDead);
				if (AActor.IsDead) continue;

				AActor.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
				AActor.IsBot = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsBot);
				if (!AActor.IsBot)
				{

					AActor.Name = GetPlayerName(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Name));
					AActor.Nation = GetPlayerFlag(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Nation));

				}
				else
				{
					AActor.Name = " BOT ";
					AActor.Nation = GetPlayerFlag(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Nation));
				}
				AActor.Health = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::Health);
				AActor.HealthMax = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::HealthMax);
				AActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::CharacterMovement) + Offset::LastUpdateVelocity);
				AActor.TeamId = Utility::ReadMemoryEx<INT>(EntityAddress + Offset::TeamId);
				if (Setting::Bone || Setting::MagicBullet)
				{
					MeshAddv = Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::Mesh);
					BodyAddv = MeshAddv + Offset::BodyAddv;
					BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
					AActor.HeadPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);
				}

				if (Setting::Bone)
				{
					AActor.ChestPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 4 * 48);
					AActor.PelvisPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 1 * 48);
					AActor.lSholderPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 11 * 48);
					AActor.rSholderPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 32 * 48);
					AActor.lElbowPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 12 * 48);
					AActor.rElbowPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 33 * 48);
					AActor.lWristPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 63 * 48);
					AActor.rWristPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 62 * 48);
					AActor.lThighPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 52 * 48);
					AActor.rThighPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 56 * 48);
					AActor.lKneePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 53 * 48);
					AActor.rKneePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 57 * 48);
					AActor.lAnklePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 54 * 48);
					AActor.rAnklePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 58 * 48);
				}

				AActorList.push_back(AActor);
			}


			if (Setting::Item)
			{
				ItemType = GetItemType(EntityType);
				if (ItemType.find("Unknown") == std::string::npos)
				{
					Item Item;
					Item.Name = ItemType;
					Item.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);

					ItemList.push_back(Item);
				}
			}

			if (Setting::Vehicle)
			{
				VehicleType = GetVehicleType(EntityType);
				if (VehicleType.find(("Unknown")) == std::string::npos)
				{
					Vehicle Vehicle;
					Vehicle.Name = VehicleType;
					Vehicle.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);

					DWORD veh = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::VehicleCommon);
					float HP = Utility::ReadMemoryEx<float>(veh + Offset::HP);
					float HPMax = Utility::ReadMemoryEx<float>(veh + Offset::HPMax);
					//int _HP = (int)(HP * 100 / HPMax);
					Vehicle.hp = (int)(HP * 100 / HPMax);
					Vehicle.driving = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x681);
					float Fuel = Utility::ReadMemoryEx<float>(veh + Offset::Fuel);
					float FuelMax = Utility::ReadMemoryEx<float>(veh + Offset::FuelMax);

					Vehicle.oil = (int)(Fuel * 100 / FuelMax);
					if (Vehicle.oil < 0 || Vehicle.oil > 101) {
						continue;
					}
					else {
						VehicleList.push_back(Vehicle);
					}

				}
			}
			if (Setting::deadbox)
			{
				if (IsBox(EntityType))
				{


					DWORD  count = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PickUpDataList + 0x4);
					if (count > 30)
						count = 30;
					g_pEsp->lbox.boxitem.clear();
					if (count > 0)

					{
						long itemBase = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PickUpDataList);
						long itemAddv;

						for (int t = 0; t < count; t++)
						{
							itemAddv = itemBase + t * 48;
							std::string bitm = GetBoxItems(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x4));
							if (bitm.find("tatti") == std::string::npos)
							{
								Itemb temo;
								bitm.append("  :  ").append(std::to_string(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x18)));
								temo.colorcod = Setting::colorcode;
								temo.Displayname = bitm;
								g_pEsp->lbox.boxitem.push_back(temo);

							}
							bitm.clear();
						}
					}
					g_pEsp->lbox.Position = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::RootComponent) + Offset::Position);
					g_pEsp->lootbox.push_back(g_pEsp->lbox);
				}
			}


			if (Setting::airdrop)
			{
				if (IsAirBox(EntityType))
				{


					DWORD  count = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PickUpDataList + 0x4);
					if (count > 30)
						count = 30;
					g_pEsp->lbox.boxitem.clear();
					if (count > 0)
					{

						long itemBase = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PickUpDataList);
						long itemAddv;

						for (int t = 0; t < count; t++)
						{
							itemAddv = itemBase + t * 48;
							std::string bitm = GetBoxItems(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x4));
							if (bitm.find("tatti") == std::string::npos)
							{
								Itemb temo;
								bitm.append("  :  ").append(std::to_string(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x18)));
								temo.colorcod = Setting::colorcode;
								temo.Displayname = bitm;
								g_pEsp->lbox.boxitem.push_back(temo);

							}
							bitm.clear();
						}
					}
					g_pEsp->lbox.Position = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::RootComponent) + Offset::Position);
					g_pEsp->lootbox.push_back(g_pEsp->lbox);
				}
			}
		}

		Data::AActorList.clear();
		Data::BombAlertList.clear();
		Data::ItemList.clear();
		Data::VehicleList.clear();
		Data::AActorList = AActorList;
		Data::BombAlertList = BombAlertList;
		Data::ItemList = ItemList;
		Data::VehicleList = VehicleList;
		g_pEsp->lootboxr = g_pEsp->lootbox;
		AActorList.clear();
		BombAlertList.clear();
		ItemList.clear();
		VehicleList.clear();

		std::this_thread::sleep_for(std::chrono::milliseconds(35));
	}
}