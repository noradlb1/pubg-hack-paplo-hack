#pragma once

#include "Includes.h"

namespace Offset
{
	const DWORD PersistentLevel = 0x20;
	const DWORD NetDriver = 0x24;
	const DWORD ServerConnection = 0x60;
	const DWORD PlayerController = 0x20;
	const DWORD AcknowledgedPawn = 0x340;//0x340 //Pawn* AcknowledgedPawn;//[Offset:
	const DWORD EntityList = 0x70;
	const DWORD EntityCount = EntityList + 4;
	const DWORD gameInstance = 0x24;
	//const DWORD playerController = 96;
	const DWORD playerCarry = 0x20;
	const DWORD RootComponent = 0x154;//0x154
	const DWORD CurrentStates = 0xb00;//0xb00
	const DWORD  MyHUD = 0x34c;//0x34c
	const DWORD gNames = 0;

	// AActor
	const DWORD TeamId = 0x694;//0x694 //int TeamID;//[Offset:
	const DWORD PoseState = 0xfc0;//0xfc0 //byte PoseState;//[Offset:
	const DWORD IsBot = 0x70c;//0x70c //bool bIsAI;//(ByteOffset:
	const DWORD IsDead = 0x9c0;//0x9c0 //bool bDead;//(ByteOffset:
	const DWORD Name = 0x660;//0x660 //UAECharacter.Character.Pawn.Actor.Object //FString PlayerName;//[Offset:
	const DWORD Status = 0xaa0;//0xaa0
	const DWORD Nation = 0x66c;//0x66c //FString Nation;//[Offset:
	const DWORD Health = 0x9a8;//0x9a8 //float Health;//[Offset:
	const DWORD HealthMax = 0x9ac;//0x9ac //float HealthMax;//[Offset:

	// Bone
	const DWORD Mesh = 0x330;//0x330 //SkeletalMeshComponent* Mesh;//[Offset:
	const DWORD BodyAddv = 0x140;//enum meshType;//[Offset
	const DWORD MinLOD = 0x634;//0x634 //int MinLOD;//[Offset:

	const int ShootWeapon = 3532;
	const DWORD CurBulletNumInClip = 0xb2c;//0xb2c //int CurBulletNumInClip;//[Offset:
	const DWORD CurMaxBulletNumInOneClip = 0xb40;//0xb40 //int CurMaxBulletNumInOneClip;//[Offset:
	const DWORD ScopeFov = 0x12ec;


	const DWORD PickUpDataList = 0x680;//0x680 //PickUpItemData[] PickUpDataList;//[Offset:

	const DWORD CharacterMovement = 0x334;//0x334 //CharacterMovementComponent* CharacterMovement;//[Offset:
	const DWORD LastUpdateVelocity = 0x250;//Vector LastUpdateVelocity;//[Offset:
	const DWORD Velocity = 0xc8;//Vector Velocity;//[Offset:

	const DWORD RelativeLocation = 0x118;
	const DWORD RelativeRotation = 0x124;
	const DWORD Position = 0x150;
	const DWORD IsVisible = 0x1bc;

	// Camera
	const DWORD PlayerCameraManager = 0x350;//0x350 //PlayerCameraManager* PlayerCameraManager;//[Offset:
	const DWORD CameraCache = 0x360;//0x360 //CameraCacheEntry CameraCache;//[Offset:
	const DWORD POV = 0x10;
	const DWORD Location = 0x0;
	const DWORD Rotation = 0x18;
	const DWORD FOV = 0x24;


	const DWORD SpringArmComp = 0x1324;//CustomSpringArmComponent* SpringArmComp;//[Offset:
	const DWORD MeshContainer = 0x11d0;//SceneComponent* MeshContainer;//[Offset:


	// Instant hit
	const DWORD CurrentReloadWeapon = 0x1fe4;//0x1fe4 //STExtraWeapon* CurrentReloadWeapon;//[Offset:
	const DWORD CurrWeapon = 0x1a08;//0x1a08 //PostProcessSettings[] PostProcessBlendCache;//[Offset:



	const DWORD CharacterOverrideAttrs = 0xd68;//0xd68 //Need update 0x2230 //CharacterOverrideAttrs CharacterOverrideAttrs
	const DWORD CharacterParachuteComponent = 0xfa0;//0xfa0 //CharacterParachuteComponent* ParachuteComponent
	const DWORD CurrentFallSpeed = 0x14c;//0x14c //float CurrentFallSpeed;//[Offset:

	const DWORD bEnablePlayerPickUpAnim = 0x1610;//0x1610 //bool bEnablePlayerPickUpAnim;//(ByteOffset:

	const DWORD ForceTPP = 0x1481;//0x1481
	const DWORD STPlayerController = 0x2cec;//0x2cec //STExtraPlayerController* STPlayerController;//[Offset:
	const DWORD ScopeCameraComp = 0x133c;//CameraComponent* ScopeCameraComp;//[Offset:

	// NoRecoil offsets
	const DWORD AccessoriesVRecoilFactor = 0x8c0;//0x8c0 //float AccessoriesVRecoilFactor;//[Offset:
	const DWORD AccessoriesHRecoilFactor = 0x8c4;//0x8c4 //float AccessoriesHRecoilFactor;//[Offset:
	const DWORD AccessoriesRecoveryFactor = 0x8c8;//0x8c8 //float AccessoriesRecoveryFactor;//[Offset:
	extern INT MyTeamID;
	const DWORD NearDeathBreath = 0x1214;
	const DWORD ExtraShootInterval = 0x434;
	const DWORD BulletFireSpeed = 0x408;//float BulletFireSpeed;//[Offset:
	const DWORD ShootInterval = 0x430;//0x430 //float ShootInterval;//[Offset:
	const DWORD ShootWeaponEntity = 0xc40;//0xc40 //ShootWeaponEntity* ShootWeaponEntityComp;//[Offset:
	const DWORD ShotGunVerticalSpread = 0x914;//0x914 //float ShotGunVerticalSpread;//[Offset:
	const DWORD ShotGunHorizontalSpread = 0x918;//0x918 //float ShotGunHorizontalSpread;//[Offset:
	const DWORD GameDeviationFactor = 0x91c;//0x91c //float GameDeviationFactor;//[Offset:
	const DWORD RecoilKickADS = 0x9c8;//0x9c8 //float RecoilKickADS;//[Offset:
	const DWORD AnimationKick = 0x9e4;//0x9e4 //float AnimationKick;//[Offset:
	const DWORD LaunchGravityScale = 0x330; //0x330 //float LaunchGravityScale;//[Offset:
	const DWORD SwitchWeaponSpeedScale = 0x1d24;//0x1d24 //float SwitchWeaponSpeedScale;//[Offset:
	const DWORD Controller = 0x31c;
	const DWORD ControlRotation = 0x308;//0x308 //Rotator ControlRotation;//[Offset:
	//information
	const DWORD GameStateBase = 0x138; //GameStateBase* GameState;//[Offset:
	const DWORD AlivePlayerNum = 0x79c;//0x79c //int AlivePlayerNum;//[Offset:
	const DWORD ElapsedTime = 0x340;
	const DWORD AliveTeamNum = 0x7a0;//0x7a0 //int AliveTeamNum;//[Offset:
	const DWORD PlayerNum = 0x528;//0x528 // int PlayerNum;//[Offset:
	const DWORD CurCircleWave = 0x724;//0x724 //int CurCircleWave;//[Offset:
	const DWORD GameModeID = 0xb48;//0xb48 //FString GameModeID;//[Offset:

	////vehicle
	const  DWORD VehicleCommon = 0x738;//0x738 //VehicleCommonComponent* VehicleCommon;//[Offset:
	const  DWORD HP = 0x1e4;//float HP;//[Offset:
	const  DWORD HPMax = 0x1e0;//float HPMax;//[Offset:
	const  DWORD FuelMax = 0x1fc;//0x1fc //float FuelMax;//[Offse
	const  DWORD Fuel = 0x200;//0x200 //float Fuel;//[Offset:

}