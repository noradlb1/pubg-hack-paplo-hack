#pragma once

#include "Includes.h"
#include "Utility.h"
#include "Setting.h"
#include "Algorithm.h"
#include "Offset.h"
#include "Global.h"

struct AActor
{
	bool IsBot;
	bool IsVisible;
	VECTOR3 Position;
	bool IsDead;
	FLOAT Health;
	FLOAT HealthMax;
	//string weapon;
	string Name;
	string Nation;
	string weapon;
	INT TeamId;
	DWORD Address;
	VECTOR3 Velocity;
	FLOAT PlayerDead;

	VECTOR3 HeadPos;
	VECTOR3 ChestPos;
	VECTOR3 PelvisPos;
	VECTOR3 lSholderPos;
	VECTOR3 rSholderPos;
	VECTOR3 lElbowPos;
	VECTOR3 rElbowPos;
	VECTOR3 lWristPos;
	VECTOR3 rWristPos;
	VECTOR3 lThighPos;
	VECTOR3 rThighPos;
	VECTOR3 lKneePos;
	VECTOR3 rKneePos;
	VECTOR3 lAnklePos;
	VECTOR3 rAnklePos;
};

struct BombAlert
{
	string Name;
	VECTOR3 Position;
};

struct Item
{
	string Name;
	VECTOR3 Position;
};
struct IsBotLists
{
	string Name;
	VECTOR3 Position;
};
struct impItem
{
	string Name;
	VECTOR3 Position;
};
struct Vehicle
{
	float oil;
	float hp;
	string Name;
	VECTOR3 Position;
	bool driving;
};

struct Itemb {
	std::string Displayname;
	ImVec4 colorcod;

};
struct Airdrop
{
	std::string Displayname;
	string Name;
	VECTOR3 Position;
	std::vector<Item> boxitemm;
};
struct Deadbox
{
	int picid;
	std::vector<Itemb> boxitem;
	string Name;
	VECTOR3 Position;
};


class Espp {
public:
	std::vector<Airdrop> LootData, LootDatadatar;

	Airdrop lboxx, temploot;
	std::string airdropstring;
	std::vector<Deadbox> lootbox, lootboxr;


	Deadbox lbox;
};
extern Espp* g_pEsp;
namespace Data
{
	extern DWORD ViewMatrixBase;
	//extern DWORD Ue4base;
	extern DWORD UWorld;
	extern DWORD NetDriver;
	extern DWORD LocalPlayer;
	extern DWORD PlayerController;
	extern DWORD EntityAddress;
	extern vector<AActor> AActorList;
	extern vector<BombAlert> BombAlertList;
	extern vector<Item> ItemList;
	extern vector<Vehicle> VehicleList;
	extern vector<impItem> impItemList;
	extern vector<IsBotLists> IsBotList;


	DWORD GetViewMatrixBase(DWORD StartAddress, DWORD EndAddress);
	//DWORD GetUe4Base(DWORD StartAddress, DWORD EndAddress);

	VOID QueryThread();
};

