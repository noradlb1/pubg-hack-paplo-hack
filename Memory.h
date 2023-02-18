#pragma once

#include "Includes.h"
#include "Algorithm.h"
#include "Utility.h"
#include "Data.h"
#include "Esp.h"

namespace Memory
{
	extern	bool IsMagicInitialized;// = false;


	int AimFindBestTarget();
	VECTOR2 GetMagicCoordinate();
	VOID RestoreHook();
	VOID MemoryThread();
	//VOID Instant();
	//VOID FastRunn();
	//VOID FastCar();
	//VOID flyCar();
	//VOID norecoil();
	//void MagicX();
	//void MagicBct();
	//void Luffy();
	//void IPADVIEW();
	//void NOHEADSHOT();
	//void SMALLCROSSHAIR();
	//VOID flyman();
	//void magnatbullot();
	//VOID GODVIEW1();
	VOID ALLINONEThread();
}