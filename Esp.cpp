#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#pragma warning(disable : 4996)
#include "SimpleIni.h"
#include <D3DX11tex.h>
#define LOADER_BRAND "Loader base"
#include "Esp.h"
#include <iostream>
#include <fstream>
#include "api/KeyAuth.hpp"
#include "imguipp.h"
#include "api/Swifty.hpp"
#include "api/Swifty_hor.hpp"
#include <urlmon.h>
#include "xorstr.hpp"
#include "check.cpp"
#include "shbdloloBack1.cpp"
#include "shbdlolobFree.cpp"
#include "shbdlolobVip.cpp"





#include "flags/AF.h"
#include "flags/AL.h"
#include "flags/DZ.h"
#include "flags/AS.h"
#include "flags/AD.h"
#include "flags/AO.h"
#include "flags/AI.h"
#include "flags/G1.h"
#include "flags/AG.h"
#include "flags/AR.h"
#include "flags/AM.h"
#include "flags/AW.h"
#include "flags/AU.h"
#include "flags/AT.h"
#include "flags/AZ.h"
#include "flags/BS.h"
#include "flags/BH.h"
#include "flags/BD.h"
#include "flags/BB.h"
#include "flags/BY.h"
#include "flags/BE.h"
#include "flags/BZ.h"
#include "flags/BJ.h"
#include "flags/BM.h"
#include "flags/BT.h"
#include "flags/BO.h"
#include "flags/BA.h"
#include "flags/BW.h"
#include "flags/BV.h"
#include "flags/BR.h"
#include "flags/IO.h"
#include "flags/BN.h"
#include "flags/BG.h"
#include "flags/BF.h"
#include "flags/BI.h"
#include "flags/CV.h"
#include "flags/KH.h"
#include "flags/CM.h"
#include "flags/CA.h"
#include "flags/KY.h"
#include "flags/CF.h"
#include "flags/TD.h"
#include "flags/CL.h"
#include "flags/CN.h"
#include "flags/CX.h"
#include "flags/CC.h"
#include "flags/CO.h"
#include "flags/KM.h"
#include "flags/CD.h"
#include "flags/CG.h"
#include "flags/CK.h"
#include "flags/CR.h"
#include "flags/HR.h"
#include "flags/CU.h"
#include "flags/CW.h"
#include "flags/CY.h"
#include "flags/CZ.h"
#include "flags/CI.h"
#include "flags/DK.h"
#include "flags/DJ.h"
#include "flags/DM.h"
#include "flags/DO.h"
#include "flags/EC.h"
#include "flags/EG.h"
#include "flags/SV.h"
#include "flags/GQ.h"
#include "flags/ER.h"
#include "flags/EE.h"
#include "flags/SZ.h"
#include "flags/ET.h"
#include "flags/FK.h"
#include "flags/FO.h"
#include "flags/FJ.h"
#include "flags/FI.h"
#include "flags/FR.h"
#include "flags/GF.h"
#include "flags/PF.h"
#include "flags/TF.h"
#include "flags/GA.h"
#include "flags/GM.h"
#include "flags/GE.h"
#include "flags/DE.h"
#include "flags/GH.h"
#include "flags/GI.h"
#include "flags/GR.h"
#include "flags/GL.h"
#include "flags/GD.h"
#include "flags/GP.h"
#include "flags/GU.h"
#include "flags/GT.h"
#include "flags/GG.h"
#include "flags/GN.h"
#include "flags/GW.h"
#include "flags/GY.h"
#include "flags/HT.h"
#include "flags/HM.h"
#include "flags/VA.h"
#include "flags/HN.h"
#include "flags/HK.h"
#include "flags/HU.h"
#include "flags/JP.h"
#include "flags/JE.h"
#include "flags/JM.h"
#include "flags/JO.h"
#include "flags/KZ.h"
#include "flags/KE.h"
#include "flags/KI.h"
#include "flags/KP.h"
#include "flags/KR.h"
#include "flags/KW.h"
#include "flags/KG.h"
#include "flags/LA.h"
#include "flags/LV.h"
#include "flags/LB.h"
#include "flags/LS.h"
#include "flags/LR.h"
#include "flags/LY.h"
#include "flags/LI.h"
#include "flags/LT.h"
#include "flags/LU.h"
#include "flags/MO.h"
#include "flags/MG.h"
#include "flags/MW.h"
#include "flags/MY.h"
#include "flags/MV.h"
#include "flags/ML.h"
#include "flags/MT.h"
#include "flags/MH.h"
#include "flags/MQ.h"
#include "flags/MR.h"
#include "flags/MU.h"
#include "flags/YT.h"
#include "flags/MX.h"
#include "flags/FM.h"
#include "flags/MD.h"
#include "flags/MC.h"
#include "flags/MN.h"
#include "flags/ME.h"
#include "flags/MS.h"
#include "flags/MA.h"
#include "flags/MZ.h"
#include "flags/MM.h"
#include "flags/NA.h"
#include "flags/NR.h"
#include "flags/NP.h"
#include "flags/NL.h"
#include "flags/NC.h"
#include "flags/NZ.h"
#include "flags/NI.h"
#include "flags/NE.h"
#include "flags/NG.h"
#include "flags/NU.h"
#include "flags/NF.h"
#include "flags/MP.h"
#include "flags/NO.h"
#include "flags/PK.h"
#include "flags/PW.h"
#include "flags/PS.h"
#include "flags/PA.h"
#include "flags/PG.h"
#include "flags/PY.h"
#include "flags/PE.h"
#include "flags/PH.h"
#include "flags/PN.h"
#include "flags/PL.h"
#include "flags/PT.h"
#include "flags/PR.h"
#include "flags/QA.h"
#include "flags/MK.h"
#include "flags/RO.h"
#include "flags/RU.h"
#include "flags/RW.h"
#include "flags/RE.h"
#include "flags/BL.h"
#include "flags/SH.h"
#include "flags/KN.h"
#include "flags/LC.h"
#include "flags/MF.h"
#include "flags/PM.h"
#include "flags/VC.h"
#include "flags/WS.h"
#include "flags/SM.h"
#include "flags/ST.h"
#include "flags/SA.h"
#include "flags/SN.h"
#include "flags/RS.h"
#include "flags/SC.h"
#include "flags/SL.h"
#include "flags/SG.h"
#include "flags/SX.h"
#include "flags/SK.h"
#include "flags/SI.h"
#include "flags/SB.h"
#include "flags/SO.h"
#include "flags/ZA.h"
#include "flags/GS.h"
#include "flags/SS.h"
#include "flags/LK.h"
#include "flags/SD.h"
#include "flags/SR.h"
#include "flags/SJ.h"
#include "flags/SE.h"
#include "flags/CH.h"
#include "flags/SY.h"
#include "flags/TW.h"
#include "flags/TJ.h"
#include "flags/TZ.h"
#include "flags/TH.h"
#include "flags/TL.h"
#include "flags/TG.h"
#include "flags/TK.h"
#include "flags/TO.h"
#include "flags/TT.h"
#include "flags/TN.h"
#include "flags/TR.h"
#include "flags/TM.h"
#include "flags/TC.h"
#include "flags/TV.h"
#include "flags/UG.h"
#include "flags/UA.h"
#include "flags/AE.h"
#include "flags/GB.h"
#include "flags/US.h"
#include "flags/UY.h"
#include "flags/UZ.h"
#include "flags/VU.h"
#include "flags/VE.h"
#include "flags/VN.h"
#include "flags/VG.h"
#include "flags/VI.h"
#include "flags/WF.h"

#include "flags/YE.h"
#include "flags/ZM.h"
#include "flags/ZW.h"
#include "flags/AX.h"
#include "flags/IS.h"
#include "flags/IN.h"
#include "flags/ID.h"
#include "flags/IR.h"
#include "flags/IQ.h"
#include "flags/IE.h"
#include "flags/IM.h"
#include "flags/IL.h"
#include "flags/IT.h"

#pragma comment(lib, "urlmon.lib")
#pragma endregion
#pragma region Color
float m16[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float AKM[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float AWM[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float AWMimmo[] = { 0.942f, 0.300f, 0.073f, 1.000f };
float AirAttack[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float scarl[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float m762[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float M24[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float GROZZA[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float scope8x[] = { 0.866f, 0.128f, 0.081f, 1.000f };
float kar98[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Airdrop[] = { 0.279f, 0.990f, 0.812f, 1.000f };
float Flare[] = { 0.866f, 0.128f, 0.081f, 1.000f };
float Flaregun[] = { 1.0f, 0.60f,0.05f, 1.0f };

float dp[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float mg3[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float scope4x[] = { 0.937f, 0.063f, 0.937f, 1.000f };
float scope3x[] = { 0.874f, 0.484f, 0.106f, 1.000f };
float bag[] = { 0.529f, 0.127f, 0.903f, 1.000f };
float armer[] = { 0.591f, 1.000f, 0.237f, 1.000f };
float helmat[] = { 0.726f, 0.070f, 0.908f, 1.000f };
float mosin[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float aug[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float g36[] = { 0.671f, 0.217f, 1.000f, 1.000f };
float assm[] = { 1.000f, 0.217f, 0.762f, 1.000f };
float Grandes[] = { 1.000f, 0.396f, 0.357f, 1.000f };
float ammo7[] = { 0.984f, 0.871f, 0.043f, 1.000f };
float ammo5[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float madkit[] = { 0.952f, 0.558f, 0.129f, 1.000f };
float playerline[] = { 0.591f, 1.000f, 0.237f, 1.000f };
float playercorner[] = { 1.0f, 0.70f,0.30f, 1.0f };
float playerbox[] = { 1.0f, 1.0f,0.0f, 1.0f };
float lotbox[] = { 1.0f, 1.0f,0.0f, 1.0f };
// ARGB
float helthbar[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float boxColor[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float cornerColor[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float crosshairColor[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float bot[] = { 0.016f, 0.725f, 0.929f, 1.0f };
float player[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float vehicle[] = { 1.000f, 1.000f, 0.000f, 1.000f };
//RGB
float botcorner[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float botline[] = { 0.050f, 0.025f, 0.925f, 1.0f };
float circle[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float enemy[] = { 255, 255, 255, 255 };
float botbox[] = { 0.950f, 0.125f, 0.925f, 1.0f };
float bone[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float fillrect[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float nam[] = { 1.000f, 1.000f, 0.000f, 1.000f };
float nambar[] = { 0.880f, 0.185f, 0.25f, 1.0f };
float bothealth[] = { 0.95f, 0.125f, 0.825f, 1.0f };
float botname[] = { 0.050f, 0.825f, 0.185f, 1.0f };
float playerhealth[] = { 0.50f, 0.725f, 0.105f, 1.0f };
float textcolor[] = { 0.500f, 0.150f, 0.125f, 1.0f };
float skelec[] = { 27, 227, 206, 255 };

float Granades[] = { 0.990f, 0.995f, 0.995f, 1.0f };
float health[] = { 0.108f, 1.000f, 1.000f, 1.000f };
float deadbox[] = { 0.737f, 1.000f, 0.000f, 1.000f };
float deadboxitem[] = { 1.000f, 0.100f, 0.401f, 1.000f };
float airdrop[] = { 1.000f, 0.695f, 0.323f, 1.000f };
float airdropitem[] = { 0.300f, 0.695f, 0.323f, 1.000f };
float scopetextcolor[] = { 0.000f, 0.995f, 0.995f, 1.000f };
float allitem[] = { 0.034f, 1.000f, 0.040f, 1.000f };
float scope6x[] = { 0.120f, 0.955f, 0.125f, 1.0f };
float botbone[] = { 0.050f, 0.025f, 0.925f, 1.0f };
float playerbone[] = { 0.986f, 0.952f, 0.209f, 1.000f };
float magicline[] = { 255, 0, 0, 255 };
float bgcorner[] = { 0.000f, 1.000f, 0.964f, 1.000f };
float fovcirclecolor[] = { 255, 0, 0, 255 };
float weapont[] = { 255,255,0,255 };
float hpt[] = { 255, 255, 255, 255 };
float plancolor[] = { 0.737f, 1.000f, 0.000f, 1.000f };
float dotss[] = { 0.950f, 0.125f, 0.925f, 1.0f };
float Esp_Item_AKM_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float M249[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float MK12[] = { 1.00f, 0.796f, 0.715f, 1.0f };

float Esp_Item_M762_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_Mk47Mutant_Color[] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Esp_Item_DP28_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_SCARL_Color[] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Esp_Item_M416_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_M16A4_Color[] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Esp_Item_G36C_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_QBZ_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_QBU_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_SLR_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Esp_Item_SKS_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Esp_Item_Mini14_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_M24_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_Kar98k_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_PP19_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_TommyGun_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_MP5K_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_UMP9_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_Vector_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_Uzi_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_762mm_Color[] = { 0.984f, 0.871f, 0.043f, 1.000f };
float Esp_Item_556mm_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_9mm_Color[] = { 1.000f, 0.000f, 0.337f, 1.000f };
float Esp_Item_45ACP_Color[] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Esp_Item_Holo_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_x2_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_x3_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_x4_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_x6_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_x8_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_Bag1_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_Bag2_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };

float Esp_Item_Bag3_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };

float Esp_Item_Armor1_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_Armor2_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };

float Esp_Item_Armor3_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };

float Esp_Item_Helmet1_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_Helmet2_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };

float Esp_Item_Helmet3_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };

float Esp_Item_Frag_Color[] = { 1.000f, 1.000f, 0.000f, 1.000f };

float Esp_Item_Smoke_Color[] = { 1.000f, 1.000f, 0.000f, 1.000f };

float Esp_Item_Molotof_Color[] = { 1.000f, 1.000f, 0.000f, 1.000f };

float Esp_Item_MedKit_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_FirstAidKit_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_Painkiller_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_EnergyDrink_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_AdrenalineSyringe_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_FlareGun_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_Flare_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_AirDrop_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };



ID3D11ShaderResourceView* AFFLAG = nullptr;

ID3D11ShaderResourceView* ALFLAG = nullptr;

ID3D11ShaderResourceView* DZFLAG = nullptr;

ID3D11ShaderResourceView* ASFLAG = nullptr;

ID3D11ShaderResourceView* ADFLAG = nullptr;

ID3D11ShaderResourceView* AOFLAG = nullptr;

ID3D11ShaderResourceView* AIFLAG = nullptr;

ID3D11ShaderResourceView* AQFLAG = nullptr;

ID3D11ShaderResourceView* AGFLAG = nullptr;

ID3D11ShaderResourceView* ARFLAG = nullptr;

ID3D11ShaderResourceView* AMFLAG = nullptr;

ID3D11ShaderResourceView* AWFLAG = nullptr;

ID3D11ShaderResourceView* AUFLAG = nullptr;

ID3D11ShaderResourceView* ATFLAG = nullptr;

ID3D11ShaderResourceView* AZFLAG = nullptr;

ID3D11ShaderResourceView* BSFLAG = nullptr;

ID3D11ShaderResourceView* BHFLAG = nullptr;

ID3D11ShaderResourceView* BDFLAG = nullptr;

ID3D11ShaderResourceView* BBFLAG = nullptr;

ID3D11ShaderResourceView* BYFLAG = nullptr;

ID3D11ShaderResourceView* BEFLAG = nullptr;

ID3D11ShaderResourceView* BZFLAG = nullptr;

ID3D11ShaderResourceView* BJFLAG = nullptr;

ID3D11ShaderResourceView* BMFLAG = nullptr;

ID3D11ShaderResourceView* BTFLAG = nullptr;

ID3D11ShaderResourceView* BOFLAG = nullptr;

ID3D11ShaderResourceView* BQFLAG = nullptr;

ID3D11ShaderResourceView* BAFLAG = nullptr;

ID3D11ShaderResourceView* BWFLAG = nullptr;

ID3D11ShaderResourceView* BVFLAG = nullptr;

ID3D11ShaderResourceView* BRFLAG = nullptr;

ID3D11ShaderResourceView* IOFLAG = nullptr;

ID3D11ShaderResourceView* BNFLAG = nullptr;

ID3D11ShaderResourceView* BGFLAG = nullptr;

ID3D11ShaderResourceView* BFFLAG = nullptr;

ID3D11ShaderResourceView* BIFLAG = nullptr;

ID3D11ShaderResourceView* CVFLAG = nullptr;

ID3D11ShaderResourceView* KHFLAG = nullptr;

ID3D11ShaderResourceView* CMFLAG = nullptr;

ID3D11ShaderResourceView* CAFLAG = nullptr;

ID3D11ShaderResourceView* KYFLAG = nullptr;

ID3D11ShaderResourceView* CFFLAG = nullptr;

ID3D11ShaderResourceView* TDFLAG = nullptr;

ID3D11ShaderResourceView* CLFLAG = nullptr;

ID3D11ShaderResourceView* CNFLAG = nullptr;

ID3D11ShaderResourceView* CXFLAG = nullptr;

ID3D11ShaderResourceView* CCFLAG = nullptr;

ID3D11ShaderResourceView* COFLAG = nullptr;

ID3D11ShaderResourceView* KMFLAG = nullptr;

ID3D11ShaderResourceView* CDFLAG = nullptr;
ID3D11ShaderResourceView* CGFLAG = nullptr;

ID3D11ShaderResourceView* CKFLAG = nullptr;

ID3D11ShaderResourceView* CRFLAG = nullptr;

ID3D11ShaderResourceView* HRFLAG = nullptr;

ID3D11ShaderResourceView* CUFLAG = nullptr;

ID3D11ShaderResourceView* CWFLAG = nullptr;

ID3D11ShaderResourceView* CYFLAG = nullptr;

ID3D11ShaderResourceView* CZFLAG = nullptr;

ID3D11ShaderResourceView* CIFLAG = nullptr;

ID3D11ShaderResourceView* DKFLAG = nullptr;

ID3D11ShaderResourceView* DJFLAG = nullptr;

ID3D11ShaderResourceView* DMFLAG = nullptr;

ID3D11ShaderResourceView* DOFLAG = nullptr;

ID3D11ShaderResourceView* ECFLAG = nullptr;

ID3D11ShaderResourceView* EGFLAG = nullptr;

ID3D11ShaderResourceView* SVFLAG = nullptr;

ID3D11ShaderResourceView* GQFLAG = nullptr;

ID3D11ShaderResourceView* ERFLAG = nullptr;

ID3D11ShaderResourceView* EEFLAG = nullptr;

ID3D11ShaderResourceView* SZFLAG = nullptr;
ID3D11ShaderResourceView* ETFLAG = nullptr;
ID3D11ShaderResourceView* FKFLAG = nullptr;

ID3D11ShaderResourceView* FOFLAG = nullptr;
ID3D11ShaderResourceView* FJFLAG = nullptr;

ID3D11ShaderResourceView* FIFLAG = nullptr;

ID3D11ShaderResourceView* FRFLAG = nullptr;

ID3D11ShaderResourceView* GFFLAG = nullptr;

ID3D11ShaderResourceView* PFFLAG = nullptr;
ID3D11ShaderResourceView* TFFLAG = nullptr;
ID3D11ShaderResourceView* GAFLAG = nullptr;
ID3D11ShaderResourceView* GMFLAG = nullptr;
ID3D11ShaderResourceView* GEFLAG = nullptr;
ID3D11ShaderResourceView* DEFLAG = nullptr;
ID3D11ShaderResourceView* GHFLAG = nullptr;
ID3D11ShaderResourceView* GIFLAG = nullptr;
ID3D11ShaderResourceView* GRFLAG = nullptr;
ID3D11ShaderResourceView* GLFLAG = nullptr;
ID3D11ShaderResourceView* GDFLAG = nullptr;
ID3D11ShaderResourceView* GPFLAG = nullptr;
ID3D11ShaderResourceView* GUFLAG = nullptr;
ID3D11ShaderResourceView* GTFLAG = nullptr;
ID3D11ShaderResourceView* GGFLAG = nullptr;
ID3D11ShaderResourceView* GNFLAG = nullptr;
ID3D11ShaderResourceView* GWFLAG = nullptr;
ID3D11ShaderResourceView* GYFLAG = nullptr;
ID3D11ShaderResourceView* HTFLAG = nullptr;
ID3D11ShaderResourceView* HMFLAG = nullptr;
ID3D11ShaderResourceView* VAFLAG = nullptr;
ID3D11ShaderResourceView* HNFLAG = nullptr;
ID3D11ShaderResourceView* HKFLAG = nullptr;
ID3D11ShaderResourceView* HUFLAG = nullptr;
ID3D11ShaderResourceView* JMFLAG = nullptr;
ID3D11ShaderResourceView* G1FLAG = nullptr;
ID3D11ShaderResourceView* JPFLAG = nullptr;
ID3D11ShaderResourceView* JEFLAG = nullptr;
ID3D11ShaderResourceView* JOFLAG = nullptr;
ID3D11ShaderResourceView* KZFLAG = nullptr;
ID3D11ShaderResourceView* KEFLAG = nullptr;
ID3D11ShaderResourceView* KIFLAG = nullptr;
ID3D11ShaderResourceView* KPFLAG = nullptr;
ID3D11ShaderResourceView* KRFLAG = nullptr;
ID3D11ShaderResourceView* KWFLAG = nullptr;
ID3D11ShaderResourceView* KGFLAG = nullptr;
ID3D11ShaderResourceView* LAFLAG = nullptr;

ID3D11ShaderResourceView* LVFLAG = nullptr;
ID3D11ShaderResourceView* LBFLAG = nullptr;
ID3D11ShaderResourceView* LSFLAG = nullptr;
ID3D11ShaderResourceView* LRFLAG = nullptr;

ID3D11ShaderResourceView* LYFLAG = nullptr;

ID3D11ShaderResourceView* LIFLAG = nullptr;

ID3D11ShaderResourceView* LTFLAG = nullptr;

ID3D11ShaderResourceView* LUFLAG = nullptr;

ID3D11ShaderResourceView* MOFLAG = nullptr;

ID3D11ShaderResourceView* MGFLAG = nullptr;

ID3D11ShaderResourceView* MWFLAG = nullptr;

ID3D11ShaderResourceView* MYFLAG = nullptr;

ID3D11ShaderResourceView* MVFLAG = nullptr;

ID3D11ShaderResourceView* MLFLAG = nullptr;

ID3D11ShaderResourceView* MTFLAG = nullptr;

ID3D11ShaderResourceView* MHFLAG = nullptr;

ID3D11ShaderResourceView* MQFLAG = nullptr;

ID3D11ShaderResourceView* MRFLAG = nullptr;

ID3D11ShaderResourceView* MUFLAG = nullptr;

ID3D11ShaderResourceView* YTFLAG = nullptr;

ID3D11ShaderResourceView* MXFLAG = nullptr;

ID3D11ShaderResourceView* FMFLAG = nullptr;

ID3D11ShaderResourceView* MDFLAG = nullptr;

ID3D11ShaderResourceView* MCFLAG = nullptr;

ID3D11ShaderResourceView* MNFLAG = nullptr;

ID3D11ShaderResourceView* MEFLAG = nullptr;

ID3D11ShaderResourceView* MSFLAG = nullptr;

ID3D11ShaderResourceView* MAFLAG = nullptr;
ID3D11ShaderResourceView* MZFLAG = nullptr;
ID3D11ShaderResourceView* MMFLAG = nullptr;
ID3D11ShaderResourceView* NAFLAG = nullptr;
ID3D11ShaderResourceView* NRFLAG = nullptr;

ID3D11ShaderResourceView* NPFLAG = nullptr;

ID3D11ShaderResourceView* NLFLAG = nullptr;

ID3D11ShaderResourceView* NCFLAG = nullptr;

ID3D11ShaderResourceView* NZFLAG = nullptr;

ID3D11ShaderResourceView* NIFLAG = nullptr;

ID3D11ShaderResourceView* NEFLAG = nullptr;

ID3D11ShaderResourceView* NGFLAG = nullptr;

ID3D11ShaderResourceView* NUFLAG = nullptr;

ID3D11ShaderResourceView* NFFLAG = nullptr;

ID3D11ShaderResourceView* MPFLAG = nullptr;

ID3D11ShaderResourceView* NOFLAG = nullptr;

ID3D11ShaderResourceView* OMFLAG = nullptr;

ID3D11ShaderResourceView* PKFLAG = nullptr;

ID3D11ShaderResourceView* PWFLAG = nullptr;

ID3D11ShaderResourceView* PSFLAG = nullptr;

ID3D11ShaderResourceView* PAFLAG = nullptr;

ID3D11ShaderResourceView* PGFLAG = nullptr;

ID3D11ShaderResourceView* PYFLAG = nullptr;

ID3D11ShaderResourceView* PEFLAG = nullptr;

ID3D11ShaderResourceView* PHFLAG = nullptr;

ID3D11ShaderResourceView* PNFLAG = nullptr;

ID3D11ShaderResourceView* PLFLAG = nullptr;

ID3D11ShaderResourceView* PTFLAG = nullptr;

ID3D11ShaderResourceView* PRFLAG = nullptr;
ID3D11ShaderResourceView* QAFLAG = nullptr;

ID3D11ShaderResourceView* MKFLAG = nullptr;

ID3D11ShaderResourceView* ROFLAG = nullptr;

ID3D11ShaderResourceView* RUFLAG = nullptr;

ID3D11ShaderResourceView* RWFLAG = nullptr;

ID3D11ShaderResourceView* REFLAG = nullptr;

ID3D11ShaderResourceView* BLFLAG = nullptr;

ID3D11ShaderResourceView* SHFLAG = nullptr;

ID3D11ShaderResourceView* KNFLAG = nullptr;

ID3D11ShaderResourceView* LCFLAG = nullptr;

ID3D11ShaderResourceView* MFFLAG = nullptr;

ID3D11ShaderResourceView* PMFLAG = nullptr;

ID3D11ShaderResourceView* VCFLAG = nullptr;

ID3D11ShaderResourceView* WSFLAG = nullptr;

ID3D11ShaderResourceView* SMFLAG = nullptr;

ID3D11ShaderResourceView* STFLAG = nullptr;

ID3D11ShaderResourceView* SAFLAG = nullptr;

ID3D11ShaderResourceView* SNFLAG = nullptr;

ID3D11ShaderResourceView* RSFLAG = nullptr;

ID3D11ShaderResourceView* SCFLAG = nullptr;

ID3D11ShaderResourceView* SLFLAG = nullptr;

ID3D11ShaderResourceView* SGFLAG = nullptr;

ID3D11ShaderResourceView* SXFLAG = nullptr;

ID3D11ShaderResourceView* SKFLAG = nullptr;

ID3D11ShaderResourceView* SIFLAG = nullptr;

ID3D11ShaderResourceView* SBFLAG = nullptr;

ID3D11ShaderResourceView* SOFLAG = nullptr;

ID3D11ShaderResourceView* ZAFLAG = nullptr;

ID3D11ShaderResourceView* GSFLAG = nullptr;

ID3D11ShaderResourceView* SSFLAG = nullptr;

ID3D11ShaderResourceView* ESFLAG = nullptr;

ID3D11ShaderResourceView* LKFLAG = nullptr;

ID3D11ShaderResourceView* SDFLAG = nullptr;

ID3D11ShaderResourceView* SRFLAG = nullptr;

ID3D11ShaderResourceView* SJFLAG = nullptr;

ID3D11ShaderResourceView* SEFLAG = nullptr;

ID3D11ShaderResourceView* CHFLAG = nullptr;

ID3D11ShaderResourceView* SYFLAG = nullptr;

ID3D11ShaderResourceView* TWFLAG = nullptr;

ID3D11ShaderResourceView* TJFLAG = nullptr;

ID3D11ShaderResourceView* TZFLAG = nullptr;

ID3D11ShaderResourceView* THFLAG = nullptr;

ID3D11ShaderResourceView* TLFLAG = nullptr;

ID3D11ShaderResourceView* TGFLAG = nullptr;

ID3D11ShaderResourceView* TKFLAG = nullptr;

ID3D11ShaderResourceView* TOFLAG = nullptr;

ID3D11ShaderResourceView* TTFLAG = nullptr;

ID3D11ShaderResourceView* TNFLAG = nullptr;

ID3D11ShaderResourceView* TRFLAG = nullptr;

ID3D11ShaderResourceView* TMFLAG = nullptr;

ID3D11ShaderResourceView* TCFLAG = nullptr;

ID3D11ShaderResourceView* TVFLAG = nullptr;

ID3D11ShaderResourceView* UGFLAG = nullptr;

ID3D11ShaderResourceView* UAFLAG = nullptr;

ID3D11ShaderResourceView* AEFLAG = nullptr;

ID3D11ShaderResourceView* GBFLAG = nullptr;

ID3D11ShaderResourceView* USFLAG = nullptr;

ID3D11ShaderResourceView* UYFLAG = nullptr;

ID3D11ShaderResourceView* UZFLAG = nullptr;

ID3D11ShaderResourceView* VUFLAG = nullptr;

ID3D11ShaderResourceView* VEFLAG = nullptr;

ID3D11ShaderResourceView* VNFLAG = nullptr;

ID3D11ShaderResourceView* VGFLAG = nullptr;

ID3D11ShaderResourceView* VIFLAG = nullptr;

ID3D11ShaderResourceView* WFFLAG = nullptr;

ID3D11ShaderResourceView* EHFLAG = nullptr;

ID3D11ShaderResourceView* YEFLAG = nullptr;

ID3D11ShaderResourceView* ZMFLAG = nullptr;

ID3D11ShaderResourceView* ZWFLAG = nullptr;

ID3D11ShaderResourceView* AXFLAG = nullptr;

ID3D11ShaderResourceView* ISFLAG = nullptr;

ID3D11ShaderResourceView* INFLAG = nullptr;

ID3D11ShaderResourceView* IDFLAG = nullptr;

ID3D11ShaderResourceView* IRFLAG = nullptr;

ID3D11ShaderResourceView* IQFLAG = nullptr;

ID3D11ShaderResourceView* IEFLAG = nullptr;

ID3D11ShaderResourceView* IMFLAG = nullptr;

ID3D11ShaderResourceView* ILFLAG = nullptr;

ID3D11ShaderResourceView* ITFLAG = nullptr;


#pragma comment(lib, "urlmon.lib")

using namespace std;
using namespace KeyAuth;

bool fight = true;
std::string str = "PABLO";
bool login = false;
bool loginn = true;
bool SaveUsers = true;
bool savekey = true;
bool loader_active = true;
D3DMATRIX Esp::ViewMatrix;
static bool Bot = true;
static bool Player = true;
std::string tim;
char str1[60] = "";
float overlaycolor = 0.0f;
int teamid;
ImVec4 linescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 bonescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 fullboxcolor;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 cornerboxcolor;// = { 1.0f,1.0f,1.0f,1.0f };

int weapsize = 14;

ImVec4 blinescolors;
ImVec4 bbonescolors;
ImVec4 bfullboxcolor;
ImVec4 bcornerboxcolor;
bool driving = true;
ImColor col;
bool unload = false;

static auto Flags2 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
static auto Flags21 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar;

namespace Settings
{
	static int Tab = 1;
}
bool watermark = true;
int currIndex;
float popcorn = 0.5f;
float popcorn2 = 0.450f;
ImVec4 colorr;
int Emu_Int = 0;
int item_current_Emu = 0;
int currentengine = 0;
int item_current_Aim = 0;
int skelesec = 0;

//  (DX11::pDevice, &logo, sizeof(logo), 462, 462, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &logggo);
void DrawImage(ID3D11ShaderResourceView* img, int x, int y, int sizex, int sizey)
{
	ImGui::GetOverlayDrawList()->AddImage(img, ImVec2(x, y), ImVec2(x + sizex, y + sizey));
}
ImVec4 to_vec4(float r, float g, float b, float a)
{
	return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);
}

ID3D11ShaderResourceView* Image = nullptr;
ID3D11ShaderResourceView* ImageFree = nullptr;
ID3D11ShaderResourceView* ImageVip = nullptr;

void ImageLoad()
{
	D3DX11_IMAGE_LOAD_INFO info;
	D3DX11_IMAGE_LOAD_INFO infoFree;
	D3DX11_IMAGE_LOAD_INFO infoVip;
	ID3DX11ThreadPump* pump{ nullptr };
	ID3DX11ThreadPump* pumpFree{ nullptr };
	ID3DX11ThreadPump* pumpVip{ nullptr };


	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, backgroundimagehex1, sizeof(backgroundimagehex1), &info, pump, &Image, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, backgroundimagehexFree, sizeof(backgroundimagehexFree), &infoFree, pumpFree, &ImageFree, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, backgroundimagehexVip, sizeof(backgroundimagehexVip), &infoVip, pumpVip, &ImageVip, 0);


	////////////////////////////////////////////////////////////////////// FLAGS ////////////////////////////////////////////////////////////////////////


	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AF, sizeof(AF), &info, pump, &AFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AL, sizeof(AL), &info, pump, &ALFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DZ, sizeof(DZ), &info, pump, &DZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AS, sizeof(AS), &info, pump, &ASFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AD, sizeof(AD), &info, pump, &ADFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AO, sizeof(AO), &info, pump, &AOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AI, sizeof(AI), &info, pump, &AIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AG, sizeof(AG), &info, pump, &AGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AR, sizeof(AR), &info, pump, &ARFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AM, sizeof(AM), &info, pump, &AMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AW, sizeof(AW), &info, pump, &AWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AU, sizeof(AU), &info, pump, &AUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AT, sizeof(AT), &info, pump, &ATFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AZ, sizeof(AZ), &info, pump, &AZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BS, sizeof(BS), &info, pump, &BSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BH, sizeof(BH), &info, pump, &BHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BD, sizeof(BD), &info, pump, &BDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BB, sizeof(BB), &info, pump, &BBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BY, sizeof(BY), &info, pump, &BYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BE, sizeof(BE), &info, pump, &BEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BZ, sizeof(BZ), &info, pump, &BZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BJ, sizeof(BJ), &info, pump, &BJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BM, sizeof(BM), &info, pump, &BMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BT, sizeof(BT), &info, pump, &BTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BO, sizeof(BO), &info, pump, &BOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BA, sizeof(BA), &info, pump, &BAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BW, sizeof(BW), &info, pump, &BWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BV, sizeof(BV), &info, pump, &BVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IO, sizeof(IO), &info, pump, &BRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IO, sizeof(IO), &info, pump, &IOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BN, sizeof(BN), &info, pump, &BNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BG, sizeof(BG), &info, pump, &BGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BF, sizeof(BF), &info, pump, &BFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BI, sizeof(BI), &info, pump, &BIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CV, sizeof(CV), &info, pump, &CVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KH, sizeof(KH), &info, pump, &KHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CM, sizeof(CM), &info, pump, &CMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CA, sizeof(CA), &info, pump, &CAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KY, sizeof(KY), &info, pump, &KYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CF, sizeof(CF), &info, pump, &CFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TD, sizeof(TD), &info, pump, &TDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CL, sizeof(CL), &info, pump, &CLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CN, sizeof(CN), &info, pump, &CNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CX, sizeof(CX), &info, pump, &CXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CC, sizeof(CC), &info, pump, &CCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CO, sizeof(CO), &info, pump, &COFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KM, sizeof(KM), &info, pump, &KMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CD, sizeof(CD), &info, pump, &CDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CG, sizeof(CG), &info, pump, &CGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CK, sizeof(CK), &info, pump, &CKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CR, sizeof(CR), &info, pump, &CRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HR, sizeof(HR), &info, pump, &HRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CU, sizeof(CU), &info, pump, &CUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CW, sizeof(CW), &info, pump, &CWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CY1, sizeof(CY1), &info, pump, &CYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CZ, sizeof(CZ), &info, pump, &CZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CI, sizeof(CI), &info, pump, &CIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DK, sizeof(DK), &info, pump, &DKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DJ, sizeof(DJ), &info, pump, &DJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DM, sizeof(DM), &info, pump, &DMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DO, sizeof(DO), &info, pump, &DOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EC, sizeof(EC), &info, pump, &ECFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EG, sizeof(EG), &info, pump, &EGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SV, sizeof(SV), &info, pump, &SVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GQ, sizeof(GQ), &info, pump, &GQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ER, sizeof(ER), &info, pump, &ERFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EE, sizeof(EE), &info, pump, &EEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SZ, sizeof(SZ), &info, pump, &SZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ET, sizeof(ET), &info, pump, &ETFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FK, sizeof(FK), &info, pump, &FKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FO, sizeof(FO), &info, pump, &FOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FJ, sizeof(FJ), &info, pump, &FJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FI, sizeof(FI), &info, pump, &FIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FR, sizeof(FR), &info, pump, &FRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GF, sizeof(GF), &info, pump, &GFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PF, sizeof(PF), &info, pump, &PFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TF, sizeof(TF), &info, pump, &TFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GA, sizeof(GA), &info, pump, &GAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GM, sizeof(GM), &info, pump, &GMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GE, sizeof(GE), &info, pump, &GEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DE, sizeof(DE), &info, pump, &DEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GH, sizeof(GH), &info, pump, &GHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LY, sizeof(LY), &info, pump, &LYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LI, sizeof(LI), &info, pump, &LIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LT, sizeof(LT), &info, pump, &LTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LU, sizeof(LU), &info, pump, &LUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MO, sizeof(MO), &info, pump, &MOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MG, sizeof(MG), &info, pump, &MGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MW, sizeof(MW), &info, pump, &MWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MY, sizeof(MY), &info, pump, &MYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MV, sizeof(MV), &info, pump, &MVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ML, sizeof(ML), &info, pump, &MLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MT, sizeof(MT), &info, pump, &MTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MH, sizeof(MH), &info, pump, &MHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MQ, sizeof(MQ), &info, pump, &MQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MR, sizeof(MR), &info, pump, &MRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MU, sizeof(MU), &info, pump, &MUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, YT, sizeof(YT), &info, pump, &YTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MX, sizeof(MX), &info, pump, &MXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FM, sizeof(FM), &info, pump, &FMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MD, sizeof(MD), &info, pump, &MDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MC, sizeof(MC), &info, pump, &MCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MN, sizeof(MN), &info, pump, &MNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ME, sizeof(ME), &info, pump, &MEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MS, sizeof(MS), &info, pump, &MSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MA, sizeof(MA), &info, pump, &MAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MZ, sizeof(MZ), &info, pump, &MZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MM, sizeof(MM), &info, pump, &MMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NA, sizeof(NA), &info, pump, &NAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NR, sizeof(NR), &info, pump, &NRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GI, sizeof(GI), &info, pump, &GIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GR, sizeof(GR), &info, pump, &GRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GL, sizeof(GL), &info, pump, &GLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GD, sizeof(GD), &info, pump, &GDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GP, sizeof(GP), &info, pump, &GPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GU, sizeof(GU), &info, pump, &GUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GT, sizeof(GT), &info, pump, &GTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GG, sizeof(GG), &info, pump, &GGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GN, sizeof(GN), &info, pump, &GNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GW, sizeof(GW), &info, pump, &GWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GY, sizeof(GY), &info, pump, &GYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HT, sizeof(HT), &info, pump, &HTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HM, sizeof(HM), &info, pump, &HMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VA, sizeof(VA), &info, pump, &VAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HN, sizeof(HN), &info, pump, &HNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HK, sizeof(HK), &info, pump, &HKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HU, sizeof(HU), &info, pump, &HUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JM, sizeof(JM), &info, pump, &JMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, G1, sizeof(G1), &info, pump, &G1FLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JP, sizeof(JP), &info, pump, &JPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JE, sizeof(JE), &info, pump, &JEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JO, sizeof(JO), &info, pump, &JOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KZ, sizeof(KZ), &info, pump, &KZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KE, sizeof(KE), &info, pump, &KEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KI, sizeof(KI), &info, pump, &KIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KP, sizeof(KP), &info, pump, &KPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KR, sizeof(KR), &info, pump, &KRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KW, sizeof(KW), &info, pump, &KWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KG, sizeof(KG), &info, pump, &KGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LA, sizeof(LA), &info, pump, &LAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LV, sizeof(LV), &info, pump, &LVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LB, sizeof(LB), &info, pump, &LBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LS, sizeof(LS), &info, pump, &LSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LR, sizeof(LR), &info, pump, &LRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TR, sizeof(TR), &info, pump, &TRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TM, sizeof(TM), &info, pump, &TMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TC, sizeof(TC), &info, pump, &TCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TV, sizeof(TV), &info, pump, &TVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UG, sizeof(UG), &info, pump, &UGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UA, sizeof(UA), &info, pump, &UAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AE, sizeof(AE), &info, pump, &AEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, US, sizeof(US), &info, pump, &GBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, US, sizeof(US), &info, pump, &USFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UY, sizeof(UY), &info, pump, &UYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UZ, sizeof(UZ), &info, pump, &UZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VU, sizeof(VU), &info, pump, &VUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VE, sizeof(VE), &info, pump, &VEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VN, sizeof(VN), &info, pump, &VNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VG, sizeof(VG), &info, pump, &VGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VI, sizeof(VI), &info, pump, &VIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, WF, sizeof(WF), &info, pump, &WFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, YE, sizeof(YE), &info, pump, &YEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZM, sizeof(ZM), &info, pump, &ZMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZW, sizeof(ZW), &info, pump, &ZWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AX, sizeof(AX), &info, pump, &AXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IS, sizeof(IS), &info, pump, &ISFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IN1, sizeof(IN1), &info, pump, &INFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ID, sizeof(ID), &info, pump, &IDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IR, sizeof(IR), &info, pump, &IRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IQ, sizeof(IQ), &info, pump, &IQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IE, sizeof(IE), &info, pump, &IEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IM, sizeof(IM), &info, pump, &IMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IL, sizeof(IL), &info, pump, &ILFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IT, sizeof(IT), &info, pump, &ITFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NP, sizeof(NP), &info, pump, &NPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NL, sizeof(NL), &info, pump, &NLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NC, sizeof(NC), &info, pump, &NCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NZ, sizeof(NZ), &info, pump, &NZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NI, sizeof(NI), &info, pump, &NIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NE, sizeof(NE), &info, pump, &NEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NG, sizeof(NG), &info, pump, &NGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NU, sizeof(NU), &info, pump, &NUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NF, sizeof(NF), &info, pump, &NFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MP, sizeof(MP), &info, pump, &MPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NO, sizeof(NO), &info, pump, &NOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PK, sizeof(PK), &info, pump, &PKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PW, sizeof(PW), &info, pump, &PWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PS, sizeof(PS), &info, pump, &PSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PA, sizeof(PA), &info, pump, &PAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PG, sizeof(PG), &info, pump, &PGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PY, sizeof(PY), &info, pump, &PYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PE, sizeof(PE), &info, pump, &PEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PH, sizeof(PH), &info, pump, &PHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PN, sizeof(PN), &info, pump, &PNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PL, sizeof(PL), &info, pump, &PLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PT, sizeof(PT), &info, pump, &PTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PR, sizeof(PR), &info, pump, &PRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, QA, sizeof(QA), &info, pump, &QAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MK, sizeof(MK), &info, pump, &MKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RO, sizeof(RO), &info, pump, &ROFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RU, sizeof(RU), &info, pump, &RUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RW, sizeof(RW), &info, pump, &RWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RE, sizeof(RE), &info, pump, &REFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BL, sizeof(BL), &info, pump, &BLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SH, sizeof(SH), &info, pump, &SHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KN, sizeof(KN), &info, pump, &KNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LC, sizeof(LC), &info, pump, &LCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MF, sizeof(MF), &info, pump, &MFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PM, sizeof(PM), &info, pump, &PMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VC, sizeof(VC), &info, pump, &VCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, WS, sizeof(WS), &info, pump, &WSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SM, sizeof(SM), &info, pump, &SMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ST, sizeof(ST), &info, pump, &STFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SA, sizeof(SA), &info, pump, &SAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SN, sizeof(SN), &info, pump, &SNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RS, sizeof(RS), &info, pump, &RSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SC, sizeof(SC), &info, pump, &SCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SL, sizeof(SL), &info, pump, &SLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SG, sizeof(SG), &info, pump, &SGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SX, sizeof(SX), &info, pump, &SXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SK, sizeof(SK), &info, pump, &SKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SI, sizeof(SI), &info, pump, &SIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SB, sizeof(SB), &info, pump, &SBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SO, sizeof(SO), &info, pump, &SOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZA, sizeof(ZA), &info, pump, &ZAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GS, sizeof(GS), &info, pump, &GSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SS, sizeof(SS), &info, pump, &SSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LK, sizeof(LK), &info, pump, &LKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SD, sizeof(SD), &info, pump, &SDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SR, sizeof(SR), &info, pump, &SRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SJ, sizeof(SJ), &info, pump, &SJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SE, sizeof(SE), &info, pump, &SEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CH, sizeof(CH), &info, pump, &CHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SY, sizeof(SY), &info, pump, &SYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TW, sizeof(TW), &info, pump, &TWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TJ, sizeof(TJ), &info, pump, &TJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TZ, sizeof(TZ), &info, pump, &TZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TH, sizeof(TH), &info, pump, &THFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TL, sizeof(TL), &info, pump, &TLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TG, sizeof(TG), &info, pump, &TGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TK, sizeof(TK), &info, pump, &TKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TO, sizeof(TO), &info, pump, &TOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TT, sizeof(TT), &info, pump, &TTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TN, sizeof(TN), &info, pump, &TNFLAG, 0);
}

std::wstring s2ws(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}
std::string GetCurrentDirectory()
{
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	std::string::size_type pos = std::string(buffer).find_last_of("\\/");
	return std::string(buffer).substr(0, pos);
}
inline bool FileExist(const std::string& name) {
	if (FILE* file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	}
	else {
		return false;
	}
}
void Esp::LoadConfig(std::string Path) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	//	if (rc < 0) { std::cout << "File not found"; };
	if (FileExist(Path))
	{
		bool State = ini.GetBoolValue("Key", "UserKeyState");
		if (State == true)
		{
			std::string Key = ini.GetValue("Key", "UserKey");
			if (Key != "")
			{
				strcpy(str1, Key.c_str());
				SaveUsers = true;
			}

		}

	}
}
void WriteConfig(std::string Path, std::string Key, bool State) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) {
		//	std::cout << "File not found";
	};
	if (State == true)
	{
		ini.SetBoolValue("Key", "UserKeyState", true);
	}
	else
	{
		ini.SetBoolValue("Key", "UserKeyState", false);
	}
	ini.SetValue("Key", "UserKey", Key.c_str());

	ini.SaveFile(Path.c_str());
}

bool dirExists(const std::string& dirName_in)
{
	DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
	if (ftyp == INVALID_FILE_ATTRIBUTES)
		return false;  //something is wrong with your path!

	if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
		return true;   // this is a directory!

	return false;    // this is not a directory!
}


void WriteResToDisk(std::string PathFile, LPWSTR File_WITHARG)
{
	HRSRC myResource = ::FindResource(NULL, File_WITHARG, RT_RCDATA);
	unsigned int myResourceSize = ::SizeofResource(NULL, myResource);
	HGLOBAL myResourceData = ::LoadResource(NULL, myResource);
	void* pMyExecutable = ::LockResource(myResourceData);
	std::ofstream f(PathFile, std::ios::out | std::ios::binary);
	f.write((char*)pMyExecutable, myResourceSize);
	f.close();
}
void WriteConfigurate(std::string Path)
{
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) { std::cout << "File not found"; };



	Setting::MagicBullet = ini.GetBoolValue("ESp", "key0");
	Setting::MAgicline = ini.GetDoubleValue("ESp", "Key1");
	Setting::playerBone = ini.GetBoolValue("ESp", "Key2");
	Setting::playerdeadbox = ini.GetBoolValue("ESp", "Key3");
	Setting::pcorner = ini.GetBoolValue("ESp", "Key4");
	Setting::allitemss = ini.GetBoolValue("ESp", "Key5");
	Setting::hp = ini.GetDoubleValue("ESp", "Key6");
	//	Setting::style1 = ini.GetBoolValue("style1", "Key7");
	Setting::pfullbox = ini.GetBoolValue("ESp", "Key8");
	Setting::pline = ini.GetDoubleValue("ESp", "Key9");
	Setting::botfullbox = ini.GetBoolValue("ESp", "Key10");
	Setting::fightmode = ini.GetDoubleValue("ESp", "Key11");
	Setting::botcorner = ini.GetBoolValue("ESp", "Key12");
	Setting::botblood = ini.GetBoolValue("ESp", "Key14");
	Setting::botBone = ini.GetDoubleValue("ESp", "Key13");
	Setting::botline = ini.GetBoolValue("ESp", "Key15");
	Setting::curraim = ini.GetDoubleValue("ESp", "Key16");
	Setting::botBone = ini.GetBoolValue("ESp", "Key17");

	ini.SaveFile(Path.c_str());
}

void LoadConfiggg(std::string Path)
{
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) { std::cout << "File not found"; };

	Setting::MagicBullet = ini.GetBoolValue("MagicBullet", "key0");
	Setting::MAgicline = ini.GetDoubleValue("MAgicline", "Key1");
	Setting::playerBone = ini.GetBoolValue("playerBone", "Key2");
	Setting::playerdeadbox = ini.GetBoolValue("playerdeadbox", "Key3");
	Setting::pcorner = ini.GetBoolValue("pcorner", "Key4");
	Setting::allitemss = ini.GetBoolValue("allitemss", "Key5");
	Setting::hp = ini.GetDoubleValue("HP", "Key6");
	//Setting::style1 = ini.GetBoolValue("style1", "Key7");
	Setting::pfullbox = ini.GetBoolValue("pfullbox", "Key8");
	Setting::pline = ini.GetDoubleValue("pline", "Key9");
	Setting::botfullbox = ini.GetBoolValue("botfullbox", "Key10");
	Setting::fightmode = ini.GetDoubleValue("fightmode", "Key11");
	Setting::botcorner = ini.GetBoolValue("botcorner", "Key12");
	Setting::botblood = ini.GetBoolValue("botblood", "Key14");
	Setting::botBone = ini.GetDoubleValue("botBone", "Key13");
	Setting::botline = ini.GetBoolValue("botline", "Key15");
	Setting::curraim = ini.GetDoubleValue("Aim", "Key16");
	Setting::botBone = ini.GetBoolValue("botBone", "Key17");

}


///Settings
int nsize = 14;
static int skelee = 1;
static int linne = 0;
static int hpbt = 0;
static int boxe = 0;
static int aimbp = 0;
int dissize = 14;
int hp = 14;
int vehisize = 15;
bool marco1 = false;
bool nothingm = true;
bool nothinga = false;


//
void DrawMenu2() {
	/*------------------------*/
	if (Setting::viplogin)
	{
		static auto Flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
		static auto Flags1 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
		ImGuiStyle& style = ImGui::GetStyle();
		style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
		ImGuiIO& Io = ImGui::GetIO();

		ImGui::PushStyleColor(ImGuiCol_WindowBg, to_vec4(0, 0, 0, 0));
		ImGui::PushStyleColor(ImGuiCol_Border, to_vec4(0, 0, 0, 0));

		//bool pOpen1 = true;
		ImGui::SetNextWindowPos({ 2, (DX11Window::Height / 2.0f) - 125 });
		ImGui::SetNextWindowSize({ 200.f,300.f });
		if (ImGui::Begin("||! PABLO !||", 0, Flags))

		{
			ImGui::SetCursorPos({ 0,0 });// العرض 180
			ImGui::Image((PVOID)ImageVip, ImVec2(170, 300));
			ImGui::SetCursorPos({ 0.f,80.0f });
			ImGui::SetNextWindowBgAlpha(0.60f);

			ImGui::Spacing();
			std::string hack = "        | Home - Hide |";
			std::string MoreOp = "       | Insert - Menu |";
			std::string Insert = "     | End - Exit Menu |";

			float dsheight = DX11Window::Height / 2;

			VECTOR3 screen;
			int distance;


			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 0, 255));
			ImGui::PopStyleColor();

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
			ImGui::PopStyleColor();


			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,72 });
			ImGui::Text("       " ICON_FA_MAGIC "F2:");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::MagicBullet)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text(" Magic Bullet ");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(" Magic Bullet ");
				ImGui::PopStyleColor();
			}

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,98 });
			ImGui::Text("       " ICON_FA_CROSSHAIRS "F3:");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::Aimbot)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text(" Aimbot ");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(" Aimbot ");
				ImGui::PopStyleColor();
			}

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,122 });
			ImGui::Text("       " ICON_FA_BOOK "F4:");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::Item)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(" Fight Mod ");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text(" Fight Mod ");
				ImGui::PopStyleColor();
			}

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,149 });
			ImGui::Text("      " ICON_FA_CAR "F5:");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::style1)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(" ESP Style 1 ");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(" ESP Style 3 ");
				ImGui::PopStyleColor();
			}

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 6,174 });
			ImGui::Text("        " ICON_FA_CROSSHAIRS "T :");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::curraim == 0)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text("Aim : Head");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 0, 255));
				ImGui::Text("Aim : Body");
				ImGui::PopStyleColor();
			}
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::Text("     ----------------------------");
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(233, 207, 0, 255));
			ImGui::PopStyleColor();
			ImGui::Text("        " ICON_FA_DESKTOP " (%.1f FPS)", ImGui::GetIO().Framerate);
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(233, 207, 0, 255));
			ImGui::PopStyleColor();
			ImGui::Text(("       " ICON_FA_SIGN_OUT"END|Exit Hack|"));
			ImGui::PopStyleColor();
			ImGui::End();
		}
		ImGui::PopStyleColor();
		ImGui::PopStyleColor();
	}
	else
	{
		static auto Flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
		static auto Flags1 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
		ImGuiStyle& style = ImGui::GetStyle();
		style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
		ImGuiIO& Io = ImGui::GetIO();
		ImGui::PushStyleColor(ImGuiCol_WindowBg, to_vec4(0, 0, 0, 0));
		ImGui::PushStyleColor(ImGuiCol_Border, to_vec4(0, 0, 0, 0));
		ImGui::SetNextWindowPos({ 2, (DX11Window::Height / 2.0f) - 125 });
		ImGui::SetNextWindowSize({ 200.f,300.f });
		if (ImGui::Begin("||! PABLO !||", 0, Flags))
		{
			ImGui::SetCursorPos({ 0,0 });
			ImGui::Image((PVOID)ImageVip, ImVec2(170, 310));
			ImGui::SetCursorPos({ 0.f,80.0f });
			ImGui::SetNextWindowBgAlpha(0.60f);
			ImGui::Spacing();
			std::string hack = "        | Home - Hide |";
			std::string MoreOp = "       | Insert - Menu |";
			std::string Insert = "     | End - Exit Menu |";
			float dsheight = DX11Window::Height / 2;
			VECTOR3 screen;
			int distance;

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 0, 255));
			ImGui::PopStyleColor();

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
			ImGui::PopStyleColor();


			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,72 });
			ImGui::Text("   F2||");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::MagicBullet)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text(ICON_FA_MAGIC"Magic Bullet");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(ICON_FA_MAGIC"Magic Bullet");
				ImGui::PopStyleColor();
			}



			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,98 });
			ImGui::Text("   F3||");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::Aimbot)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text("Aimbot");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text("Aimbot");
				ImGui::PopStyleColor();
			}

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,122 });
			ImGui::Text("   F4||");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::Item)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text(ICON_FA_BOOK"Fight Mod");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text(ICON_FA_BOOK"Fight Mod");
				ImGui::PopStyleColor();
			}

			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::SetCursorPos({ 5,149 });
			ImGui::Text("   F5||");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::style1)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text("ESP Style 1");
				ImGui::PopStyleColor();
			}
			else
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
				ImGui::Text("ESP Style 3");
				ImGui::PopStyleColor();
			}


			ImGui::SetCursorPos({ 5,174 });
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::Text("                 " ICON_FA_CROSSHAIRS "   T : ");
			ImGui::PopStyleColor();
			ImGui::SameLine();

			if (Setting::curraim == 0)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(233, 207, 0, 255));
				ImGui::Text(" Head");
				ImGui::PopStyleColor();
			}
			else if (Setting::curraim == 1)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(233, 207, 0, 255));
				ImGui::Text(" Body");
				ImGui::PopStyleColor();
			}
			else if (Setting::curraim == 2)
			{
				ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(233, 207, 0, 255));
				ImGui::Text(" Pelvis");
				ImGui::PopStyleColor();
			}


			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 255, 255));
			ImGui::Text("   -----------------------");
			ImGui::Text("    | Home - Hide |");
			ImGui::Text("     Menu - Press Insert");
			ImGui::Text("     Exit Hak - Press End");

			ImGui::PopStyleColor();
			ImGui::SameLine();
			ImGui::End();
		}
		ImGui::PopStyleColor();
		ImGui::PopStyleColor();
	}
}

void WriteUE4Float2(DWORD offset, float replace)
{
	DWORD pidd = Game::Id;
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
	DWORD libUE4Base = Utility::ReadMemoryEx<UINT>(0xE0C36E8);
	DWORD oldprotect;
	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_EXECUTE_READWRITE, &oldprotect);
	WriteProcessMemory(hProcess, (LPVOID)(libUE4Base + offset), &replace, sizeof(float), NULL);
	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_READONLY, &oldprotect);
}

VOID Esp::EspThread()
{
	VECTOR3 Screen;
	INT Distance;
	INT EnemyCount;

	VECTOR3 HeadPos;
	VECTOR2 Head;
	VECTOR2 Chest;
	VECTOR2 Pelvis;
	VECTOR2 lSholder;
	VECTOR2 rSholder;
	VECTOR2 lElbow;
	VECTOR2 rElbow;
	VECTOR2 lWrist;
	VECTOR2 rWrist;
	VECTOR2 lThigh;
	VECTOR2 rThigh;
	VECTOR2 lKnee;
	VECTOR2 rKnee;
	VECTOR2 lAnkle;
	VECTOR2 rAnkle;
	std::string temp = "";
	std::string dist = "";
	string Text = "";
	string weapon = "";
	DWORD window_flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;

	////KeyAuth
	//std::string name = XorStr("JIMMY&Zocey HAK 001"); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
	//std::string ownerid = XorStr("ZZRaut3vJV"); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
	//std::string secret = XorStr("00c2e0f37015a4a62430904cf425a7238c99d0565640e34c75945062fe652b18"); // app secret, the blurred text on licenses tab and other tabs
	//std::string version = XorStr("1.0"); // leave alone unless you've changed version on website

	//api KeyAuthApp(name, ownerid, secret, version);
	//KeyAuthApp.init();

	ImageLoad();

	//////Chiper Login...
	//c_auth::api auth_instance(XorStr("SHBD TEST001"), XorStr("1.0)"), XorStr("ro6fdv8b59ts1fuh24plm06ah4e2ijbk"), XorStr("190657"));
	//auth_instance.init();

	//drvcheck();
	RECT screen_rect;
	GetWindowRect(GetDesktopWindow(), &screen_rect);
	//	auto x = float(screen_rect.right - 400) / 2.f;
	//	auto y = float(screen_rect.bottom - 300) / 2.f;

	LoadConfig("‪C:PABLOKey.ini"); //‪C:\KeyLoad.ini
	while (true)
	{
		//	Sleep(50);

		DX11::BeginDraw();
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		/*if (GetAsyncKeyState(Setting::EnableKey) & 1)
		{
			Setting::Aimbot = !Setting::Aimbot;
		}
		if (GetAsyncKeyState(Setting::PositionKey) & 1)
		{
			if (Setting::curraim == 0)
			{

				Setting::curraim++;
			}
			else
			{

				Setting::curraim--;
			}


		}*/


		int my_image_width = 0;
		int my_image_height = 0;


		ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 0.300f);
		const float clear_color_with_alpha[4] = { clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w };

		if (Setting::ShowMenu)
		{
			//DX11::pImmediateContext->ClearRenderTargetView(DX11::pRenderTargetView, clear_color_with_alpha);
			LoadConfig("C:\\Windows\\PABLOKey.ini");
			if (!login)
			{
				ImGuiIO& Io = ImGui::GetIO();

				ImGui::SetNextWindowSize(ImVec2(370.0f, 155.0f));


				ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
				if (ImGui::Begin("|!! PABLO !!|", 0, Flags2))
				{
					//ImGui::SetCursorPosX({ 140.f });
					//ImGui::Text("* * * TYPE KEY * * *");
					//ImGui::Text("Type Your License Key");
					/*ImGui::Spacing();
					ImGui::Spacing();*/
					//ImGui::Spacing();
					//ImGui::SetNextItemWidth(380.0f);
					//ImGui::SetCursorPosX({ 7.0f });
					//ImGui::SetCursorPosX({20.0f });
					ImGui::SetCursorPos({ 45,32 });

					//ImGui::Text("Type Key :");
					ImGui::Text("KEY :");
					//ImGui::SameLine();
					//ImGui::SetCursorPosX({60.0f });
					ImGui::SetCursorPos({ 80,30 });
					ImGui::InputText("###Key", str1, IM_ARRAYSIZE(str1));
					ImGui::Spacing();
					//ImGui::Spacing();
					/*ImGui::Spacing();*/


					////Login Page Bypass...................................................................................................
					//login = true;

					//Login Page............................................................................................................
					ImGui::SetCursorPosX({ 35.0f });
					//if (ImGui::Button(ICON_FA_SIGN_IN "  Login Vip ", { 160.0f,25.0f }))
					if (ImGui::Button(ICON_FA_SIGN_IN "  LOGIN... ", { 300.0f,25.0f }))
					{
						std::string name = XorStr("omar"); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
						std::string ownerid = XorStr("trUH4Xyg7e"); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
						std::string secret = XorStr("febce1c0448e532967e31f60a0679c2ffbe3c163e6399f987586cdbd15a1d20d"); // app secret, the blurred text on licenses tab and other tabs
						std::string version = XorStr("1.4"); // leave alone unless you've changed version on websitestd::string key;

						api KeyAuthApp(name, ownerid, secret, version);
						KeyAuthApp.init();

						//////Chiper Login...
						//c_auth::api auth_instance(XorStr("JIMMY&Zocey TEST001"), XorStr("1.0)"), XorStr("ro6fdv8b59ts1fuh24plm06ah4e2ijbk"), XorStr("190657"));
						//auth_instance.init();

						//if (auth_instance.licenselogin(str1))
						if (KeyAuthApp.license(str1))
						{

							login = true;
							Setting::viplogin = !Setting::viplogin; /*Setting::freelogin = !Setting::freelogin;*/
							Setting::dots = !Setting::dots;
							Setting::graned = !Setting::graned;
							Setting::deadbox = !Setting::deadbox;
							Setting::TotalEnemy = !Setting::TotalEnemy;
						}
					}
					ImGui::Spacing();

					ImGui::SetCursorPosX({ 22.f });
					if (ImGui::Button(ICON_FA_KEY "   BUY KEY ", { 160.0f,25.0f }))
					{
						ShellExecute(NULL, L"open", L"https://discord.gg/45ZPkyVMxx", NULL, NULL, SW_SHOWNORMAL);
					}
					ImGui::SameLine();
					if (ImGui::Button(ICON_FA_KEY "  GETKEY ", { 160.0f,25.0f }))
					{
						ShellExecute(NULL, L"open", L"https://discord.gg/45ZPkyVMxx", NULL, NULL, SW_SHOWNORMAL);
					}



					//ImGui::SetCursorPosX({ 75.0f });
					//ImGui::Checkbox("Safe Mode", &Setting::viplogin);
					////ImGui::Checkbox("Safe Version", &Setting::fackSetting1); j

					//ImGui::SameLine();
					////ImGui::SetCursorPosX({ 120.f });j
					//ImGui::Checkbox("Danger Mode", &Setting::fackSetting2);



					//////////ImGui::SetCursorPosX({ 80.0f });
					//////////if (ImGui::Button(ICON_FA_SIGN_IN "  Login Free ", { 160.0f,25.0f }))
					////////////if (ImGui::Button(ICON_FA_KEY "  GETKEY ", { 160.0f,25.0f }))
					//////////{
					//////////	std::string name = XorStr("JIMMY&Zocey HACK FREE 001"); // App Name
					//////////	std::string ownerid = XorStr("wOSZhyvUp7"); // App ownerid, id
					//////////	std::string secret = XorStr("903e6da67ed103bd9f3add387e093190bf4d5612c728f80f36a6edfc5c01012f"); // App secret, id
					//////////	std::string version = XorStr("1.4"); // App version

					//////////	api KeyAuthApp(name, ownerid, secret, version);
					//////////	KeyAuthApp.init();

					//////////	//////Chiper Login...
					//////////	//c_auth::api auth_instance(XorStr("JIMMY&Zocey TEST001"), XorStr("1.0)"), XorStr("ro6fdv8b59ts1fuh24plm06ah4e2ijbk"), XorStr("190657"));
					//////////	//auth_instance.init();

					//////////	//if (auth_instance.licenselogin(str1))
					//////////	if (KeyAuthApp.license(str1))
					//////////	{

					//////////		login = true;
					//////////		Setting::freelogin = !Setting::freelogin; /*Setting::viplogin = !Setting::viplogin;*/
					//////////	}
					//////////}


					/*ImGui::SameLine();
					ImGui::SetCursorPosX({ 50.f });*/

					////keyauth Login...
					//if (ImGui::Button(ICON_FA_SIGN_IN "   Login ", { 130.0f,25.0f }))
					//{
					//	if (KeyAuthApp.license(str1))
					//		//if (str1 == "")
					//	{
					//		login = true;
					//		//MessageBox(NULL, L"Login Success Thank You!", L"JIMMY&ZoceyVIP HACK (Created : SHBD-SOJIB)", MB_OKCANCEL);
					// 
					//	}
					//	else
					//	{
					//		exit(1);
					//		login = false;
					//	}
					//}

					//if (ImGui::Button(ICON_FA_SIGN_IN "   Login ", { 130.0f,25.0f }))
					//{
					//		//MessageBox(NULL, L"Login Success Thank You!", L"JIMMY&Zocey VIP HACK (Created : SHBD-SOJIB)", MB_OKCANCEL);
					//		login = true;
					//}

					/*ImGui::SameLine();
					ImGui::SetCursorPosX({ 220.f });
					if (ImGui::Button(ICON_FA_KEY "   Buy Key ", { 130.0f,25.0f }))
					{
						ShellExecute(NULL, L"open", L"https://discord.gg/45ZPkyVMxx", NULL, NULL, SW_SHOWNORMAL);
					}
					ImGui::SetCursorPosX({ 200.f });*/

					if (SaveUsers)
					{
						WriteConfig("C:\\Windows\\PABLOKey.ini", str1, true);
					}
					else
					{
						WriteConfig("C:\\Windows\\PABLOKey.ini", str1, false);
					}
					ImGui::End();
				}

			}

			if (login)
			{

				static auto Name = "Menu";
				static auto Flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
				static auto Flags1 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;

				ImGui::SetNextWindowSize({ 520, 390 }); //Window Size
				static ImVec4 active = to_vec4(0, 200, 300, 260);
				static ImVec4 inactive = to_vec4(0, 100, 300, 260);

				if (ImGui::Begin("||!!  PABLO  !!||", 0, Flags1))
				{
					ImGui::SetCursorPos({ 0.0f,25.0f });
					ImGui::Image((PVOID)Image, ImVec2(600, 60));



					if (Setting::viplogin)
					{

						if (ImGui::CollapsingHeader(ICON_FA_HOME" Home"))
						{
							ImGui::Indent();

							ImGui::Spacing();
							ImGui::Text("[+]  Thanks For Using This VIP Tool");
							ImGui::Text("[+]  This VIP Tool Is Made By (JIMMY&Zocey)");
							/*ImGui::SameLine();*/
							ImGui::Spacing();
							ImGui::Text("_________________________________________________________________________");
							ImGui::Text("[+]  Discord User Name:OMAR");
							ImGui::Text("[+]  Discord Server Link: https://discord.gg/45ZPkyVMxx");
							ImGui::Text("_________________________________________________________________________");
							ImGui::Spacing();
							ImGui::Text("[+]                       ((-- Pray five times --))");
							ImGui::Text("[+]  ((-- Pray yourself and encourage others to pray --))");
							ImGui::Text("[+]  ((-- Pray yourself and encourage others to pray --))");
							ImGui::Text("[+]  ((-- Pray yourself and encourage others to pray --))");
							ImGui::Text("[+]  ((-- Pray yourself and encourage others to pray --))");
							ImGui::Text("[+]  ((-- Pray yourself and encourage others to pray --))");
							ImGui::Text("[+]                       ((-- Pray five times --))");
							ImGui::Spacing();
							ImGui::Text("_________________________________________________________________________");
							ImGui::Spacing();
							ImGui::Spacing();
							ImGui::Unindent();
						}
						if (ImGui::CollapsingHeader(ICON_FA_EYE" ESP Style"))
						{
							ImGui::Indent();

							ImGui::Checkbox(" ESP Style 1", &Setting::style1);
							ImGui::Spacing();
							ImGui::Checkbox(" ESP Style 2", &Setting::style2);
							ImGui::Spacing();
							ImGui::Checkbox(" ESP Style 3", &Setting::style3);
							ImGui::Spacing();
							ImGui::Checkbox(" ESP Style 4, Coming Soon", &Setting::fackMoreOption);
							ImGui::Spacing();
							ImGui::Checkbox(" ESP Style 5, Coming Soon", &Setting::fackMoreOption);
							ImGui::Spacing();
							ImGui::Spacing();
							ImGui::Text("__________________________________________________________");
							ImGui::Unindent();
						}
						if (ImGui::CollapsingHeader(ICON_FA_EYE" ESP PLAYER"))
						{

							ImGui::Checkbox("  Player Line", &Setting::pline);
							ImGui::ColorEdit4("Player Line", (float*)&Colors::playerline, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
							ImGui::Spacing();
							ImGui::Checkbox("  Player Skeleton", &Setting::playerBone);
							ImGui::ColorEdit4(" Skeleton", (float*)&Colors::playerbone, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
							ImGui::Spacing();
							ImGui::Checkbox("  Box Around", &Setting::pcorner);
							ImGui::ColorEdit4(" Box Around", (float*)&Colors::playercorner, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
							ImGui::Spacing();
							ImGui::Checkbox(" Health Bar", &Setting::phealth);
							ImGui::ColorEdit4("Health Bar", (float*)&Colors::playerhealth, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
							ImGui::Spacing();
							ImGui::Checkbox(" Name ", &Setting::pname);
							ImGui::ColorEdit4("Name", (float*)&Colors::nam, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
							ImGui::Spacing();
							ImGui::Checkbox(" Team Id", &Setting::TeamId);
							ImGui::Checkbox(" Player Weapon", &Setting::playerweapon);
							ImGui::Checkbox(" Total Number", &Setting::TotalEnemy);
							ImGui::Checkbox(" Deadbox Items", &Setting::deadbox);
							ImGui::Checkbox(" Weapon & Distance", &Setting::Distancee);
							ImGui::Text("        ________________________________________");


							ImGui::Text(">> More Option Coming Soon <<");
							ImGui::Spacing();
							ImGui::Text("__________________________________________________________");
							ImGui::Unindent();
						}
						if (ImGui::CollapsingHeader(ICON_FA_EYE" Items Wepens"))
						{
							ImGui::Checkbox(" All Items", &Setting::Item);
							ImGui::Checkbox(" Vehicle Around", &Setting::Vehicle);
							ImGui::Checkbox(" Grenade Warning", &Setting::graned);
							ImGui::Checkbox(" Radar Around", &Setting::dots);


							ImGui::Text("__________________Wepens Fier___________________________________");
							ImGui::Indent();
							ImGui::Checkbox("M416", &Setting::Esp_Item_M416);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("M416", (float*)&weapon::m16, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("AKM", &Setting::Esp_Item_AKM);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("AKM", (float*)&weapon::AKM, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("SCAR-L", &Setting::Esp_Item_SCARL);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("SCAR-L", (float*)&weapon::scarl, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("M762", &Setting::Esp_Item_M762);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("M762", Setting::Esp_Item_M762_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("DP28", &Setting::Esp_Item_DP28);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("DP28", Setting::Esp_Item_DP28_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("AWM", &Setting::Esp_Item_Awm);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("AMW", (float*)&weapon::AWM, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("M24", &Setting::Esp_Item_M24);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("M24", (float*)&weapon::M24, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("KAR98", &Setting::Esp_Item_Kar98k);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("kar98", (float*)&weapon::kar98, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Flare Gun", &Setting::Esp_Item_FlareGun);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Flare", (float*)&weapon::Flaregun, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("G36C", &Setting::Esp_Item_G36C);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("G36C", (float*)&Setting::Esp_Item_G36C_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("QBZ", &Setting::Esp_Item_QBZ);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("QBZ", (float*)&Setting::Esp_Item_QBZ_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("QBU", &Setting::Esp_Item_QBU);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("QBU", (float*)&Setting::Esp_Item_QBU_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("SLR", &Setting::Esp_Item_SLR);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("SLR", (float*)&Setting::Esp_Item_SLR_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("SKS", &Setting::Esp_Item_SKS);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("SKS", (float*)&Setting::Esp_Item_SKS_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Mini14", &Setting::Esp_Item_Mini14);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Mini14", (float*)&Setting::Esp_Item_Mini14_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("PP19", &Setting::Esp_Item_PP19);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("PP19", (float*)&Setting::Esp_Item_PP19_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Tommy Gun", &Setting::Esp_Item_TommyGun);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Tommy", (float*)&Setting::Esp_Item_TommyGun_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("MP5K", &Setting::Esp_Item_MP5K);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("MP5K", (float*)&Setting::Esp_Item_MP5K_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("UMP9", &Setting::Esp_Item_UMP9);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("UMP9", (float*)&Setting::Esp_Item_UMP9_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Vector", &Setting::Esp_Item_Vector);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Vector", (float*)&Setting::Esp_Item_Vector_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Uzi", &Setting::Esp_Item_Uzi);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Uzi", (float*)&Setting::Esp_Item_Uzi_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Mk47-Mutant", &Setting::Esp_Item_Mk47Mutant);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Mk47-Mutant", (float*)&Setting::Esp_Item_Mk47Mutant_Color, ImGuiColorEditFlags_NoLabel);

	    	                ImGui::Text("______________________Grenade__________________________________________");
							ImGui::Checkbox("Grenade", &Setting::Esp_Item_Grenade);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Grenade", Setting::Esp_Item_Grenade_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Smoke", &Setting::Esp_Item_Smoke);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Smoke", Setting::Esp_Item_Smoke_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Molotof", &Setting::Esp_Item_Molotof);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Molotof", Setting::Esp_Item_Molotof_Color, ImGuiColorEditFlags_NoLabel);
		                	ImGui::Text("___________________________Health____________________________________________");

			                ImGui::Checkbox("Med Kit", &Setting::Esp_Item_MedKit);
			                ImGui::SameLine();
			                ImGui::SetCursorPosX({ 115 });
			                ImGui::ColorEdit4("Med Kit", Setting::Esp_Item_MedKit_Color, ImGuiColorEditFlags_NoLabel);
			                ImGui::Checkbox("First Aid Kit", &Setting::Esp_Item_FirstAidKit);
			                ImGui::SameLine();
			                ImGui::SetCursorPosX({ 115 });
			                ImGui::ColorEdit4("First Aid Kit", Setting::Esp_Item_FirstAidKit_Color, ImGuiColorEditFlags_NoLabel);
			                ImGui::Checkbox("Painkiller", &Setting::Esp_Item_Painkiller);
			                ImGui::SameLine();
			                ImGui::SetCursorPosX({ 115 });
			                ImGui::ColorEdit4("Painkiller", Setting::Esp_Item_Painkiller_Color, ImGuiColorEditFlags_NoLabel);
			                ImGui::Checkbox("Energy Drink", &Setting::Esp_Item_EnergyDrink);
			                ImGui::SameLine();
			                ImGui::SetCursorPosX({ 115 });
			                ImGui::ColorEdit4("Energy Drink", Setting::Esp_Item_EnergyDrink_Color, ImGuiColorEditFlags_NoLabel);
			                ImGui::Checkbox("Adrenaline Syringe", &Setting::Esp_Item_AdrenalineSyringe);
			                ImGui::SameLine();
			                ImGui::SetCursorPosX({ 115 });
			                ImGui::ColorEdit4("Adrenaline Syringe", Setting::Esp_Item_AdrenalineSyringe_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Text("______________________Bagpack__________________________________________________");


							ImGui::Checkbox("Bag 1", &Setting::Esp_Item_Bag1);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Bag 1", Setting::Esp_Item_Bag1_Color, ImGuiColorEditFlags_NoLabel);

							ImGui::Checkbox("Bag 2", &Setting::Esp_Item_Bag2);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Bag 2", Setting::Esp_Item_Bag2_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Bag 3", &Setting::Esp_Item_Bag3);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Bag 3", Setting::Esp_Item_Bag3_Color, ImGuiColorEditFlags_NoLabel);

							ImGui::Text("______________________Helmate__________________________________________________");
			             
							ImGui::Checkbox("Helmet 1", &Setting::Esp_Item_Helmet1);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Helmet 1", Setting::Esp_Item_Helmet1_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Helmet 2", &Setting::Esp_Item_Helmet2);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Helmet 2", Setting::Esp_Item_Helmet2_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Checkbox("Helmet 3", &Setting::Esp_Item_Helmet3);
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 115 });
							ImGui::ColorEdit4("Helmet 3", Setting::Esp_Item_Helmet3_Color, ImGuiColorEditFlags_NoLabel);
							ImGui::Spacing();
							ImGui::SetCursorPosX({ 170 });

							ImGui::Spacing();
							ImGui::Spacing();
							ImGui::Text("____________________________________________________________________________________");
							ImGui::Unindent();
						}
						if (ImGui::CollapsingHeader(ICON_FA_CROSSHAIRS"Aimbot"))
						{
							ImGui::Indent();
							ImGui::Checkbox("Aimbot", &Setting::Aimbot);
							if (Setting::Aimbot)
							{
								ImGui::Text("Aimbot Key");
								ImGui::SameLine();
								ImGui::Hotkey("##AimbotKey ", &Setting::AimbotKey, ImVec2(155.0f, 24));
								ImGui::Text("Aim FOV");
								ImGui::SameLine();
								ImGui::SliderFloat("###7", &Setting::fovcircleredus, 1.0f, 500.0f);
								ImGui::Text("Aim speed");
								ImGui::SameLine();
								ImGui::SliderFloat("###fovFOVspeed", &Setting::Aimspeed, 0.0f, 15.0f);
								ImGui::Checkbox("Show FOV circle", &Setting::fovcircle);
								ImGui::Checkbox("Aim knocked Enemy", &Setting::knocked);
								ImGui::Checkbox("Draw current aiming enemy's line", &Setting::MAgicline);
							}

							ImGui::Checkbox("Slient Tracking Aim", &Setting::engine);
							if (Setting::engine)
							{
								ImGui::Text("Pickup a Gun to active Bullet Tracking, no need to fire, press (P) to fix if not work");
								ImGui::Checkbox("Auto repair Slient Tracking Aim when detect game change.", &nothingm);
								ImGui::Checkbox("Enable Aimbot Also", &nothinga);
								ImGui::SameLine();
								ImGui::Checkbox("Enable Magic Bullet Tracking (UNSAFE)", &Setting::MagicBullet);
							}
							ImGui::Spacing();
							ImGui::Spacing();
							ImGui::Text("__________________________________________________________");
							ImGui::Unindent();
						}
						if (ImGui::CollapsingHeader(ICON_FA_CROSSHAIRS" Safe "))
						{
							ImGui::Checkbox(" Magic Bullet Tracking", &Setting::MagicBullet);
							{

								if (Setting::MagicBullet)
								{
									if (ImGui::TreeNodeEx(" Magic Options"))
									{
										ImGui::Indent();
										//ImGui::Text("Magic Bullet Value"); 


										ImGui::Checkbox(" Skip Bot ", &Setting::SkipBots);
										ImGui::Spacing();
										ImGui::Checkbox("Aim knocked Enemy", &Setting::knocked);
										ImGui::Spacing();
										ImGui::Checkbox(" Fov Based Tracking ", &Setting::fovcircle);
										ImGui::Spacing();
										ImGui::Checkbox(" Legitrack ", &Setting::Legitrack);
										{
											if (Setting::fovcircle)
											{
												ImGui::SliderFloat("###fovFOVsize", &Setting::fovcircleredus, 1.0f, 2000.0f);  			ImGui::SameLine(); 			ImGui::Text("Fov Size");
											}
										}
										ImGui::Unindent();
										ImGui::TreePop();
									}

									ImGui::Spacing();
									ImGui::Checkbox(" Magicline", &Setting::MAgicline);
									ImGui::Spacing();



								}
							}

							ImGui::Spacing();

							ImGui::Checkbox(" iPAD View", &Setting::ipadview);
							{
								if (Setting::ipadview)
								{
									if (ImGui::TreeNodeEx("iPAD View Value"))
									{
										ImGui::Indent();
										ImGui::Text("iPAD View Value");
										ImGui::SameLine();
										ImGui::SliderInt("####iPad View", &Setting::IPADSIZE, 360.f, 220.f);
										
										ImGui::Unindent();
										ImGui::TreePop();
									}
								}
							}

							ImGui::Spacing();

							ImGui::Checkbox("  X Effect ", &Setting::MagicX);

							ImGui::Checkbox(" Antiscreen for Live Stream", &Setting::antiscreen);
							ImGui::Spacing();



							ImGui::Spacing();
							ImGui::Spacing();
							ImGui::Text("__________________________________________________________");
							ImGui::Unindent();
						}
						if (ImGui::CollapsingHeader(ICON_FA_BAN"Dangerous"))
						{
							ImGui::Indent();
							ImGui::Checkbox(" Fast Run ", &Setting::fackSetting2);
							ImGui::Checkbox(" Fast Run v2 ", &Setting::fastrun);
							ImGui::Checkbox(" Magic Hit ", &Setting::fackSetting5);
							ImGui::Checkbox(" Fast parachute ", &Setting::fackSetting6);
							ImGui::Checkbox(" Fast car ", &Setting::fackSetting7);
							ImGui::Checkbox(" Fly car ", &Setting::fackSetting8);
							ImGui::Checkbox(" Fly Man ", &Setting::fackSetting9);
							ImGui::Spacing();

							ImGui::Checkbox(" Instant Hit", &Setting::instanthit);
							if (Setting::instanthit)
							{
								ImGui::Text("Instant Hit Value");
								ImGui::SameLine();

								ImGui::SliderInt("####5", &Setting::instantv, 1.0f, 100.0f);
								//ImGui::SliderInt("####5", &Setting::instantv, 1.0f, 1000000.0f);
							}
							ImGui::Spacing();

							ImGui::Checkbox(" No Recoil", &Setting::recoil);
							if (Setting::recoil)
							{
								ImGui::Text("No Recoil Activated");
								ImGui::Text("If you want to turn off Drop the pistol you're holding and pick it up again");
							}
							ImGui::Spacing();


							if (Setting::fastrun)
							{
								if (ImGui::TreeNodeEx("Fast Run"))
								{
									ImGui::Indent();
									ImGui::Text("Fast Run Value");
									ImGui::SameLine();

									ImGui::SliderInt("####2", &Setting::fastrv, 1.0f, 20.0f);
									ImGui::Spacing();
									ImGui::Spacing();
									ImGui::Spacing();
									ImGui::Text("__________________________________________________________________________");
									ImGui::Text("[?]  Fast run key (Keyboard SHIFT Button, With W + S + A + D)");


									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							ImGui::Spacing();

							ImGui::Checkbox(" Fast Car", &Setting::speedcar);
							if (Setting::speedcar)
							{
								ImGui::Text("Fast Car Value");
								ImGui::SameLine();

								ImGui::SliderInt("####3", &Setting::carsv, 1.0f, 600.0f);
							}
							ImGui::Spacing();

							ImGui::Checkbox(" God View All", &Setting::GodView);
							if (Setting::GodView)
							{
								//ImGui::Indent();

								ImGui::Text("GodView Front Key");
								ImGui::SameLine();
								ImGui::Hotkey("##GodView Front ", &Setting::GodFront, ImVec2(180.0f, 24));

								ImGui::Text("GodView Up Key");
								ImGui::SameLine();
								ImGui::Hotkey("##GodView UP ", &Setting::GodUp, ImVec2(180.0f, 24));


								ImGui::Text("GodView Down Key");
								ImGui::SameLine();
								ImGui::Hotkey("##GodView Down ", &Setting::GodDown, ImVec2(180.0f, 24));

								ImGui::Text("GodView Left Key");
								ImGui::SameLine();
								ImGui::Hotkey("##GodView Left ", &Setting::GodLeft, ImVec2(180.0f, 24));

								ImGui::Text("GodView Right Key");
								ImGui::SameLine();
								ImGui::Hotkey("##GodView Right ", &Setting::GodRight, ImVec2(180.0f, 24));

								ImGui::Spacing();
								ImGui::Text("__________________________________________________________");
								ImGui::Text("[?]  If possible, do not change the button set here");
								ImGui::Text("[?]  But you can change it if you want");
								ImGui::SameLine();
							}
							ImGui::Spacing();
							ImGui::Text(">> More Option Coming Soon <<");
							ImGui::Spacing();
							ImGui::Spacing();
							ImGui::Text("__________________________________________________________");
							ImGui::Unindent();
						}

					}



					ImGui::End();
				}
				//Main Menu Hide By oomar//================================================================================================
				//if (ImGui::Begin("|||  PABLO HACK  |  Safe Version  |||", 0, Flags1))
				//if (ImGui::Begin("||!!  PABLO  !!||", 0, Flags1))
				////if (ImGui::Begin("|||  PABLO HACK  |  Danger Version  |||", 0, Flags1))
				//{
				//	//drvcheck();
				//	ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 1 ? active : inactive);
				//	/*if (ImGui::Button(ICON_FA_HOME" HomePage", ImVec2(148 - 6, 23)))
				//		Settings::Tab = 1;*/

				//	ImGui::SameLine();
				//	ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? active : inactive);
				//	if (ImGui::Button(ICON_FA_EYE" ESP Style", ImVec2(148 - 6, 23)))
				//		Settings::Tab = 6;

				//	ImGui::SameLine();
				//	ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 3 ? active : inactive);
				//	/*if (ImGui::Button(ICON_FA_CROSSHAIRS" Aimbot", ImVec2(148 - 6, 23)))
				//		Settings::Tab = 3;*/

				//	ImGui::SameLine();
				//	ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 6 ? active : inactive);
				//	if (ImGui::Button(ICON_FA_EYE" ESP + Items", ImVec2(148 - 6, 23)))
				//		Settings::Tab = 2;

				//	ImGui::SameLine();
				//	ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 4 ? active : inactive);
				//	if (ImGui::Button(ICON_FA_EDIT" Memory", ImVec2(148 - 6, 23)))
				//		Settings::Tab = 4;

				//	ImGui::SameLine();
				//	ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 5 ? active : inactive);
				//	/*if (ImGui::Button(ICON_FA_COG" Settings", ImVec2(148 - 6, 23)))
				//		Settings::Tab = 5;*/

				//		//Code End_______________
				//	ImGui::PopStyleColor(6);
				//	ImGui::Separator();

				//	{
				//		if (Settings::Tab == 1)
				//		{
				//			//ImGui::SetCursorPos(ImVec2(10, 10));
				//			ImGui::BeginChild("##1", ImVec2(793, 535), true, 0);
				//			{
				//				ImGui::Spacing();
				//				ImGui::Text("[?]  Thanks For Using This Tool");
				//				ImGui::Spacing();
				//				ImGui::Text("[?]  This Tool Is Made By (JIMMY&Zocey)");
				//				/*ImGui::SameLine();*/
				//				ImGui::Spacing();
				//				ImGui::Text("-----------------------------------------------------------------------");
				//				ImGui::Text("[?]  Discord User Name: JIMMY&Zocey");
				//				ImGui::Text("[?]  Discord Server Link: https://discord.gg/45ZPkyVMxx");
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Text("[?]                       ((-- Pray five times --))");
				//				ImGui::Text("[?]  ((-- Pray yourself and encourage others to pray --))");
				//				ImGui::Text("[?]  ((-- Pray yourself and encourage others to pray --))");
				//				ImGui::Text("[?]  ((-- Pray yourself and encourage others to pray --))");
				//				ImGui::Text("[?]  ((-- Pray yourself and encourage others to pray --))");
				//				ImGui::Text("[?]  ((-- Pray yourself and encourage others to pray --))");
				//				ImGui::Text("[?]                       ((-- Pray five times --))");
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Spacing();
				//				ImGui::Text("[?]  Contact me if anyone wants to make any tools in their own name");
				//				ImGui::Text("[?]  Such as Hack + Bypass + Antiban or any tools");


				//			}
				//			ImGui::EndChild();
				//		}

				//		if (Settings::Tab == 2)
				//		{
				//			//ImGui::SetCursorPos(ImVec2(10, 10));
				//			ImGui::BeginChild("##2", ImVec2(793, 535), true, 0);
				//			{

				//				ImGui::SetCursorPos(ImVec2(5, 5));
				//				ImGui::BeginChild("###1", ImVec2(230, 520), true, 0);
				//				{
				//					ImGui::Checkbox(" Show Player Line", &Setting::pline);
				//					ImGui::Checkbox(" Show Player Skeleton", &Setting::playerBone);
				//					ImGui::Checkbox(" Show Player Box Around", &Setting::pcorner);
				//					ImGui::Checkbox(" Show Player Health Bar", &Setting::phealth);
				//					ImGui::Checkbox(" Show Player Name & Team ID", &Setting::pname);
				//					//ImGui::Checkbox(" Show Player Team Id", &Setting::TeamId);
				//					//ImGui::Checkbox(" Show Player Weapon", &Setting::playerweapon);
				//					ImGui::Checkbox(" Show Players Total Number", &Setting::TotalEnemy);
				//					ImGui::Checkbox(" Show Player Deadbox Items", &Setting::deadbox);
				//					ImGui::Checkbox(" Show Player Weapon & Distance", &Setting::Distancee);
				//					ImGui::Text("        ________________________________________");
				//					ImGui::Checkbox(" Show All Items", &Setting::Item);
				//					ImGui::Checkbox(" Show Vehicle Around", &Setting::Vehicle);
				//					ImGui::Checkbox(" Show Grenade Warning", &Setting::graned);
				//					ImGui::Checkbox(" Show Radar Around", &Setting::dots);
				//					//ImGui::Checkbox(" Player ESP Style 4, Coming Soon", &Setting::fackMoreOption);
				//					//ImGui::Checkbox(" Player ESP Style 5, Coming Soon", &Setting::fackMoreOption);
				//					ImGui::Spacing();
				//					ImGui::Text(">> More Option Coming Soon <<");

				//				}
				//				ImGui::EndChild();

				//				ImGui::SetCursorPos(ImVec2(238, 5));
				//				ImGui::BeginChild("###2", ImVec2(548, 520), true, 0);
				//				{
				//					if (ImGui::BeginTabBar("PABLO HACK")) {
				//						if (ImGui::BeginTabItem("Player settings")) {
				//							ImGui::BeginChild("###");
				//							//ImGui::SetCursorPos(ImVec2(0, 5));
				//							ImGui::BeginChild("###12", ImVec2(540, 468), true, 0);
				//							{
				//								if (ImGui::BeginTabBar("PABLO HACK INER")) {
				//									if (Setting::pname)
				//									{
				//										if (ImGui::BeginTabItem("Name")) {
				//											ImGui::Spacing();
				//											ImGui::Text("Text color ");
				//											ImGui::SameLine();
				//											ImGui::ColorEdit4("Text color", (float*)&Colors::nam, ImGuiColorEditFlags_NoLabel);

				//											ImGui::Text("Text size ");
				//											ImGui::SameLine();
				//											ImGui::SliderInt("###4", &nsize, 0, 50);

				//											ImGui::EndTabItem();
				//										}
				//									}
				//									ImGui::SameLine();
				//									if (Setting::playerBone)
				//									{
				//										if (ImGui::BeginTabItem("Skeleton")) {

				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();

				//											ImGui::Text("Color mode");
				//											ImGui::SameLine();
				//											const char* Emu[] = { "Team ID", "Default" };

				//											const char* combo_label = Emu[skelee];
				//											if (ImGui::BeginCombo(" lol", combo_label, ImGuiComboFlags_HeightSmall))
				//											{
				//												for (int n = 0; n < IM_ARRAYSIZE(Emu); n++)
				//												{
				//													const bool is_selected = (skelee == n);
				//													if (ImGui::Selectable(Emu[n], is_selected))
				//														skelee = n;
				//													if (is_selected)
				//														ImGui::SetItemDefaultFocus();
				//												}
				//												if (skelee == 0);
				//												//Setting::skele = true;
				//												else if (skelee == 1);
				//												//Setting::skele = false;


				//												ImGui::EndCombo();
				//											}
				//											if (skelee == 1)
				//											{
				//												ImGui::Text("Color ");
				//												ImGui::SameLine();
				//												ImGui::ColorEdit4(" color", (float*)&Colors::skelec, ImGuiColorEditFlags_NoLabel);
				//											}
				//											ImGui::Text("Thickness ");
				//											ImGui::SameLine();
				//											ImGui::SliderFloat("Bone size", &Setting::pbonesize, 0.100f, 3.00f);

				//											//ImGui::EndChild();
				//											ImGui::EndTabItem();
				//											//ImGui::EndChild();
				//										}
				//									}
				//									ImGui::SameLine();
				//									if (Setting::pline)
				//									{
				//										if (ImGui::BeginTabItem("Line")) {

				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();

				//											ImGui::Text("Color mode");
				//											ImGui::SameLine();
				//											const char* Emu1[] = { "Team ID", "Default" };

				//											const char* combo_label = Emu1[linne];
				//											if (ImGui::BeginCombo(" loll", combo_label, ImGuiComboFlags_HeightSmall))
				//											{
				//												for (int n = 0; n < IM_ARRAYSIZE(Emu1); n++)
				//												{
				//													const bool is_selected = (linne == n);
				//													if (ImGui::Selectable(Emu1[n], is_selected))
				//														linne = n;
				//													if (is_selected)
				//														ImGui::SetItemDefaultFocus();
				//												}
				//												if (linne == 0);
				//												//Setting::skele = true;
				//												else if (linne == 1);
				//												//Setting::skele = false;


				//												ImGui::EndCombo();
				//											}
				//											if (linne == 1)
				//											{
				//												ImGui::Text("Line color ");
				//												ImGui::SameLine();
				//												ImGui::ColorEdit4(" color1", (float*)&Colors::playerline, ImGuiColorEditFlags_NoLabel);
				//											}
				//											ImGui::Text("Thickness ");
				//											ImGui::SameLine();
				//											ImGui::SliderFloat("Line size", &Setting::plinesize, 0.100f, 3.00f);


				//											//ImGui::EndTabItem();


				//											ImGui::EndTabItem();
				//										}
				//									}
				//									ImGui::SameLine();
				//									if (Setting::Distancee)
				//									{
				//										if (ImGui::BeginTabItem("Distance")) {
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Text("Distance color ");
				//											ImGui::SameLine();
				//											ImGui::ColorEdit4(" color11", (float*)&Colors::enemy, ImGuiColorEditFlags_NoLabel);

				//											ImGui::Text("Thickness ");
				//											ImGui::SameLine();
				//											ImGui::SliderInt("Distance size", &dissize, 0, 25);

				//											ImGui::EndTabItem();
				//										}
				//									}
				//									ImGui::SameLine();
				//									if (Setting::phealth)
				//									{
				//										if (ImGui::BeginTabItem("Health")) {

				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();

				//											ImGui::Text("Display mode");
				//											ImGui::SameLine();
				//											const char* Emu2[] = { "Show as BAR", "Show as TEXT" };

				//											const char* combo_label = Emu2[hpbt];
				//											if (ImGui::BeginCombo(" loll1", combo_label, ImGuiComboFlags_HeightSmall))
				//											{
				//												for (int n = 0; n < IM_ARRAYSIZE(Emu2); n++)
				//												{
				//													const bool is_selected = (hpbt == n);
				//													if (ImGui::Selectable(Emu2[n], is_selected))
				//														hpbt = n;
				//													if (is_selected)
				//														ImGui::SetItemDefaultFocus();
				//												}
				//												if (hpbt == 0);
				//												//Setting::skele = true;
				//												else if (hpbt == 1);
				//												//Setting::skele = false;


				//												ImGui::EndCombo();
				//											}

				//											if (hpbt == 1)
				//											{
				//												ImGui::Text("Text color ");
				//												ImGui::SameLine();
				//												ImGui::ColorEdit4(" colorhp", (float*)&Colors::hpt, ImGuiColorEditFlags_NoLabel);

				//												ImGui::Text("Text size ");
				//												ImGui::SameLine();
				//												ImGui::SliderInt("Health size", &hp, 0, 25);
				//											}


				//											ImGui::EndTabItem();
				//										}
				//									}
				//									ImGui::SameLine();
				//									if (Setting::pcorner)
				//									{
				//										if (ImGui::BeginTabItem("Box")) {

				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();
				//											ImGui::Spacing();

				//											ImGui::Text("Display mode");
				//											ImGui::SameLine();
				//											const char* Emu3[] = { "4 edges", "Rectangle" };

				//											const char* combo_label = Emu3[boxe];
				//											if (ImGui::BeginCombo(" loll11", combo_label, ImGuiComboFlags_HeightSmall))
				//											{
				//												for (int n = 0; n < IM_ARRAYSIZE(Emu3); n++)
				//												{
				//													const bool is_selected = (boxe == n);
				//													if (ImGui::Selectable(Emu3[n], is_selected))
				//														boxe = n;
				//													if (is_selected)
				//														ImGui::SetItemDefaultFocus();
				//												}
				//												if (boxe == 0);
				//												//Setting::skele = true;
				//												else if (boxe == 1);
				//												//Setting::skele = false;


				//												ImGui::EndCombo();
				//											}
				//											if (boxe == 0)
				//											{
				//												ImGui::Text("Thickness ");
				//												ImGui::SameLine();
				//												ImGui::SliderFloat("###1", &Setting::pcornersize, 0.100f, 2.00f);
				//											}
				//											else if (boxe == 1)
				//											{
				//												ImGui::Text("Thickness ");
				//												ImGui::SameLine();
				//												ImGui::SliderFloat("###2", &Setting::pfullboxsize, 0.100f, 2.00f);
				//											}

				//											ImGui::EndTabItem();
				//										}
				//									}
				//									/*ImGui::SameLine();
				//									if (Setting::dots)
				//									{
				//										if (ImGui::BeginTabItem("Radar")) {


				//											ImGui::EndTabItem();
				//										}
				//									}*/

				//								}
				//								ImGui::EndTabBar();


				//							}
				//							ImGui::EndChild();

				//							ImGui::EndChild();
				//							ImGui::EndTabItem();
				//						}
				//						//ImGui::SameLine();
				//						if (Setting::graned)
				//						{
				//							if (ImGui::BeginTabItem("Grenade")) {

				//								/*ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();*/
				//								ImGui::Checkbox("Grenade warning", &Setting::grw);
				//								ImGui::Checkbox("Molotow warning", &Setting::molow);

				//								ImGui::EndTabItem();
				//							}
				//						}
				//						//ImGui::SameLine();
				//						if (Setting::Vehicle)
				//						{
				//							if (ImGui::BeginTabItem("Vehicle")) {

				//								/*ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();
				//								ImGui::Spacing();*/
				//								ImGui::Text("Text color ");
				//								ImGui::SameLine();
				//								ImGui::ColorEdit4(" vehiclec", (float*)&Colors::vehicle, ImGuiColorEditFlags_NoLabel);

				//								ImGui::Text("Text size ");
				//								//ImGui::SameLine();
				//								ImGui::Spacing();
				//								ImGui::SliderInt("vehicle size", &vehisize, 0, 25);


				//								ImGui::EndTabItem();
				//							}
				//						}

				//						//ImGui::SameLine();
				//						if (Setting::Item)
				//						{
				//							if (ImGui::BeginTabItem("Items")) {
				//								ImGui::BeginChild("###1");
				//								//ImGui::SetCursorPos(ImVec2(0, 5));
				//								//ImGui::BeginChild("###121", ImVec2(540, 468), true, 0);
				//								{
				//									if (ImGui::BeginTabBar("PABLO HACK INER1")) {

				//										if (ImGui::BeginTabItem("Weapon")) {
				//											ImGui::BeginChild("###1211", ImVec2(535, 450), true, 0);
				//											{

														//		ImGui::Checkbox("M416", &Setting::Esp_Item_M416);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("M416", (float*)&weapon::m16, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("AKM", &Setting::Esp_Item_AKM);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("AKM", (float*)&weapon::AKM, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("SCAR-L", &Setting::Esp_Item_SCARL);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("SCAR-L", (float*)&weapon::scarl, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("M762", &Setting::Esp_Item_M762);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("M762", Setting::Esp_Item_M762_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("DP28", &Setting::Esp_Item_DP28);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("DP28", Setting::Esp_Item_DP28_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("AWM", &Setting::Esp_Item_Awm);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("AMW", (float*)&weapon::AWM, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("M24", &Setting::Esp_Item_M24);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("M24", (float*)&weapon::M24, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("KAR98", &Setting::Esp_Item_Kar98k);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("kar98", (float*)&weapon::kar98, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("Flare Gun", &Setting::Esp_Item_FlareGun);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("Flare", (float*)&weapon::Flaregun, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("G36C", &Setting::Esp_Item_G36C);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("G36C", (float*)&Setting::Esp_Item_G36C_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("QBZ", &Setting::Esp_Item_QBZ);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("QBZ", (float*)&Setting::Esp_Item_QBZ_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("QBU", &Setting::Esp_Item_QBU);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("QBU", (float*)&Setting::Esp_Item_QBU_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("SLR", &Setting::Esp_Item_SLR);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("SLR", (float*)&Setting::Esp_Item_SLR_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("SKS", &Setting::Esp_Item_SKS);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("SKS", (float*)&Setting::Esp_Item_SKS_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("Mini14", &Setting::Esp_Item_Mini14);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("Mini14", (float*)&Setting::Esp_Item_Mini14_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("PP19", &Setting::Esp_Item_PP19);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("PP19", (float*)&Setting::Esp_Item_PP19_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("Tommy Gun", &Setting::Esp_Item_TommyGun);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("Tommy", (float*)&Setting::Esp_Item_TommyGun_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("MP5K", &Setting::Esp_Item_MP5K);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("MP5K", (float*)&Setting::Esp_Item_MP5K_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("UMP9", &Setting::Esp_Item_UMP9);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("UMP9", (float*)&Setting::Esp_Item_UMP9_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("Vector", &Setting::Esp_Item_Vector);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("Vector", (float*)&Setting::Esp_Item_Vector_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("Uzi", &Setting::Esp_Item_Uzi);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("Uzi", (float*)&Setting::Esp_Item_Uzi_Color, ImGuiColorEditFlags_NoLabel);
														//		ImGui::Checkbox("Mk47-Mutant", &Setting::Esp_Item_Mk47Mutant);
														//		ImGui::SameLine();
														//		ImGui::SetCursorPosX({ 115 });
														//		ImGui::ColorEdit4("Mk47-Mutant", (float*)&Setting::Esp_Item_Mk47Mutant_Color, ImGuiColorEditFlags_NoLabel);



														//	}//, ImGuiColorEditFlags_NoLabel);
														//	ImGui::EndChild();

														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();


														//if (ImGui::BeginTabItem("Grenade")) {

														//	ImGui::Checkbox("Grenade", &Setting::Esp_Item_Grenade);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Grenade", Setting::Esp_Item_Grenade_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Smoke", &Setting::Esp_Item_Smoke);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Smoke", Setting::Esp_Item_Smoke_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Molotof", &Setting::Esp_Item_Molotof);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Molotof", Setting::Esp_Item_Molotof_Color, ImGuiColorEditFlags_NoLabel);


														//	ImGui::EndTabItem();

														//}

														//ImGui::SameLine();


														//if (ImGui::BeginTabItem("Health")) {

														//	ImGui::Checkbox("Med Kit", &Setting::Esp_Item_MedKit);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Med Kit", Setting::Esp_Item_MedKit_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("First Aid Kit", &Setting::Esp_Item_FirstAidKit);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("First Aid Kit", Setting::Esp_Item_FirstAidKit_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Painkiller", &Setting::Esp_Item_Painkiller);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Painkiller", Setting::Esp_Item_Painkiller_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Energy Drink", &Setting::Esp_Item_EnergyDrink);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Energy Drink", Setting::Esp_Item_EnergyDrink_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Adrenaline Syringe", &Setting::Esp_Item_AdrenalineSyringe);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Adrenaline Syringe", Setting::Esp_Item_AdrenalineSyringe_Color, ImGuiColorEditFlags_NoLabel);



														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();

														//if (ImGui::BeginTabItem("Bagpack")) {

														//	ImGui::Checkbox("Bag 1", &Setting::Esp_Item_Bag1);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Bag 1", Setting::Esp_Item_Bag1_Color, ImGuiColorEditFlags_NoLabel);

														//	ImGui::Checkbox("Bag 2", &Setting::Esp_Item_Bag2);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Bag 2", Setting::Esp_Item_Bag2_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Bag 3", &Setting::Esp_Item_Bag3);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Bag 3", Setting::Esp_Item_Bag3_Color, ImGuiColorEditFlags_NoLabel);

														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();


														//if (ImGui::BeginTabItem("Helmate")) {


														//	ImGui::Checkbox("Helmet 1", &Setting::Esp_Item_Helmet1);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Helmet 1", Setting::Esp_Item_Helmet1_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Helmet 2", &Setting::Esp_Item_Helmet2);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Helmet 2", Setting::Esp_Item_Helmet2_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Helmet 3", &Setting::Esp_Item_Helmet3);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Helmet 3", Setting::Esp_Item_Helmet3_Color, ImGuiColorEditFlags_NoLabel);


														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();

														//if (ImGui::BeginTabItem("Armor")) {

														//	ImGui::Checkbox("Armor 1", &Setting::Esp_Item_Armor1);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Armor 1", Setting::Esp_Item_Armor1_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Armor 2", &Setting::Esp_Item_Armor2);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Armor 2", Setting::Esp_Item_Armor2_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Armor 3", &Setting::Esp_Item_Armor3);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Armor 3", Setting::Esp_Item_Armor3_Color, ImGuiColorEditFlags_NoLabel);

														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();

														//if (ImGui::BeginTabItem("Ammo")) {

														//	ImGui::Checkbox("7.62mm", &Setting::Esp_Item_762mm);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("762mm", (float*)&Setting::Esp_Item_762mm_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("5.56mm", &Setting::Esp_Item_556mm);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("556mm", (float*)&Setting::Esp_Item_556mm_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("9mm", &Setting::Esp_Item_9mm);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("9mm", (float*)&Setting::Esp_Item_9mm_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("45ACP", &Setting::Esp_Item_45ACP);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("45ACP", (float*)&Setting::Esp_Item_45ACP_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("AWM Ammo", &Setting::Esp_Item_Awmimo);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("awm ammo", (float*)&weapon::AWMimmo, ImGuiColorEditFlags_NoLabel);

														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();

														//if (ImGui::BeginTabItem("Attachments")) {

														//	ImGui::Checkbox("Holo", &Setting::Esp_Item_Holo);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Holo", (float*)&Setting::Esp_Item_Holo_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("x2", &Setting::Esp_Item_x2);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("2X", Setting::Esp_Item_x2_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("x3", &Setting::Esp_Item_x3);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("3X", Setting::Esp_Item_x3_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("x4", &Setting::Esp_Item_x4);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("4X", Setting::Esp_Item_x4_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("x6", &Setting::Esp_Item_x6);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("6X", Setting::Esp_Item_x6_Color, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("x8", &Setting::Esp_Item_x8);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("8X", Setting::Esp_Item_x8_Color, ImGuiColorEditFlags_NoLabel);


														//	ImGui::EndTabItem();
														//}

														//ImGui::SameLine();

														//if (ImGui::BeginTabItem("Others")) {

														//	ImGui::Checkbox("Dead box", &Setting::deadbox);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Dead Box ", (float*)&Colors::deadbox, ImGuiColorEditFlags_NoLabel);
														//	ImGui::Checkbox("Box item list", &Setting::playerdeadbox);
														//	ImGui::SameLine();
														//	ImGui::SetCursorPosX({ 115 });
														//	ImGui::ColorEdit4("Dead Boxi ", (float*)&Colors::deadboxitem, ImGuiColorEditFlags_NoLabel);

														//	ImGui::EndTabItem();
														//}



				//									}
				//									ImGui::EndTabBar();


				//								}
				//								//ImGui::EndChild();

				//								ImGui::EndChild();
				//								ImGui::EndTabItem();
				//							}
				//							ImGui::SameLine();

				//						}
				//						/*ImGui::SameLine();
				//						if (ImGui::BeginTabItem("Teammate")) {



				//							ImGui::EndTabItem();
				//						}*/
				//					}
				//					ImGui::EndTabBar();


				//				}
				//				ImGui::EndChild();

				//			}
				//			ImGui::EndChild();
				//		}


				//		//if (Settings::Tab == 3)
				//		if (Settings::Tab == 4) // For Memory
				//		{

				//			//ImGui::SetCursorPos(ImVec2(10, 10));
				//			ImGui::BeginChild("##2", ImVec2(793, 535), true, 0);
				//			{

				//				ImGui::SetCursorPos(ImVec2(5, 5));
				//				ImGui::BeginChild("###1", ImVec2(230, 520), true, 0);
				//				{
				//					/*ImGui::Checkbox(" Aimbot Risk", &Setting::Aimbot);
				//					ImGui::Checkbox(" Silent Tracking Aimbot Risk", &Setting::engine);
				//					ImGui::Checkbox(" Marco Risk", &marco1);*/
				//					

				//				}
				//				ImGui::EndChild();

				//				ImGui::SetCursorPos(ImVec2(238, 5));
				//				ImGui::BeginChild("###2", ImVec2(548, 520), true, 0);
				//				{
				//					if (ImGui::BeginTabBar("PABLO HACK")) {
				//						//ImGui::SameLine();
				//						if (Setting::Aimbot)
				//						{
				//							if (ImGui::BeginTabItem("Aimbot")) {

				//								ImGui::Text("Aimbot bone");
				//								ImGui::SameLine();

				//								const char* aimb[] = { "Head", "Body", "Pelvis" };

				//								const char* combo_label = aimb[Setting::curraim];

				//								if (ImGui::BeginCombo(" AimcPositon", combo_label, ImGuiComboFlags_HeightSmall))
				//								{
				//									for (int n = 0; n < IM_ARRAYSIZE(aimb); n++)
				//									{
				//										const bool is_selected = (Setting::curraim == n);
				//										if (ImGui::Selectable(aimb[n], is_selected))
				//											Setting::curraim = n;
				//										if (is_selected)
				//											ImGui::SetItemDefaultFocus();
				//									}


				//									ImGui::EndCombo();
				//								}

				//								ImGui::Text("Aimbot key");
				//								ImGui::SameLine();
				//								ImGui::Hotkey("##AimbotKey ", &Setting::AimbotKey, ImVec2(180.0f, 24));


				//								//const char* enginetype[] = { "Mouse Event","Silent Tracking Aimbot" };
				//								const char* enginetype[] = { "Mouse Event"};

				//								const char* enginelabel = enginetype[Setting::engine];
				//								//JIMMY&Zocey<<1
				//								ImGui::Text("Aim method");
				//								ImGui::SameLine();
				//								if (ImGui::BeginCombo(" AimcEngine", enginelabel, ImGuiComboFlags_HeightSmall))
				//								{
				//									for (int n = 0; n < IM_ARRAYSIZE(enginetype); n++)
				//									{
				//										const bool is_selectedd = (item_current_Aim == n);
				//										if (ImGui::Selectable(enginetype[n], is_selectedd))
				//											Setting::engine = n;
				//										if (is_selectedd)
				//											ImGui::SetItemDefaultFocus();
				//									}

				//									ImGui::EndCombo();
				//								}
				//								//JIMMY&Zocey>>1
				//								ImGui::Text("Aim FOV");
				//								ImGui::SameLine();
				//								ImGui::SliderFloat("###fovFOVsize", &Setting::fovcircleredus, 1.0f, 2000.0f);
				//								ImGui::Text("Aim speed");
				//								ImGui::SameLine();
				//								ImGui::SliderFloat("###fovFOVspeed", &Setting::Aimspeed, 0.0f, 15.0f);
				//								ImGui::Checkbox("Show FOV circle", &Setting::fovcircle);
				//								ImGui::Checkbox("Aim knocked Enemy", &Setting::knocked);

				//								/*ImGui::Text(" - Trigger key:");
				//								ImGui::SameLine();
				//								ImGui::Hotkey("###Enable ", &Setting::EnableKey, ImVec2(180.0f, 24));*/

				//								ImGui::Separator();
				//								ImGui::Checkbox("Draw current aiming enemy's line", &Setting::MAgicline);

				//								ImGui::EndTabItem();
				//							}
				//						}
				//						//ImGui::SameLine();
				//						int marco = 2;
				//						if (marco1)
				//						{
				//							if (ImGui::BeginTabItem("Marco")) {

				//								ImGui::Text("Marco value");
				//								ImGui::SameLine();

				//								ImGui::SliderInt("###marco", &marco, 1, 15);

				//								ImGui::EndTabItem();
				//							}
				//						}
				//						if (Setting::engine == 1)
				//						{
				//							if (ImGui::BeginTabItem("Slient Tracking Aim")) {
				//								ImGui::Text("Pickup a Gun to active Bullet Tracking, no need to fire, press (P) to fix if not work");
				//								ImGui::Checkbox("Auto repair Slient Tracking Aim when detect game change.", &nothingm);
				//								ImGui::Checkbox("Enable Aimbot Also", &nothinga);
				//								ImGui::SameLine();
				//								ImGui::Checkbox("Enable Magic Bullet Tracking (UNSAFE)", &Setting::MagicBullet);

				//								ImGui::EndTabItem();
				//							}
				//						}
				//					}
				//					ImGui::EndTabBar();


				//				}
				//				ImGui::EndChild();

				//			}
				//			ImGui::EndChild();
				//		}


				//		if (Settings::Tab == 4)
				//		{
				//			//ImGui::SetCursorPos(ImVec2(10, 10));
				//			ImGui::BeginChild("##2", ImVec2(793, 535), true, 0);
				//			{

				//				ImGui::SetCursorPos(ImVec2(5, 5));
				//				ImGui::BeginChild("###4", ImVec2(230, 520), true, 0);
				//				{
				//					////Safe Version
				//					//ImGui::Checkbox(" Magic Bullet Tracking (SAFE)", &Setting::MagicBullet);
				//					//ImGui::Checkbox(" Aimbot", &Setting::Aimbot);
				//					//ImGui::Checkbox(" Tracking Aimbot", &Setting::engine);
			/*						ImGui::Checkbox(" Marco Risk", &marco1);*/
				//					//ImGui::Checkbox(" Antiscreen for Live Stream", &Setting::antiscreen);
				//					//ImGui::Spacing();
				//					//ImGui::Spacing();
				//					//ImGui::Text("        ========================");
				//					////ImGui::Spacing();
				//					////ImGui::Spacing();

				//					////ImGui::Spacing();
				//					////ImGui::Spacing();
				//					////ImGui::Text(">> More Option Coming Soon <<");
				//					//ImGui::Text("        More Option Hide This Safe Version");

				//					//Danger Version
				//					ImGui::Checkbox(" Aimbot", &Setting::Aimbot);
				//					//ImGui::Checkbox(" Marco Risk", &marco1);
				//					ImGui::Checkbox(" Tracking Aimbot", &Setting::engine);
				//					ImGui::Checkbox(" Magic Bullet Tracking", &Setting::MagicBullet);
				//					ImGui::Text("        ________________________________________");
				//					//ImGui::Checkbox(" Camera Tracking", &Setting::CameraCatch);
				//					ImGui::Checkbox(" Instant Hit - Risk", &Setting::instanthit);
				//					ImGui::Checkbox(" No Recoil - Risk", &Setting::recoil);
				//					ImGui::Checkbox(" Fast Run - Risk", &Setting::fastrun);
				//					//ImGui::Checkbox(" Fast Run v2 Not Use", &Setting::fastrun);
				//					//ImGui::Checkbox(" Magic Hit - Risk", &Setting::Magntic);
				//					//ImGui::Checkbox(" Fast Parachute - Risk", &Setting::FastParachute);
				//					ImGui::Checkbox(" Fast Car - Risk", &Setting::speedcar);
				//					//ImGui::Checkbox(" Fly Car - Risk", &Setting::carfly);
				//					//ImGui::Checkbox(" Fly Man - Risk", &Setting::fly);
				//					ImGui::Checkbox(" God View All - Risk", &Setting::GodView);
				//					//ImGui::Checkbox(" X Effect", &Setting::MagicX);
				//					//ImGui::Checkbox(" Unlock 90Fps", &Setting::NINEFPS);
				//					ImGui::Text("        ________________________________________");
				//					ImGui::Checkbox(" iPAD View", &Setting::ipadview);
				//					ImGui::Checkbox(" Unlock 90FPS + UltraHD", &Setting::NINEFPS);
				//					ImGui::Checkbox(" Antiscreen for Live Stream", &Setting::antiscreen);
				//					ImGui::Spacing();
				//					ImGui::Text(">> More Option Coming Soon <<");


				//				}
				//				ImGui::EndChild();

				//				ImGui::SetCursorPos(ImVec2(238, 5));
				//				ImGui::BeginChild("###2", ImVec2(548, 520), true, 0);
				//				{
				//					if (Setting::MagicBullet)
				//					{
				//						if (ImGui::TreeNodeEx("Magic Bullet"))
				//						{
				//							ImGui::Indent();
				//							ImGui::Text("Magic Bullet Value");
				//							ImGui::SameLine();

				//							ImGui::SliderInt("####1", &Setting::magicv, 0, 50);
				//							ImGui::Spacing();
				//							ImGui::Spacing();
				//							ImGui::Spacing();
				//							ImGui::Text("__________________________________________________");
				//							ImGui::Text("[?]  Magic Bullet key (Mouse Left Button)");

				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::ipadview)
				//					{
				//						if (ImGui::TreeNodeEx("iPAD View"))
				//						{
				//							ImGui::Indent();

				//							ImGui::Text("iPAD View Value");
				//							ImGui::SameLine();
				//							ImGui::SliderInt("###7754334", &Setting::IPADSIZE, 1, 300);

				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::fastrun)
				//					{
				//						if (ImGui::TreeNodeEx("Fast Run"))
				//						{
				//							ImGui::Indent();
				//							ImGui::Text("Fast Run Value");
				//							ImGui::SameLine();

				//							ImGui::SliderInt("####2", &Setting::fastrv, 1.0f, 20.0f);
				//							ImGui::Spacing();
				//							ImGui::Spacing();
				//							ImGui::Spacing();
				//							ImGui::Text("__________________________________________________________________________");
				//							ImGui::Text("[?]  Fast run key (Keyboard SHIFT Button, With W + S + A + D)");
				//							

				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::GodView)
				//					{
				//						if (ImGui::TreeNodeEx("God View"))
				//						{
				//							ImGui::Indent();

				//							ImGui::Text("GodView Front Key");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView Front ", &Setting::GodFront, ImVec2(180.0f, 24));

				//							ImGui::Text("GodView Up Key");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView UP ", &Setting::GodUp, ImVec2(180.0f, 24));


				//							ImGui::Text("GodView Down Key");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView Down ", &Setting::GodDown, ImVec2(180.0f, 24));

				//							ImGui::Text("GodView Left Key");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView Left ", &Setting::GodLeft, ImVec2(180.0f, 24));

				//							ImGui::Text("GodView Right Key");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView Right ", &Setting::GodRight, ImVec2(180.0f, 24));
				//							
				//							ImGui::Spacing();
				//							ImGui::Spacing();
				//							ImGui::Spacing();
				//							ImGui::Text("__________________________________________________________");
				//							ImGui::Text("[?]  If possible, do not change the button set here");
				//							ImGui::Text("[?]  But you can change it if you want");
				//							ImGui::SameLine();
				//							
				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::speedcar)
				//					{
				//						if (ImGui::TreeNodeEx("Fast Car"))
				//						{
				//							ImGui::Indent();

				//							ImGui::SliderInt("####3", &Setting::carsv, 1.0f, 600.0f);


				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::carfly)
				//					{
				//						if (ImGui::TreeNodeEx("Fly Car"))
				//						{
				//							ImGui::Indent();

				//							ImGui::SliderInt("####4", &Setting::flycarv, 1.0f, 50000.0f);


				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::fly)
				//					{
				//						if (ImGui::TreeNodeEx("Fly Man"))
				//						{
				//							ImGui::Indent();
				//							ImGui::SliderInt("###7", &Setting::intV, 0, 800000);
				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					/////*if (Setting::GodView1)
				//					////{
				//					////	if (ImGui::TreeNodeEx("GodView"))
				//					////	{
				//					////		ImGui::Indent();
				//					////		ImGui::SliderInt("###9", &Setting::intGO, 0.0f, 420.0f);
				//					////		ImGui::Unindent();
				//					////		ImGui::TreePop();
				//					////	}
				//					////}*/
				//					if (Setting::GodView1)
				//					{
				//						if (ImGui::TreeNodeEx("GodView"))
				//						{
				//							ImGui::Indent();

				//							/*ImGui::Text("GodView Up");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView UP ", &Setting::GodUp, ImVec2(180.0f, 24));*/


				//							ImGui::Text("GodView Down");
				//							ImGui::SameLine();
				//							ImGui::Hotkey("##GodView Down ", &Setting::GodDown, ImVec2(180.0f, 24));

				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}

				//					if (Setting::instanthit)
				//					{
				//						if (ImGui::TreeNodeEx("Instant Hit"))
				//						{
				//							ImGui::Indent();

				//							ImGui::SliderInt("####5", &Setting::instantv, 1.0f, 1000000.0f);


				//							ImGui::Unindent();
				//							ImGui::TreePop();
				//						}
				//					}



				//				}
				//				ImGui::EndChild();

				//			}
				//			ImGui::EndChild();
				//		}


				//		if (Settings::Tab == 5)
				//		{
				//			//ImGui::SetCursorPos(ImVec2(10, 10));
				//			ImGui::BeginChild("##5", ImVec2(793, 535), true, 0);
				//			{

				//				ImGui::BeginChild("##1", ImVec2(390, 125), true, 0);
				//				{
				//					ImGui::Checkbox("Text Border  |  Update Tick:", &Setting::borderlo);
				//					ImGui::Separator();

				//					if (ImGui::Button("Save Setting", { 185.f,25.f }))
				//					{
				//						WriteConfigurate("C:\\PABLOload.ini");
				//						
				//					}
				//					ImGui::SameLine();
				//					if (ImGui::Button("Load Setting", { 185.f,25.f }))
				//					{


				//						//	ImGui::LoadIniSettingsFromDisk("C:\\khani_setting.ini");
				//						LoadConfiggg("C:\\PABLOload.ini");

				//					}
				//					ImGui::Separator();

				//				}
				//				ImGui::EndChild();

				//				ImGui::SameLine();

				//				ImGui::BeginChild("##2", ImVec2(390, 125), true, 0);
				//				{
				//					if (ImGui::Button("Unload Hack", ImVec2(380, 105)))
				//					{
				//						unload = true;
				//						//exit(0);
				//						////Setting::bortext = false;
				//						//ImGui::SetNextWindowSize(ImVec2(250.0f, 100.0f));
				//						//if (ImGui::Begin("Unload hack?", 0, Flags1))
				//						//{
				//						//	if (ImGui::Button("OK", { 115.f,25.f }))
				//						//	{

				//						//	}
				//						//	ImGui::SameLine();
				//						//	if (ImGui::Button("Cancel", { 115.f,25.f }))
				//						//	{

				//						//	}
				//						//}

				//					}

				//				}
				//				ImGui::EndChild();

				//			}
				//			ImGui::EndChild();
				//		}

				//		if (Settings::Tab == 6)
				//		{
				//			//ImGui::SetCursorPos(ImVec2(10, 10));
				//			ImGui::BeginChild("##6", ImVec2(793, 535), true, 0);
				//			{
				//				ImGui::SetCursorPos(ImVec2(5, 5));
				//				ImGui::BeginChild("###1", ImVec2(230, 520), true, 0);
				//				{
				//					ImGui::Checkbox(" Player ESP Style 1", &Setting::style1);
				//					ImGui::Checkbox(" Player ESP Style 2", &Setting::style2);
				//					ImGui::Checkbox(" Player ESP Style 3", &Setting::style3);
				//					ImGui::Text("        ________________________________________");

				//					ImGui::Checkbox(" More ESP Style Coming Soon", &Setting::fackSetting1);
				//					//ImGui::Checkbox(" Player ESP Style 5, Coming Soon", &Setting::fackSetting2);
				//					ImGui::Spacing();
				//					ImGui::Text(">> More Option Coming Soon <<");

				//				}
				//				ImGui::EndChild();
				//			}
				//			ImGui::EndChild();
				//		}
				//	}

				//	ImGui::End();
				//}
				//Main Menu Hide By JIMMY&Zocey//================================================================================================
			}
		}

		if (login)
		{
			if (unload)
			{
				ImGuiIO& Io = ImGui::GetIO();

				//ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
				ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
				ImGui::SetNextWindowSize(ImVec2(250.0f, 100.0f));
				if (ImGui::Begin("####11", 0, Flags2))
				{
					imguipp::CenterText("Are you sure?", 0, 0);
					if (ImGui::Button("OK", { 115.f,25.f }))
					{
						exit(0);
					}
					ImGui::SameLine();
					if (ImGui::Button("Cancel", { 115.f,25.f }))
					{
						unload = false;
					}

					ImGui::End();
				}
			}

			time_t t; // t passed as argument in function time()
			struct tm* tt; // decalring variable for localtime()
			time(&t); //passing argument to time()
			tt = localtime(&t);
			//cout << "Current Day, Date and Time is = " << asctime(tt);
			tim = asctime(tt);




			ViewMatrix = Utility::ReadMemoryEx<D3DMATRIX>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase) + 0x20) + 0x200);
			currIndex = Memory::AimFindBestTarget();
			for (AActor& AActor : Data::AActorList)
			{
				if (!Algorithm::WorldToScreenPlayer(AActor.Position, Screen, &Distance, ViewMatrix)) continue;

				//// ESP Style1 Player Weapon Show--------------------------------------------------------------
				if (Setting::style1)
				{
					if (Setting::playerweapon)
					{

					}
					else
					{

					}
				}

				// ESP Style2 Player Weapon Show--------------------------------------------------------------
				if (Setting::style2)
				{
					if (Setting::playerweapon)
					{

					}
					else
					{

					}
				}

				// ESP Style3 Player Weapon Show--------------------------------------------------------------
				if (Setting::style3)
				{
					if (Setting::playerweapon)
					{

					}
					else
					{

					}
				}

				if (Distance < 350)
				{
					temp = to_string(AActor.TeamId) + "." + " " + AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";

					//temp = AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";
					teamid = AActor.TeamId;
					col = ImColor(teamid, teamid, teamid, 255);
					// linescolors = { teamids  ,  teamids , teamids ,1.0f };
					switch (teamid)
					{

					case 1:
						linescolors = { 1.000f, 0.033f, 0.129f, 1.000f };
						break;
					case 2:
						linescolors = { 1.000f, 1.000f, 0.000f, 1.000f };
						break;
					case 3:
						linescolors = { 0.866f, 0.128f, 0.081f, 1.000f };
						break;
					case 4:
						linescolors = { 0.844f, 0.066f, 1.000f, 1.000f };
						break;
					case 5:
						linescolors = { 0.737f, 1.000f, 0.000f, 1.000f };
						break;
					case 6:
						linescolors = { 0.000f, 1.000f, 0.964f, 1.000f };
						break;
					case 7:
						linescolors = { 0.610f, 0.190f, 1.000f, 1.000f };
						break;
					case 8:
						linescolors = { 1.000f, 0.100f, 0.401f, 1.000f };
						break;
					case 9:
						linescolors = { 0.610f, 0.190f, 1.000f, 1.000f };
						break;
					case  10:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
						break;
					case 11:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
						break;
					case 12:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
						break;
					case 13:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
						break;
					case 14:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
						break;
					case 15:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };
						break;
					case 16:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };
						break;
					case 17:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };
						break;
					case 18:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };
						break;
					case 19:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
						break;
					case  20:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };
						break;
					case 21:
						linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
						break;
					case 22:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 23:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 24:
						linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
						break;
					case 25:
						linescolors = { 0.053f, 0.355f, 1.000f, 1.000f };
						break;
					case 26:
						linescolors = { 1.000f, 0.70f, 0.000f, 1.000f };
						break;
					case 27:
						linescolors = { 1.000f, 1.000f, 0.000f, 1.000f };
						break;
					case 28:
						linescolors = { 0.866f, 0.128f, 0.081f, 1.000f };
						break;
					case 29:
						linescolors = { 0.844f, 0.066f, 1.000f, 1.000f };
						break;
					case 30:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
						break;
					case 31:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
						break;
					case 32:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
						break;
					case 33:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
						break;
					case 34:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
						break;
					case 35:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };
						break;
					case 36:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };
						break;
					case 37:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };
						break;
					case 38:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };
						break;
					case 39:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
						break;
					case  40:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };
						break;
					case 41:
						linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
						break;
					case 42:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 43:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 44:
						linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
						break;
					case 45:
						linescolors = { 0.053f, 0.355f, 1.000f, 1.000f };
						break;
					case 46:
						linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
						break;
					case 47:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 48:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 49:
						linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
						break;
					case 50:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
						break;
					case 51:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
						break;
					case 52:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
						break;
					case 53:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
						break;
					case 54:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
						break;
					case 55:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

						break;
					case 56:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

						break;
					case 57:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

						break;
					case 58:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

						break;
					case 59:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
						break;
					case  60:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

						break;
					case 61:
						linescolors = { 0.399f, 0.720f, 0.122f, 1.000f };

						break;
					case 62:
						linescolors = { 1.000f, 0.960f, 0.560f, 1.000f };

						break;
					case 63:
						linescolors = { 0.874f, 0.301f, 0.068f, 1.000f };

						break;
					case 64:
						linescolors = { 0.110f, 0.845f, 0.174f, 1.000f };

						break;
					case 65:
						linescolors = { 0.802f, 0.267f, 0.077f, 1.000f };

						break;

					case 66:
						linescolors = { 0.129f, 0.774f, 0.986f, 1.000f };

						break;
					case 67:
						linescolors = { 0.168f, 0.792f, 0.792f, 1.000f };

						break;
					case 68:
						linescolors = { 1.000f, 0.237f, 0.945f, 1.000f };

						break;
					case 69:
						linescolors = { 1.000f, 0.126f, 0.430f, 1.000f };

						break;
					case  70:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };

						break;
					case 71:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };

						break;
					case 72:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };

						break;
					case 73:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };

						break;
					case 74:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };

						break;
					case 75:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

						break;
					case 76:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

						break;
					case 77:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

						break;
					case 78:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

						break;
					case 79:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };

						break;
					case 80:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

						break;
					case 81:
						linescolors = { 1.000f, 0.033f, 0.129f, 1.000f };

						break;
					case 82:
						linescolors = { 1.000f, 0.033f, 0.290f, 1.000f };

						break;
					case 83:
						linescolors = { 1.000f, 0.033f, 0.450f, 1.000f };

						break;
					case 84:
						linescolors = { 1.000f, 0.033f, 0.578f, 1.000f };

						break;
					case 85:
						linescolors = { 1.000f, 0.033f, 0.802f, 1.000f };

						break;

					case 86:
						linescolors = { 0.973f, 0.033f, 1.000f, 1.000f };

						break;
					case 87:
						linescolors = { 0.781f, 0.033f, 1.000f, 1.000f };

						break;
					case 88:
						linescolors = { 0.557f, 0.033f, 1.000f, 1.000f };

						break;
					case 89:
						linescolors = { 0.033f, 0.375f, 1.000f, 1.000f };

						break;
					case  90:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };

						break;
					case 91:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };

						break;
					case 92:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };

						break;
					case 93:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };

						break;
					case 94:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };

						break;
					case 95:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

						break;

					case 96:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

						break;
					case 97:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

						break;
					case 98:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

						break;
					case 99:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };

						break;
					case  100:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

						break;
					default:

						linescolors = Colors::playerline;
						bonescolors = Colors::playerbone;
						fullboxcolor = Colors::playerbox;
						cornerboxcolor = Colors::playercorner;
						break;
					}

					std::string BotWarning;
					std::string PlayerWarning;



					if (Setting::dots)
					{
						if (AActor.IsBot)
						{
							BotWarning = " BOT ";
						}
						else
						{
							PlayerWarning = "Player";
						}
						if (Screen.X > DX11Window::Width && Screen.Y > 0 && Screen.Y < DX11Window::Height)//Right
						{
							//DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - 20, Screen.Y + Screen.Z, 7, 10, ImColor(0.0f, 0.f, 0.f, 0.200f));
							DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, Screen.Y + Screen.Z, 7, DX11::ImGui_DX11::Color::Red, 4.0f);
							//DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, Screen.Y + Screen.Z, 7, DX11::ImGui_DX11::Color::Red,  4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, DX11Window::Width - 20, Screen.Y + Screen.Z, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, DX11Window::Width - 20, Screen.Y + Screen.Z, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, DX11Window::Width - 20, Screen.Y + Screen.Z, DX11::ImGui_DX11::Color::Orange, false);*/
							//DX11::ImGui_DX11::DrawFilledRectangle(DX11Window::Width - 20, Screen.Y + Screen.Z, 50, 30, ImColor(0.0f, 0.f, 0.f, 0.200f));

						}
						if (Screen.X < 0 && Screen.Y  >0 && Screen.Y < DX11Window::Height)//Left
						{

							DX11::ImGui_DX11::DrawCircle(20, Screen.Y + Screen.Z, 7, DX11::ImGui_DX11::Color::Yellow, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, 20, Screen.Y + Screen.Z, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, 20, Screen.Y + Screen.Z, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, 20, Screen.Y + Screen.Z, DX11::ImGui_DX11::Color::Orange, false);*/

						}
						if (Screen.Y < 0 && Screen.X>0 && Screen.X < DX11Window::Width)//Top
						{
							DX11::ImGui_DX11::DrawCircle(Screen.X, 20, 7, DX11::ImGui_DX11::Color::Red, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, Screen.X, 20, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, Screen.X, 20, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, Screen.X, 20, DX11::ImGui_DX11::Color::Orange, false);*/

						}
						if (Screen.Y > DX11Window::Height && Screen.X > 0 && Screen.X < DX11Window::Width)//Bottom
						{
							DX11::ImGui_DX11::DrawCircle(Screen.X, DX11Window::Height - 20, 7, DX11::ImGui_DX11::Color::Yellow, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, Screen.X, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, Screen.X, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, Screen.X, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Orange, false);*/

						}
						if (Screen.X < 0 && Screen.Y < 0)//top left
						{
							DX11::ImGui_DX11::DrawCircle(20, 20, 7, DX11::ImGui_DX11::Color::White, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, 20, 20, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, 20, 20, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, 20, 20, DX11::ImGui_DX11::Color::Orange, false);*/

						}
						if (Screen.X > DX11Window::Width && Screen.Y > DX11Window::Height)//bottom right
						{
							DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, DX11Window::Height - 20, 7, DX11::ImGui_DX11::Color::White, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, DX11Window::Width - 20, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, DX11Window::Width - 20, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, DX11Window::Width - 20, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Orange, false);*/

						}
						if (Screen.X > DX11Window::Width && Screen.Y < 0)//top right
						{
							DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, 20, 7, DX11::ImGui_DX11::Color::White, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, DX11Window::Width - 20, 20, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, DX11Window::Width - 20, 20, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, DX11Window::Width - 20, 20, DX11::ImGui_DX11::Color::Orange, false);*/

						}
						if (Screen.X<0 && Screen.Y >DX11Window::Width)//bottom left
						{
							DX11::ImGui_DX11::DrawCircle(20, DX11Window::Height - 20, 7, DX11::ImGui_DX11::Color::White, 4.0f);
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, temp, 20, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Green, false);
							/*DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, BotWarning, 20, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Green, false);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, PlayerWarning, 20, DX11Window::Height - 20, DX11::ImGui_DX11::Color::Orange, false);*/

						}
					}


					dist = std::to_string(Distance) + "M";


					if (Setting::pname)
					{
						// ESP Style1 Player Name--------------------------------------------------------------
						if (Setting::style1)
						{
							std::string BotTag;
							std::string botname;
							std::string BotDown;
							std::string PlayerTag;
							std::string PlayerAlive;
							std::string PlayerDown;
							if (AActor.IsBot)
							{
								if (Setting::botname)
								{
									//Player Name Back Sadow For P+B TAG, BOT
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - 53, Screen.Y - 24, 17, 16, ImColor(0.0f, 0.0f, 255.0f, 255.0f));
									BotTag = "B";
									botname = ("[BOT]  |  ") + to_string(AActor.TeamId);// +"   " + to_string(Distance) + "M ";
									BotDown = ("Knock Down | ") + to_string(AActor.TeamId);// +"   " + to_string(Distance) + "M ";

								}
							}
							else
							{
								//Player Name Back Sadow For P+B TAG, Player
								DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - 53, Screen.Y - 24, 17, 16, ImColor(255.0f, 0.0f, 0.0f, 255.0f));
								PlayerTag = "P";
								PlayerAlive = (AActor.Name) + " | " + to_string(AActor.TeamId).c_str();// +"   " + to_string(Distance) + "M ";
								PlayerDown = ("Knock Down | ") + to_string(AActor.TeamId);// +"   " + to_string(Distance) + "M ";

							}

							//Player Name Back Sadow


							if (AActor.Health <= 0)
							{
								// ESP Style1 Player Name.........
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, BotTag, Screen.X - 61, Screen.Y - 43, DX11::ImGui_DX11::Color::White, true);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, PlayerTag, Screen.X - 61, Screen.Y - 43, DX11::ImGui_DX11::Color::White, true);

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, nsize, BotDown, Screen.X + 10, Screen.Y - 41, DX11::ImGui_DX11::Color::Red, true);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, nsize, PlayerDown, Screen.X + 10, Screen.Y - 41, DX11::ImGui_DX11::Color::Red, true);
							}
							else
							{
								// ESP Style1 Player Name.........
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, BotTag, Screen.X - 61, Screen.Y - 43, DX11::ImGui_DX11::Color::White, false);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, PlayerTag, Screen.X - 61, Screen.Y - 43, DX11::ImGui_DX11::Color::White, false);

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 16, botname, Screen.X + 10, Screen.Y - 41, DX11::ImGui_DX11::Color::White, false);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 16, PlayerAlive, Screen.X + 10, Screen.Y - 41, DX11::ImGui_DX11::Color::White, false);
							}
						}
						// ESP Style2 Player Name--------------------------------------------------------------
						if (Setting::style2)
						{
							std::string BotAlive;
							std::string BotDown;
							std::string PlayerAlive;
							std::string PlayerDown;
							if (AActor.IsBot)
							{
								if (Setting::botname)
								{
									BotAlive = to_string(AActor.TeamId) + "." + " " + "Bot";// +"   " + to_string(Distance) + "M ";
									BotDown = to_string(AActor.TeamId) + "." + " " + "Bot";// +"   " + to_string(Distance) + "M ";
								}
							}
							else
							{
								PlayerAlive = to_string(AActor.TeamId) + "." + " " + AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";
								PlayerDown = to_string(AActor.TeamId) + "." + " " + AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";
							}
							if (AActor.Health <= 0)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, BotDown, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Red, true);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, PlayerDown, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Red, true);
							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, BotAlive, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Yellow, true);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, PlayerAlive, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Yellow, true);
							}
						}
						// ESP Style3 Player Name--------------------------------------------------------------
						if (Setting::style3)
						{
							std::string BotAlive;
							std::string BotDown;
							std::string PlayerAlive;
							std::string PlayerDown;
							if (AActor.IsBot)
							{
								if (Setting::botname)
								{
									BotAlive = to_string(AActor.TeamId) + "." + " " + "[ BOT ]";// +"   " + to_string(Distance) + "M ";
									BotDown = to_string(AActor.TeamId) + "." + " " + "[ BOT ]";// +"   " + to_string(Distance) + "M ";
								}
							}
							else
							{
								PlayerAlive = to_string(AActor.TeamId) + "." + " " + AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";
								PlayerDown = to_string(AActor.TeamId) + "." + " " + AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";
							}
							if (AActor.Health <= 0)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, BotDown, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Red, true);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, PlayerDown, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Red, true);
							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, BotAlive, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::BotColor, true);
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, PlayerAlive, Screen.X, (Screen.Y - 30), DX11::ImGui_DX11::Color::Yellow, true);
							}
						}
					}

					if (Setting::Distancee)
					{
						// ESP Style1 Player Distancee--------------------------------------------------------------
						if (Setting::style1)
						{
							//// ESP Style1 Player Weapon Show--------------------------------------------------------------
							if (Setting::style1)
							{
								if (Setting::playerweapon)
								{
									////-------------------------------------------------------------------------------------------------
									if (AActor.Health <= 0)
									{
										// ESP Style1 Player Weapon Show--------------------------------------------------------------
										Text = (weapon + "  |  ") + (dist); weapon = AActor.weapon;
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, weapsize, Text, Screen.X - 0, (Screen.Y - 60), DX11::ImGui_DX11::Color::Red, true);
									}
									else
									{
										// ESP Style1 Player Weapon Show--------------------------------------------------------------
										Text = (weapon + "  |  ") + (dist); weapon = AActor.weapon;
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 15, Text, Screen.X - 0, (Screen.Y - 60), DX11::ImGui_DX11::Color::Green, false);

									}
								}
								else
								{
									////-------------------------------------------------------------------------------------------------
									if (AActor.Health <= 0)
									{
										// ESP Style1 Player Weapon Show--------------------------------------------------------------
										Text = (weapon + "  |  ") + (dist); weapon = AActor.weapon;
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, weapsize, Text, Screen.X - 0, (Screen.Y - 60), DX11::ImGui_DX11::Color::Red, true);
									}
									else
									{
										// ESP Style1 Player Weapon Show--------------------------------------------------------------
										Text = (weapon + "  |  ") + (dist); weapon = AActor.weapon;
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 15, Text, Screen.X - 0, (Screen.Y - 60), DX11::ImGui_DX11::Color::Green, false);

									}
								}
							}
						}
						// ESP Style2 Player Distancee--------------------------------------------------------------
						if (Setting::style2)
						{
							Text = (weapon + "  |  ") + (dist); weapon = AActor.weapon;
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, dissize, Text, Screen.X + 0, (Screen.Y + 5 + Screen.Z), DX11::ImGui_DX11::Color::Yellow, false);
						}
						// ESP Style3 Player Distancee--------------------------------------------------------------
						if (Setting::style3)
						{
							Text = (weapon + "  |  ") + (dist); weapon = AActor.weapon;
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, dissize, Text, Screen.X + 0, (Screen.Y + 5 + Screen.Z), DX11::ImGui_DX11::Color::Green, false);
						}

					}

					if (Setting::phealth)
					{
						// ESP Style1 Player Health--------------------------------------------------------------
						if (Setting::style1)
						{
							if (!AActor.IsBot)
							{
								DX11::ImGui_DX11::DrawBlood(Screen.X - 70, Screen.Y - 24, 140, 3.0, AActor.Health);
							}
							else
							{

								if (Setting::bothealth)
								{
									DX11::ImGui_DX11::DrawBlood(Screen.X - 70, Screen.Y - 24, 140, 3.0, AActor.Health);
								}
								else
								{

								}
							}
							if (Setting::Flags && Setting::style1 && Setting::Flags)
							{
#pragma region DrowFlags

								if (AActor.Nation == "JM")
								{
									DrawImage(JMFLAG, Screen.X + 10, Screen.Y - 50, 20, 14);
								}
								if (AActor.Nation == "G1")
								{
									DrawImage(G1FLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AF")
								{
									DrawImage(AFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AL")
								{
									DrawImage(ALFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "DZ")
								{
									DrawImage(DZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AS")
								{
									DrawImage(ASFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AD")
								{
									DrawImage(ADFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AO")
								{
									DrawImage(AOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AI")
								{
									DrawImage(AIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AQ")
								{
									DrawImage(AQFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AG")
								{
									DrawImage(AGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AR")
								{
									DrawImage(ARFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AM")
								{
									DrawImage(AMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AW")
								{
									DrawImage(AWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AU")
								{
									DrawImage(AUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AT")
								{
									DrawImage(ATFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AZ")
								{
									DrawImage(AZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BS")
								{
									DrawImage(BSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BH")
								{
									DrawImage(BHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BD")
								{
									DrawImage(BDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BB")
								{
									DrawImage(BBFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BY")
								{
									DrawImage(BYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BE")
								{
									DrawImage(BEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BZ")
								{
									DrawImage(BZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BJ")
								{
									DrawImage(BJFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BM")
								{
									DrawImage(BMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BT")
								{
									DrawImage(BTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BO")
								{
									DrawImage(BOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BQ")
								{
									DrawImage(BQFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BA")
								{
									DrawImage(BAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BW")
								{
									DrawImage(BWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BV")
								{
									DrawImage(BVFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BR")
								{
									DrawImage(BRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IO")
								{
									DrawImage(IOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BN")
								{
									DrawImage(BNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BG")
								{
									DrawImage(BGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BF")
								{
									DrawImage(BFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BI")
								{
									DrawImage(BIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CV")
								{
									DrawImage(CVFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KH")
								{
									DrawImage(KHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CM")
								{
									DrawImage(CMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CA")
								{
									DrawImage(CAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KY")
								{
									DrawImage(KYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CF")
								{
									DrawImage(CFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TD")
								{
									DrawImage(TDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CL")
								{
									DrawImage(CLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CN")
								{
									DrawImage(CNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CX")
								{
									DrawImage(CXFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CC")
								{
									DrawImage(CCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CO")
								{
									DrawImage(COFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KM")
								{
									DrawImage(KMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CD")
								{
									DrawImage(CDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CG")
								{
									DrawImage(CGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CK")
								{
									DrawImage(CKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CR")
								{
									DrawImage(CRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "HR")
								{
									DrawImage(HRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CU")
								{
									DrawImage(CUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CW")
								{
									DrawImage(CWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CY")
								{
									DrawImage(CYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CZ")
								{
									DrawImage(CZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CI")
								{
									DrawImage(CIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "DK")
								{
									DrawImage(DKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "DJ")
								{
									DrawImage(DJFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "DM")
								{
									DrawImage(DMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "DO")
								{
									DrawImage(DOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "EC")
								{
									DrawImage(ECFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "EG")
								{
									DrawImage(EGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SV")
								{
									DrawImage(SVFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GQ")
								{
									DrawImage(GQFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ER")
								{
									DrawImage(ERFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "EE")
								{
									DrawImage(EEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SZ")
								{
									DrawImage(SZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ET")
								{
									DrawImage(ETFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "FK")
								{
									DrawImage(FKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "FO")
								{
									DrawImage(FOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "FJ")
								{
									DrawImage(FJFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "FI")
								{
									DrawImage(FIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "FR")
								{
									DrawImage(FRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GF")
								{
									DrawImage(GFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PF")
								{
									DrawImage(PFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TF")
								{
									DrawImage(TFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GA")
								{
									DrawImage(GAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GM")
								{
									DrawImage(GMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GE")
								{
									DrawImage(GEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "DE")
								{
									DrawImage(DEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GH")
								{
									DrawImage(GHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GI")
								{
									DrawImage(GIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GR")
								{
									DrawImage(GRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GL")
								{
									DrawImage(GLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GD")
								{
									DrawImage(GDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GP")
								{
									DrawImage(GPFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GU")
								{
									DrawImage(GUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GT")
								{
									DrawImage(GTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GG")
								{
									DrawImage(GGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GN")
								{
									DrawImage(GNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GW")
								{
									DrawImage(GWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GY")
								{
									DrawImage(GYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "HT")
								{
									DrawImage(HTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "HM")
								{
									DrawImage(HMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VA")
								{
									DrawImage(VAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "HN")
								{
									DrawImage(HNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "HK")
								{
									DrawImage(HKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "HU")
								{
									DrawImage(HUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "JP")
								{
									DrawImage(JPFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "JE")
								{
									DrawImage(JEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "JO")
								{
									DrawImage(JOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KZ")
								{
									DrawImage(KZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KE")
								{
									DrawImage(KEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KI")
								{
									DrawImage(KIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KP")
								{
									DrawImage(KPFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KR")
								{
									DrawImage(KRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KW")
								{
									DrawImage(KWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KG")
								{
									DrawImage(KGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LA")
								{
									DrawImage(LAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LV")
								{
									DrawImage(LVFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LB")
								{
									DrawImage(LBFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LS")
								{
									DrawImage(LSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LR")
								{
									DrawImage(LRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LY")
								{
									DrawImage(LYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LI")
								{
									DrawImage(LIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LT")
								{
									DrawImage(LTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LU")
								{
									DrawImage(LUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MO")
								{
									DrawImage(MOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MG")
								{
									DrawImage(MGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MW")
								{
									DrawImage(MWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MY")
								{
									DrawImage(MYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MV")
								{
									DrawImage(MVFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ML")
								{
									DrawImage(MLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MT")
								{
									DrawImage(MTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MH")
								{
									DrawImage(MHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MQ")
								{
									DrawImage(MQFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MR")
								{
									DrawImage(MRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MU")
								{
									DrawImage(MUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "YT")
								{
									DrawImage(YTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MX")
								{
									DrawImage(MXFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "FM")
								{
									DrawImage(FMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MD")
								{
									DrawImage(MDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MC")
								{
									DrawImage(MCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MN")
								{
									DrawImage(MNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ME")
								{
									DrawImage(MEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MS")
								{
									DrawImage(MSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MA")
								{
									DrawImage(MAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MZ")
								{
									DrawImage(MZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MM")
								{
									DrawImage(MMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NA")
								{
									DrawImage(NAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NR")
								{
									DrawImage(NRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NP")
								{
									DrawImage(NPFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NL")
								{
									DrawImage(NLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NC")
								{
									DrawImage(NCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NZ")
								{
									DrawImage(NZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NI")
								{
									DrawImage(NIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NE")
								{
									DrawImage(NEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NG")
								{
									DrawImage(NGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NU")
								{
									DrawImage(MUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NF")
								{
									DrawImage(NFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MP")
								{
									DrawImage(NPFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "NO")
								{
									DrawImage(NOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "OM")
								{
									DrawImage(OMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PK")
								{
									DrawImage(PKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PW")
								{
									DrawImage(PWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PS")
								{
									DrawImage(PSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PA")
								{
									DrawImage(PAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PG")
								{
									DrawImage(PGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PY")
								{
									DrawImage(PYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PE")
								{
									DrawImage(PEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PH")
								{
									DrawImage(PHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PN")
								{
									DrawImage(PNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PL")
								{
									DrawImage(PLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PT")
								{
									DrawImage(PTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PR")
								{
									DrawImage(PRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "QA")
								{
									DrawImage(QAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MK")
								{
									DrawImage(MKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "RO")
								{
									DrawImage(ROFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "RU")
								{
									DrawImage(RUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "RW")
								{
									DrawImage(RWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "RE")
								{
									DrawImage(REFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "BL")
								{
									DrawImage(BLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SH")
								{
									DrawImage(SHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "KN")
								{
									DrawImage(KNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LC")
								{
									DrawImage(LCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "MF")
								{
									DrawImage(MFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "PM")
								{
									DrawImage(PMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VC")
								{
									DrawImage(VCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "WS")
								{
									DrawImage(WSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SM")
								{
									DrawImage(SMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ST")
								{
									DrawImage(STFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SA")
								{
									DrawImage(SAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SN")
								{
									DrawImage(SNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "RS")
								{
									DrawImage(RSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SC")
								{
									DrawImage(SCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SL")
								{
									DrawImage(SLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SG")
								{
									DrawImage(SGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SX")
								{
									DrawImage(SXFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SK")
								{
									DrawImage(SKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SI")
								{
									DrawImage(SIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SB")
								{
									DrawImage(SBFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SO")
								{
									DrawImage(SOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ZA")
								{
									DrawImage(ZAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GS")
								{
									DrawImage(GSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SS")
								{
									DrawImage(SSFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ES")
								{
									DrawImage(ESFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "LK")
								{
									DrawImage(LKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SD")
								{
									DrawImage(SDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SR")
								{
									DrawImage(SRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SJ")
								{
									DrawImage(SJFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SE")
								{
									DrawImage(SEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "CH")
								{
									DrawImage(CHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "SY")
								{
									DrawImage(SYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TW")
								{
									DrawImage(TWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TJ")
								{
									DrawImage(TJFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TZ")
								{
									DrawImage(TZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TH")
								{
									DrawImage(THFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TL")
								{
									DrawImage(TLFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TG")
								{
									DrawImage(TGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TK")
								{
									DrawImage(TKFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TO")
								{
									DrawImage(TOFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TT")
								{
									DrawImage(TTFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TN")
								{
									DrawImage(TNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TR")
								{
									DrawImage(TRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TM")
								{
									DrawImage(TMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TC")
								{
									DrawImage(TCFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "TV")
								{
									DrawImage(TVFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "UG")
								{
									DrawImage(UGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "UA")
								{
									DrawImage(UAFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AE")
								{
									DrawImage(AEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "GB")
								{
									DrawImage(GBFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "US")
								{
									DrawImage(USFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "UY")
								{
									DrawImage(UYFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "UZ")
								{
									DrawImage(UZFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VU")
								{
									DrawImage(VUFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VE")
								{
									DrawImage(VEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VN")
								{
									DrawImage(VNFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VG")
								{
									DrawImage(VGFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "VI")
								{
									DrawImage(VIFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "WF")
								{
									DrawImage(WFFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "EH")
								{
									DrawImage(EHFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "YE")
								{
									DrawImage(YEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ZM")
								{
									DrawImage(ZMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ZW")
								{
									DrawImage(ZWFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "AX")
								{
									DrawImage(AXFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IS")
								{
									DrawImage(ISFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IN")
								{
									DrawImage(INFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "ID")
								{
									DrawImage(IDFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IR")
								{
									DrawImage(IRFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IQ")
								{
									DrawImage(IQFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IE")
								{
									DrawImage(IEFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IM")
								{
									DrawImage(IMFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IL")
								{
									DrawImage(ILFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}
								if (AActor.Nation == "IT")
								{
									DrawImage(ITFLAG, Screen.X + 50, Screen.Y - 50, 20, 12);
								}

#pragma endregion
							}

						}
						// ESP Style2 Player Health--------------------------------------------------------------
						if (Setting::style2)
						{
							if (!AActor.IsBot)
							{
								if (hpbt == 0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

									if (AActor.Health > 70.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Green);
									}
									if (AActor.Health > 30.0 && AActor.Health <= 70.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Yellow);
									}
									if (AActor.Health > 0.0 && AActor.Health <= 30.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Red);

									}
								}
								else if (hpbt == 1)
								{
									if (!AActor.IsBot)
									{
										std::string hp100 = "HP : 100";
										std::string hp90 = "HP : 90";
										std::string hp80 = "HP : 80";
										std::string hp60 = "HP : 60";
										std::string hp40 = "HP : 40";
										std::string hp20 = "HP : 20";
										std::string hp10 = "HP : 10";
										std::string hp0 = "HP : 0";

										if (AActor.Health > 99.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp100, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 90.0 && AActor.Health <= 99.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp90, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 80.0 && AActor.Health <= 90.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp80, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 60.0 && AActor.Health <= 80.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp60, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 40.0 && AActor.Health <= 60.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp40, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 20.0 && AActor.Health <= 40.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp20, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 10.0 && AActor.Health <= 20.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp10, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}

										if (AActor.Health > 0.0 && AActor.Health <= 10.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp0, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 14, temp, Screen.X, (Screen.Y + Screen.Z), Colors::nam, true);
									}
									else
									{
										if (Setting::bothealth)
										{
											if (hpbt == 0)
											{
												DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

												if (AActor.Health > 70.0)
												{
													DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Green);
												}
												if (AActor.Health > 30.0 && AActor.Health <= 70.0)
												{
													DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Yellow);
												}
												if (AActor.Health > 0.0 && AActor.Health <= 30.0)
												{
													DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Red);

												}
											}
											else if (hpbt == 1)
											{
												std::string hp100 = "HP : 100";
												std::string hp90 = "HP : 90";
												std::string hp80 = "HP : 80";
												std::string hp60 = "HP : 60";
												std::string hp40 = "HP : 40";
												std::string hp20 = "HP : 20";
												std::string hp10 = "HP : 10";
												std::string hp0 = "HP : 0";

												if (AActor.Health > 99.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp100, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												if (AActor.Health > 90.0 && AActor.Health <= 99.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp90, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												if (AActor.Health > 80.0 && AActor.Health <= 90.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp80, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												if (AActor.Health > 60.0 && AActor.Health <= 80.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp60, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												if (AActor.Health > 40.0 && AActor.Health <= 60.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp40, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												if (AActor.Health > 20.0 && AActor.Health <= 40.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp20, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												if (AActor.Health > 10.0 && AActor.Health <= 20.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp10, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}

												if (AActor.Health > 0.0 && AActor.Health <= 10.0)
												{
													DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp0, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

												}
												//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 14, temp, Screen.X, (Screen.Y + Screen.Z), Colors::nam, true);
											}
										}
										else
										{

										}
									}
								}

								if (Setting::Flags && Setting::style2 && Setting::Flags)
								{
#pragma region DrowFlags

									if (AActor.Nation == "JM")
									{
										DrawImage(JMFLAG, Screen.X + 10, Screen.Y - 55, 20, 14);
									}
									if (AActor.Nation == "G1")
									{
										DrawImage(G1FLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AF")
									{
										DrawImage(AFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AL")
									{
										DrawImage(ALFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "DZ")
									{
										DrawImage(DZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AS")
									{
										DrawImage(ASFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AD")
									{
										DrawImage(ADFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AO")
									{
										DrawImage(AOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AI")
									{
										DrawImage(AIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AQ")
									{
										DrawImage(AQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AG")
									{
										DrawImage(AGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AR")
									{
										DrawImage(ARFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AM")
									{
										DrawImage(AMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AW")
									{
										DrawImage(AWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AU")
									{
										DrawImage(AUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AT")
									{
										DrawImage(ATFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AZ")
									{
										DrawImage(AZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BS")
									{
										DrawImage(BSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BH")
									{
										DrawImage(BHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BD")
									{
										DrawImage(BDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BB")
									{
										DrawImage(BBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BY")
									{
										DrawImage(BYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BE")
									{
										DrawImage(BEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BZ")
									{
										DrawImage(BZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BJ")
									{
										DrawImage(BJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BM")
									{
										DrawImage(BMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BT")
									{
										DrawImage(BTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BO")
									{
										DrawImage(BOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BQ")
									{
										DrawImage(BQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BA")
									{
										DrawImage(BAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BW")
									{
										DrawImage(BWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BV")
									{
										DrawImage(BVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BR")
									{
										DrawImage(BRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IO")
									{
										DrawImage(IOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BN")
									{
										DrawImage(BNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BG")
									{
										DrawImage(BGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BF")
									{
										DrawImage(BFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BI")
									{
										DrawImage(BIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CV")
									{
										DrawImage(CVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KH")
									{
										DrawImage(KHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CM")
									{
										DrawImage(CMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CA")
									{
										DrawImage(CAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KY")
									{
										DrawImage(KYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CF")
									{
										DrawImage(CFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TD")
									{
										DrawImage(TDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CL")
									{
										DrawImage(CLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CN")
									{
										DrawImage(CNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CX")
									{
										DrawImage(CXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CC")
									{
										DrawImage(CCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CO")
									{
										DrawImage(COFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KM")
									{
										DrawImage(KMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CD")
									{
										DrawImage(CDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CG")
									{
										DrawImage(CGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CK")
									{
										DrawImage(CKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CR")
									{
										DrawImage(CRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "HR")
									{
										DrawImage(HRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CU")
									{
										DrawImage(CUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CW")
									{
										DrawImage(CWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CY")
									{
										DrawImage(CYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CZ")
									{
										DrawImage(CZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CI")
									{
										DrawImage(CIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "DK")
									{
										DrawImage(DKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "DJ")
									{
										DrawImage(DJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "DM")
									{
										DrawImage(DMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "DO")
									{
										DrawImage(DOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "EC")
									{
										DrawImage(ECFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "EG")
									{
										DrawImage(EGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SV")
									{
										DrawImage(SVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GQ")
									{
										DrawImage(GQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ER")
									{
										DrawImage(ERFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "EE")
									{
										DrawImage(EEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SZ")
									{
										DrawImage(SZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ET")
									{
										DrawImage(ETFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "FK")
									{
										DrawImage(FKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "FO")
									{
										DrawImage(FOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "FJ")
									{
										DrawImage(FJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "FI")
									{
										DrawImage(FIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "FR")
									{
										DrawImage(FRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GF")
									{
										DrawImage(GFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PF")
									{
										DrawImage(PFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TF")
									{
										DrawImage(TFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GA")
									{
										DrawImage(GAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GM")
									{
										DrawImage(GMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GE")
									{
										DrawImage(GEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "DE")
									{
										DrawImage(DEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GH")
									{
										DrawImage(GHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GI")
									{
										DrawImage(GIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GR")
									{
										DrawImage(GRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GL")
									{
										DrawImage(GLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GD")
									{
										DrawImage(GDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GP")
									{
										DrawImage(GPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GU")
									{
										DrawImage(GUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GT")
									{
										DrawImage(GTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GG")
									{
										DrawImage(GGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GN")
									{
										DrawImage(GNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GW")
									{
										DrawImage(GWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GY")
									{
										DrawImage(GYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "HT")
									{
										DrawImage(HTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "HM")
									{
										DrawImage(HMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VA")
									{
										DrawImage(VAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "HN")
									{
										DrawImage(HNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "HK")
									{
										DrawImage(HKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "HU")
									{
										DrawImage(HUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "JP")
									{
										DrawImage(JPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "JE")
									{
										DrawImage(JEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "JO")
									{
										DrawImage(JOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KZ")
									{
										DrawImage(KZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KE")
									{
										DrawImage(KEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KI")
									{
										DrawImage(KIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KP")
									{
										DrawImage(KPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KR")
									{
										DrawImage(KRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KW")
									{
										DrawImage(KWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KG")
									{
										DrawImage(KGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LA")
									{
										DrawImage(LAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LV")
									{
										DrawImage(LVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LB")
									{
										DrawImage(LBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LS")
									{
										DrawImage(LSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LR")
									{
										DrawImage(LRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LY")
									{
										DrawImage(LYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LI")
									{
										DrawImage(LIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LT")
									{
										DrawImage(LTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LU")
									{
										DrawImage(LUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MO")
									{
										DrawImage(MOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MG")
									{
										DrawImage(MGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MW")
									{
										DrawImage(MWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MY")
									{
										DrawImage(MYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MV")
									{
										DrawImage(MVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ML")
									{
										DrawImage(MLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MT")
									{
										DrawImage(MTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MH")
									{
										DrawImage(MHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MQ")
									{
										DrawImage(MQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MR")
									{
										DrawImage(MRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MU")
									{
										DrawImage(MUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "YT")
									{
										DrawImage(YTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MX")
									{
										DrawImage(MXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "FM")
									{
										DrawImage(FMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MD")
									{
										DrawImage(MDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MC")
									{
										DrawImage(MCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MN")
									{
										DrawImage(MNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ME")
									{
										DrawImage(MEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MS")
									{
										DrawImage(MSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MA")
									{
										DrawImage(MAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MZ")
									{
										DrawImage(MZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MM")
									{
										DrawImage(MMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NA")
									{
										DrawImage(NAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NR")
									{
										DrawImage(NRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NP")
									{
										DrawImage(NPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NL")
									{
										DrawImage(NLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NC")
									{
										DrawImage(NCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NZ")
									{
										DrawImage(NZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NI")
									{
										DrawImage(NIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NE")
									{
										DrawImage(NEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NG")
									{
										DrawImage(NGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NU")
									{
										DrawImage(MUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NF")
									{
										DrawImage(NFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MP")
									{
										DrawImage(NPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "NO")
									{
										DrawImage(NOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "OM")
									{
										DrawImage(OMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PK")
									{
										DrawImage(PKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PW")
									{
										DrawImage(PWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PS")
									{
										DrawImage(PSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PA")
									{
										DrawImage(PAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PG")
									{
										DrawImage(PGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PY")
									{
										DrawImage(PYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PE")
									{
										DrawImage(PEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PH")
									{
										DrawImage(PHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PN")
									{
										DrawImage(PNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PL")
									{
										DrawImage(PLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PT")
									{
										DrawImage(PTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PR")
									{
										DrawImage(PRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "QA")
									{
										DrawImage(QAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MK")
									{
										DrawImage(MKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "RO")
									{
										DrawImage(ROFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "RU")
									{
										DrawImage(RUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "RW")
									{
										DrawImage(RWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "RE")
									{
										DrawImage(REFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "BL")
									{
										DrawImage(BLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SH")
									{
										DrawImage(SHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "KN")
									{
										DrawImage(KNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LC")
									{
										DrawImage(LCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "MF")
									{
										DrawImage(MFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "PM")
									{
										DrawImage(PMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VC")
									{
										DrawImage(VCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "WS")
									{
										DrawImage(WSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SM")
									{
										DrawImage(SMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ST")
									{
										DrawImage(STFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SA")
									{
										DrawImage(SAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SN")
									{
										DrawImage(SNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "RS")
									{
										DrawImage(RSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SC")
									{
										DrawImage(SCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SL")
									{
										DrawImage(SLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SG")
									{
										DrawImage(SGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SX")
									{
										DrawImage(SXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SK")
									{
										DrawImage(SKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SI")
									{
										DrawImage(SIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SB")
									{
										DrawImage(SBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SO")
									{
										DrawImage(SOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ZA")
									{
										DrawImage(ZAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GS")
									{
										DrawImage(GSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SS")
									{
										DrawImage(SSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ES")
									{
										DrawImage(ESFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "LK")
									{
										DrawImage(LKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SD")
									{
										DrawImage(SDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SR")
									{
										DrawImage(SRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SJ")
									{
										DrawImage(SJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SE")
									{
										DrawImage(SEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "CH")
									{
										DrawImage(CHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "SY")
									{
										DrawImage(SYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TW")
									{
										DrawImage(TWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TJ")
									{
										DrawImage(TJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TZ")
									{
										DrawImage(TZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TH")
									{
										DrawImage(THFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TL")
									{
										DrawImage(TLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TG")
									{
										DrawImage(TGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TK")
									{
										DrawImage(TKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TO")
									{
										DrawImage(TOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TT")
									{
										DrawImage(TTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TN")
									{
										DrawImage(TNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TR")
									{
										DrawImage(TRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TM")
									{
										DrawImage(TMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TC")
									{
										DrawImage(TCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "TV")
									{
										DrawImage(TVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "UG")
									{
										DrawImage(UGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "UA")
									{
										DrawImage(UAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AE")
									{
										DrawImage(AEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "GB")
									{
										DrawImage(GBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "US")
									{
										DrawImage(USFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "UY")
									{
										DrawImage(UYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "UZ")
									{
										DrawImage(UZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VU")
									{
										DrawImage(VUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VE")
									{
										DrawImage(VEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VN")
									{
										DrawImage(VNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VG")
									{
										DrawImage(VGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "VI")
									{
										DrawImage(VIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "WF")
									{
										DrawImage(WFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "EH")
									{
										DrawImage(EHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "YE")
									{
										DrawImage(YEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ZM")
									{
										DrawImage(ZMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ZW")
									{
										DrawImage(ZWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "AX")
									{
										DrawImage(AXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IS")
									{
										DrawImage(ISFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IN")
									{
										DrawImage(INFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "ID")
									{
										DrawImage(IDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IR")
									{
										DrawImage(IRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IQ")
									{
										DrawImage(IQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IE")
									{
										DrawImage(IEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IM")
									{
										DrawImage(IMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IL")
									{
										DrawImage(ILFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}
									if (AActor.Nation == "IT")
									{
										DrawImage(ITFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
									}

#pragma endregion

								}
							}
						}
						// ESP Style3 Player Health--------------------------------------------------------------
						if (Setting::style3)
						{
							if (!AActor.IsBot)
							{
								if (hpbt == 0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

									if (AActor.Health > 70.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Green);
									}
									if (AActor.Health > 30.0 && AActor.Health <= 70.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Yellow);
									}
									if (AActor.Health > 0.0 && AActor.Health <= 30.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Red);

									}
								}
								else if (hpbt == 1)
								{
									std::string hp100 = "HP : 100";
									std::string hp90 = "HP : 90";
									std::string hp80 = "HP : 80";
									std::string hp60 = "HP : 60";
									std::string hp40 = "HP : 40";
									std::string hp20 = "HP : 20";
									std::string hp10 = "HP : 10";
									std::string hp0 = "HP : 0";

									if (AActor.Health > 99.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp100, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									if (AActor.Health > 90.0 && AActor.Health <= 99.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp90, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									if (AActor.Health > 80.0 && AActor.Health <= 90.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp80, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									if (AActor.Health > 60.0 && AActor.Health <= 80.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp60, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									if (AActor.Health > 40.0 && AActor.Health <= 60.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp40, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									if (AActor.Health > 20.0 && AActor.Health <= 40.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp20, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									if (AActor.Health > 10.0 && AActor.Health <= 20.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp10, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}

									if (AActor.Health > 0.0 && AActor.Health <= 10.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp0, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

									}
									//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 14, temp, Screen.X, (Screen.Y + Screen.Z), Colors::nam, true);
								}
							}
							else
							{
								if (Setting::bothealth)
								{
									if (hpbt == 0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

										if (AActor.Health > 70.0)
										{
											DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Green);
										}
										if (AActor.Health > 30.0 && AActor.Health <= 70.0)
										{
											DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Yellow);
										}
										if (AActor.Health > 0.0 && AActor.Health <= 30.0)
										{
											DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Red);

										}
									}
									else if (hpbt == 1)
									{
										std::string hp100 = "HP : 100";
										std::string hp90 = "HP : 90";
										std::string hp80 = "HP : 80";
										std::string hp60 = "HP : 60";
										std::string hp40 = "HP : 40";
										std::string hp20 = "HP : 20";
										std::string hp10 = "HP : 10";
										std::string hp0 = "HP : 0";

										if (AActor.Health > 99.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp100, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 90.0 && AActor.Health <= 99.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp90, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 80.0 && AActor.Health <= 90.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp80, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 60.0 && AActor.Health <= 80.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp60, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 40.0 && AActor.Health <= 60.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp40, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 20.0 && AActor.Health <= 40.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp20, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										if (AActor.Health > 10.0 && AActor.Health <= 20.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp10, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}

										if (AActor.Health > 0.0 && AActor.Health <= 10.0)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, hp, hp0, Screen.X, (Screen.Y + 30 + Screen.Z), Colors::hpt, true);

										}
										//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 14, temp, Screen.X, (Screen.Y + Screen.Z), Colors::nam, true);
									}
								}
								else
								{

								}
							}

							if (Setting::Flags && Setting::style3 && Setting::Flags)
							{
#pragma region DrowFlags

								if (AActor.Nation == "JM")
								{
									DrawImage(JMFLAG, Screen.X + 10, Screen.Y - 55, 20, 14);
								}
								if (AActor.Nation == "G1")
								{
									DrawImage(G1FLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AF")
								{
									DrawImage(AFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AL")
								{
									DrawImage(ALFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "DZ")
								{
									DrawImage(DZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AS")
								{
									DrawImage(ASFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AD")
								{
									DrawImage(ADFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AO")
								{
									DrawImage(AOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AI")
								{
									DrawImage(AIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AQ")
								{
									DrawImage(AQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AG")
								{
									DrawImage(AGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AR")
								{
									DrawImage(ARFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AM")
								{
									DrawImage(AMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AW")
								{
									DrawImage(AWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AU")
								{
									DrawImage(AUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AT")
								{
									DrawImage(ATFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AZ")
								{
									DrawImage(AZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BS")
								{
									DrawImage(BSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BH")
								{
									DrawImage(BHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BD")
								{
									DrawImage(BDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BB")
								{
									DrawImage(BBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BY")
								{
									DrawImage(BYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BE")
								{
									DrawImage(BEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BZ")
								{
									DrawImage(BZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BJ")
								{
									DrawImage(BJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BM")
								{
									DrawImage(BMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BT")
								{
									DrawImage(BTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BO")
								{
									DrawImage(BOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BQ")
								{
									DrawImage(BQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BA")
								{
									DrawImage(BAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BW")
								{
									DrawImage(BWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BV")
								{
									DrawImage(BVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BR")
								{
									DrawImage(BRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IO")
								{
									DrawImage(IOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BN")
								{
									DrawImage(BNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BG")
								{
									DrawImage(BGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BF")
								{
									DrawImage(BFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BI")
								{
									DrawImage(BIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CV")
								{
									DrawImage(CVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KH")
								{
									DrawImage(KHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CM")
								{
									DrawImage(CMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CA")
								{
									DrawImage(CAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KY")
								{
									DrawImage(KYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CF")
								{
									DrawImage(CFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TD")
								{
									DrawImage(TDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CL")
								{
									DrawImage(CLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CN")
								{
									DrawImage(CNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CX")
								{
									DrawImage(CXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CC")
								{
									DrawImage(CCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CO")
								{
									DrawImage(COFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KM")
								{
									DrawImage(KMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CD")
								{
									DrawImage(CDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CG")
								{
									DrawImage(CGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CK")
								{
									DrawImage(CKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CR")
								{
									DrawImage(CRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "HR")
								{
									DrawImage(HRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CU")
								{
									DrawImage(CUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CW")
								{
									DrawImage(CWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CY")
								{
									DrawImage(CYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CZ")
								{
									DrawImage(CZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CI")
								{
									DrawImage(CIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "DK")
								{
									DrawImage(DKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "DJ")
								{
									DrawImage(DJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "DM")
								{
									DrawImage(DMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "DO")
								{
									DrawImage(DOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "EC")
								{
									DrawImage(ECFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "EG")
								{
									DrawImage(EGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SV")
								{
									DrawImage(SVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GQ")
								{
									DrawImage(GQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ER")
								{
									DrawImage(ERFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "EE")
								{
									DrawImage(EEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SZ")
								{
									DrawImage(SZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ET")
								{
									DrawImage(ETFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "FK")
								{
									DrawImage(FKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "FO")
								{
									DrawImage(FOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "FJ")
								{
									DrawImage(FJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "FI")
								{
									DrawImage(FIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "FR")
								{
									DrawImage(FRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GF")
								{
									DrawImage(GFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PF")
								{
									DrawImage(PFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TF")
								{
									DrawImage(TFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GA")
								{
									DrawImage(GAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GM")
								{
									DrawImage(GMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GE")
								{
									DrawImage(GEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "DE")
								{
									DrawImage(DEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GH")
								{
									DrawImage(GHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GI")
								{
									DrawImage(GIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GR")
								{
									DrawImage(GRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GL")
								{
									DrawImage(GLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GD")
								{
									DrawImage(GDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GP")
								{
									DrawImage(GPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GU")
								{
									DrawImage(GUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GT")
								{
									DrawImage(GTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GG")
								{
									DrawImage(GGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GN")
								{
									DrawImage(GNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GW")
								{
									DrawImage(GWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GY")
								{
									DrawImage(GYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "HT")
								{
									DrawImage(HTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "HM")
								{
									DrawImage(HMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VA")
								{
									DrawImage(VAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "HN")
								{
									DrawImage(HNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "HK")
								{
									DrawImage(HKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "HU")
								{
									DrawImage(HUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "JP")
								{
									DrawImage(JPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "JE")
								{
									DrawImage(JEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "JO")
								{
									DrawImage(JOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KZ")
								{
									DrawImage(KZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KE")
								{
									DrawImage(KEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KI")
								{
									DrawImage(KIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KP")
								{
									DrawImage(KPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KR")
								{
									DrawImage(KRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KW")
								{
									DrawImage(KWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KG")
								{
									DrawImage(KGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LA")
								{
									DrawImage(LAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LV")
								{
									DrawImage(LVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LB")
								{
									DrawImage(LBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LS")
								{
									DrawImage(LSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LR")
								{
									DrawImage(LRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LY")
								{
									DrawImage(LYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LI")
								{
									DrawImage(LIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LT")
								{
									DrawImage(LTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LU")
								{
									DrawImage(LUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MO")
								{
									DrawImage(MOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MG")
								{
									DrawImage(MGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MW")
								{
									DrawImage(MWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MY")
								{
									DrawImage(MYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MV")
								{
									DrawImage(MVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ML")
								{
									DrawImage(MLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MT")
								{
									DrawImage(MTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MH")
								{
									DrawImage(MHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MQ")
								{
									DrawImage(MQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MR")
								{
									DrawImage(MRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MU")
								{
									DrawImage(MUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "YT")
								{
									DrawImage(YTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MX")
								{
									DrawImage(MXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "FM")
								{
									DrawImage(FMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MD")
								{
									DrawImage(MDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MC")
								{
									DrawImage(MCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MN")
								{
									DrawImage(MNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ME")
								{
									DrawImage(MEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MS")
								{
									DrawImage(MSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MA")
								{
									DrawImage(MAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MZ")
								{
									DrawImage(MZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MM")
								{
									DrawImage(MMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NA")
								{
									DrawImage(NAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NR")
								{
									DrawImage(NRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NP")
								{
									DrawImage(NPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NL")
								{
									DrawImage(NLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NC")
								{
									DrawImage(NCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NZ")
								{
									DrawImage(NZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NI")
								{
									DrawImage(NIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NE")
								{
									DrawImage(NEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NG")
								{
									DrawImage(NGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NU")
								{
									DrawImage(MUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NF")
								{
									DrawImage(NFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MP")
								{
									DrawImage(NPFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "NO")
								{
									DrawImage(NOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "OM")
								{
									DrawImage(OMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PK")
								{
									DrawImage(PKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PW")
								{
									DrawImage(PWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PS")
								{
									DrawImage(PSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PA")
								{
									DrawImage(PAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PG")
								{
									DrawImage(PGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PY")
								{
									DrawImage(PYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PE")
								{
									DrawImage(PEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PH")
								{
									DrawImage(PHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PN")
								{
									DrawImage(PNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PL")
								{
									DrawImage(PLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PT")
								{
									DrawImage(PTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PR")
								{
									DrawImage(PRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "QA")
								{
									DrawImage(QAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MK")
								{
									DrawImage(MKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "RO")
								{
									DrawImage(ROFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "RU")
								{
									DrawImage(RUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "RW")
								{
									DrawImage(RWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "RE")
								{
									DrawImage(REFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "BL")
								{
									DrawImage(BLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SH")
								{
									DrawImage(SHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "KN")
								{
									DrawImage(KNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LC")
								{
									DrawImage(LCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "MF")
								{
									DrawImage(MFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "PM")
								{
									DrawImage(PMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VC")
								{
									DrawImage(VCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "WS")
								{
									DrawImage(WSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SM")
								{
									DrawImage(SMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ST")
								{
									DrawImage(STFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SA")
								{
									DrawImage(SAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SN")
								{
									DrawImage(SNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "RS")
								{
									DrawImage(RSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SC")
								{
									DrawImage(SCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SL")
								{
									DrawImage(SLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SG")
								{
									DrawImage(SGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SX")
								{
									DrawImage(SXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SK")
								{
									DrawImage(SKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SI")
								{
									DrawImage(SIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SB")
								{
									DrawImage(SBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SO")
								{
									DrawImage(SOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ZA")
								{
									DrawImage(ZAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GS")
								{
									DrawImage(GSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SS")
								{
									DrawImage(SSFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ES")
								{
									DrawImage(ESFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "LK")
								{
									DrawImage(LKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SD")
								{
									DrawImage(SDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SR")
								{
									DrawImage(SRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SJ")
								{
									DrawImage(SJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SE")
								{
									DrawImage(SEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "CH")
								{
									DrawImage(CHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "SY")
								{
									DrawImage(SYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TW")
								{
									DrawImage(TWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TJ")
								{
									DrawImage(TJFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TZ")
								{
									DrawImage(TZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TH")
								{
									DrawImage(THFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TL")
								{
									DrawImage(TLFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TG")
								{
									DrawImage(TGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TK")
								{
									DrawImage(TKFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TO")
								{
									DrawImage(TOFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TT")
								{
									DrawImage(TTFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TN")
								{
									DrawImage(TNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TR")
								{
									DrawImage(TRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TM")
								{
									DrawImage(TMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TC")
								{
									DrawImage(TCFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "TV")
								{
									DrawImage(TVFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "UG")
								{
									DrawImage(UGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "UA")
								{
									DrawImage(UAFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AE")
								{
									DrawImage(AEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "GB")
								{
									DrawImage(GBFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "US")
								{
									DrawImage(USFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "UY")
								{
									DrawImage(UYFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "UZ")
								{
									DrawImage(UZFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VU")
								{
									DrawImage(VUFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VE")
								{
									DrawImage(VEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VN")
								{
									DrawImage(VNFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VG")
								{
									DrawImage(VGFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "VI")
								{
									DrawImage(VIFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "WF")
								{
									DrawImage(WFFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "EH")
								{
									DrawImage(EHFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "YE")
								{
									DrawImage(YEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ZM")
								{
									DrawImage(ZMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ZW")
								{
									DrawImage(ZWFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "AX")
								{
									DrawImage(AXFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IS")
								{
									DrawImage(ISFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IN")
								{
									DrawImage(INFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "ID")
								{
									DrawImage(IDFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IR")
								{
									DrawImage(IRFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IQ")
								{
									DrawImage(IQFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IE")
								{
									DrawImage(IEFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IM")
								{
									DrawImage(IMFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IL")
								{
									DrawImage(ILFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}
								if (AActor.Nation == "IT")
								{
									DrawImage(ITFLAG, Screen.X - 10, Screen.Y - 55, 20, 12);
								}

#pragma endregion
							}


						}
					}





					if (Setting::pline)
					{
						// ESP Style1 Player Line--------------------------------------------------------------
						if (Setting::style1)
						{
							if (!AActor.IsBot)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 18, linescolors, Setting::plinesize);
							}
							else
							{
								if (Setting::botline)
								{
									DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 18, linescolors, Setting::plinesize);
								}
								else
								{

								}
							}

						}
						// ESP Style2 Player Line--------------------------------------------------------------
						if (Setting::style2)
						{
							if (!AActor.IsBot)
							{
								if (linne == 0)
								{
									DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, linescolors, Setting::plinesize);
								}
								else if (linne == 1)
								{
									DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, Colors::playerline, Setting::plinesize);
								}
							}
							else
							{
								if (Setting::botline)
								{
									if (linne == 0)
									{
										DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, linescolors, Setting::plinesize);
									}
									else if (linne == 1)
									{
										DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, Colors::playerline, Setting::plinesize);
									}
								}
							}
						}
						// ESP Style3 Player Line--------------------------------------------------------------
						if (Setting::style3)
						{
							if (!AActor.IsBot)
							{
								if (linne == 0)
								{
									DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, linescolors, Setting::plinesize);
								}
								else if (linne == 1)
								{
									DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, Colors::playerline, Setting::plinesize);
								}
							}
							else
							{
								if (Setting::botline)
								{
									if (linne == 0)
									{
										DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, linescolors, Setting::plinesize);
									}
									else if (linne == 1)
									{
										DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, Colors::playerline, Setting::plinesize);
									}
								}
							}
						}
					}

					if (Setting::pfullbox)
					{
						fullboxcolor = linescolors;

						DX11::ImGui_DX11::DrawRectangle(Screen.X - (Screen.Z / 4) - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, fullboxcolor, Setting::pfullboxsize);


					}

					if (Setting::pcorner)
					{
						if (!AActor.IsBot)
						{
							fullboxcolor = linescolors;
							cornerboxcolor = linescolors;
							if (boxe == 0)
							{
								DX11::ImGui_DX11::CornerBox(Screen.X - Screen.Z / 4 - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, Setting::pcornersize, popcorn / 2, cornerboxcolor);
							}
							else if (boxe == 1)
							{
								DX11::ImGui_DX11::DrawRectangle(Screen.X - (Screen.Z / 4) - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, fullboxcolor, Setting::pfullboxsize);
							}
						}
						else
						{
							if (Setting::botcorner)
							{
								fullboxcolor = linescolors;
								cornerboxcolor = linescolors;
								if (boxe == 0)
								{
									DX11::ImGui_DX11::CornerBox(Screen.X - Screen.Z / 4 - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, Setting::pcornersize, popcorn / 2, cornerboxcolor);
								}
								else if (boxe == 1)
								{
									DX11::ImGui_DX11::DrawRectangle(Screen.X - (Screen.Z / 4) - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, fullboxcolor, Setting::pfullboxsize);
								}
							}
							else
							{

							}
						}


					}

					if (Setting::Bone)
					{
						bonescolors = linescolors;
						if (Setting::playerBone)
						{
							HeadPos = AActor.HeadPos;
							HeadPos.Z += 7;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, HeadPos, Head, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.ChestPos, Chest, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.PelvisPos, Pelvis, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lSholderPos, lSholder, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rSholderPos, rSholder, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lElbowPos, lElbow, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rElbowPos, rElbow, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lWristPos, lWrist, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rWristPos, rWrist, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lThighPos, lThigh, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rThighPos, rThigh, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lKneePos, lKnee, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rKneePos, rKnee, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lAnklePos, lAnkle, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rAnklePos, rAnkle, &Distance)) continue;

							if (skelee == 0)
							{

								DX11::ImGui_DX11::DrawCircle(Head.X, Head.Y, Screen.Z / 12, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, Pelvis.X, Pelvis.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, lSholder.X, lSholder.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, rSholder.X, rSholder.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lSholder.X, lSholder.Y, lElbow.X, lElbow.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rSholder.X, rSholder.Y, rElbow.X, rElbow.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lElbow.X, lElbow.Y, lWrist.X, lWrist.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rElbow.X, rElbow.Y, rWrist.X, rWrist.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, lThigh.X, lThigh.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, rThigh.X, rThigh.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lThigh.X, lThigh.Y, lKnee.X, lKnee.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rThigh.X, rThigh.Y, rKnee.X, rKnee.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lKnee.X, lKnee.Y, lAnkle.X, lAnkle.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rKnee.X, rKnee.Y, rAnkle.X, rAnkle.Y, bonescolors, Setting::pbonesize);
							}
							else if (skelee == 1)
							{
								DX11::ImGui_DX11::DrawCircle(Head.X, Head.Y, Screen.Z / 12, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, Pelvis.X, Pelvis.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, lSholder.X, lSholder.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, rSholder.X, rSholder.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lSholder.X, lSholder.Y, lElbow.X, lElbow.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rSholder.X, rSholder.Y, rElbow.X, rElbow.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lElbow.X, lElbow.Y, lWrist.X, lWrist.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rElbow.X, rElbow.Y, rWrist.X, rWrist.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, lThigh.X, lThigh.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, rThigh.X, rThigh.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lThigh.X, lThigh.Y, lKnee.X, lKnee.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rThigh.X, rThigh.Y, rKnee.X, rKnee.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lKnee.X, lKnee.Y, lAnkle.X, lAnkle.Y, Colors::skelec, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rKnee.X, rKnee.Y, rAnkle.X, rAnkle.Y, Colors::skelec, Setting::pbonesize);
							}
						}
					}
				}
			}

			if (Setting::ShowMenu2)
			{
				DrawMenu2();
			}

			if (Setting::MagicBullet)
			{
				if (Data::AActorList.size() != 0)
				{
					if (Memory::IsMagicInitialized == false)
					{
						/*Text = "Magic ON And Refresh";
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, DX11Window::Width / 2, DX11Window::Height / 2, DX11::ImGui_DX11::Color::Red, true);*/
					}
				}
				if (Data::AActorList.size() == 0)
				{

				}
				/*if (Memory::IsMagicInitialized == false)
				{
					Text = "Magic ON And Refresh";
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, DX11Window::Width / 2, DX11Window::Height / 2, DX11::ImGui_DX11::Color::Red, true);
				}*/
			}

			if (Distance < 350)
			{
				int AliveTeamNum;
				int botcount;
				int playercount;
				if (Setting::TotalEnemy)
				{
					// ESP Style1 Total Enemy--------------------------------------------------------------
					if (Setting::style1)
					{
						//TotalEnemyStyle();
						if (Data::AActorList.size() != 0)
						{
							//AliveTeamNum = 0;
							botcount = 0;
							playercount = 0;
							for (int i = 0; i < Data::AActorList.size(); i++)
							{
								if (Data::AActorList[i].Name == " BOT ")
								{
									botcount = botcount + 1;
								}
								else
								{
									playercount = playercount + 1;
									//AliveTeamNum = AliveTeamNum + 1;
								}
							}
							//std::string Text = "Total Players : " + to_string(Data::AActorList.size()); +"  |";
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 20, Text, DX11Window::Width / 2 + 0, 50, DX11::ImGui_DX11::Color::White, true);

							Text = "|  Enemy : " + (std::to_string(playercount)) + "   |";
							//Text = "|  Enemy : " + (std::to_string(playercount)) + "   |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 - 51, 80, DX11::ImGui_DX11::Color::Orange, true);
							//Text = "|";
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 25, Text, DX11Window::Width / 2 + 0, 75, DX11::ImGui_DX11::Color::White, true);
							Text = "|  Bots : " + (std::to_string(botcount)) + "   |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 + 51, 80, DX11::ImGui_DX11::Color::Green, true);

						}
						if (Data::AActorList.size() == 0)
						{
							//ImGui::SetNextWindowSize(ImVec2(105.0f, 25.0f));
							//ImGui::SetCursorPos({ 50, 200 });
							////ImGui::SetWindowPos({ 50, 50 });
							//ImGuiIO& io = ImGui::GetIO();
							//ImGuiStyle & sstyle = ImGui::GetStyle();
							//ImVec4* colors = sstyle.Colors;

							//sstyle.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 230);
							//sstyle.Colors[ImGuiCol_Border] = ImColor(73, 255, 0, 255);
							//sstyle.WindowBorderSize = 0.9f;
							//ImGuiIO& Io = ImGui::GetIO();

							/*ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
							ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));*/
							//if (ImGui::Begin("ene", 0, Flags21))
							//{
							//	//std::string Text = ICON_FA_HOME "  Clean";
							//	std::string Text = "There is no enemy";

							//	

							//	ImGui::Text(Text.c_str());
							//	ImGui::End();
							//}
							Text = "|  There is no enemy  |";
							//Text = "|  THERE IS NO ENEMY  |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 - 0, 80, DX11::ImGui_DX11::Color::Green, true);
						}
					}
					// ESP Style2 Total Enemy--------------------------------------------------------------
					if (Setting::style2)
					{
						//TotalEnemyStyle();
						if (Data::AActorList.size() != 0)
						{
							//AliveTeamNum = 0;
							botcount = 0;
							playercount = 0;
							for (int i = 0; i < Data::AActorList.size(); i++)
							{
								if (Data::AActorList[i].Name == " BOT ")
								{
									botcount = botcount + 1;
								}
								else
								{
									playercount = playercount + 1;
									//AliveTeamNum = AliveTeamNum + 1;
								}
							}

							//std::string Text = "Total Players : " + to_string(Data::AActorList.size()); +"  |";
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 20, Text, DX11Window::Width / 2 + 0, 50, DX11::ImGui_DX11::Color::White, true);

							Text = "|  Enemy : " + (std::to_string(playercount)) + "   |";
							//Text = "|  Enemy : " + (std::to_string(playercount)) + "   |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 - 51, 90, DX11::ImGui_DX11::Color::Orange, true);
							//Text = "|";
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 25, Text, DX11Window::Width / 2 + 0, 75, DX11::ImGui_DX11::Color::White, true);
							Text = "|  Bots : " + (std::to_string(botcount)) + "   |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 + 51, 90, DX11::ImGui_DX11::Color::Green, true);
						}
						if (Data::AActorList.size() == 0)
						{
							//ImGui::SetNextWindowSize(ImVec2(105.0f, 25.0f));
							////ImGui::SetCursorPos({ 50, 200 });
							//ImGui::SetWindowPos({ 50, 50 });
							//ImGuiIO& io = ImGui::GetIO();
							//ImGuiStyle & sstyle = ImGui::GetStyle();
							//ImVec4* colors = sstyle.Colors;

							////sstyle.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 230);
							////sstyle.Colors[ImGuiCol_Border] = ImColor(73, 255, 0, 255);
							////sstyle.WindowBorderSize = 0.9f;
							//ImGuiIO& Io = ImGui::GetIO();

							////ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
							//ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
							//if (ImGui::Begin("ene", 0, Flags21))
							//{
							//	//std::string Text = ICON_FA_HOME "  Clean";
							//	std::string Text = "There is no enemy";

							//	

							//	ImGui::Text(Text.c_str());
							//	ImGui::End();
							//}
							Text = "|  There is no enemy  |";
							//Text = "|  THERE IS NO ENEMY  |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 - 0, 80, DX11::ImGui_DX11::Color::Green, true);
						}
					}
					// ESP Style3 Total Enemy--------------------------------------------------------------
					if (Setting::style3)
					{
						//TotalEnemyStyle();
						if (Data::AActorList.size() != 0)
						{
							//AliveTeamNum = 0;
							botcount = 0;
							playercount = 0;
							for (int i = 0; i < Data::AActorList.size(); i++)
							{
								if (Data::AActorList[i].Name == " BOT ")
								{
									botcount = botcount + 1;
								}
								else
								{
									playercount = playercount + 1;
									//AliveTeamNum = AliveTeamNum + 1;
								}
							}

							//std::string Text = "Total Players : " + to_string(Data::AActorList.size()); +"  |";
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 20, Text, DX11Window::Width / 2 + 0, 50, DX11::ImGui_DX11::Color::White, true);

							Text = "|  Enemy : " + (std::to_string(playercount)) + "   |";
							//Text = "|  Enemy : " + (std::to_string(playercount)) + "   |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 - 51, 80, DX11::ImGui_DX11::Color::Orange, true);
							//Text = "|";
							//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 25, Text, DX11Window::Width / 2 + 0, 75, DX11::ImGui_DX11::Color::White, true);
							Text = "|  Bots : " + (std::to_string(botcount)) + "   |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 + 51, 80, DX11::ImGui_DX11::Color::Green, true);
						}
						if (Data::AActorList.size() == 0)
						{
							//ImGui::SetNextWindowSize(ImVec2(105.0f, 25.0f));
							////ImGui::SetCursorPos({ 50, 200 });
							//ImGui::SetWindowPos({ 50, 50 });
							//ImGuiIO& io = ImGui::GetIO();
							//ImGuiStyle & sstyle = ImGui::GetStyle();
							//ImVec4* colors = sstyle.Colors;

							////sstyle.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 230);
							////sstyle.Colors[ImGuiCol_Border] = ImColor(73, 255, 0, 255);
							////sstyle.WindowBorderSize = 0.9f;
							//ImGuiIO& Io = ImGui::GetIO();

							////ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
							//ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
							//if (ImGui::Begin("ene", 0, Flags21))
							//{
							//	//std::string Text = ICON_FA_HOME "  Clean";
							//	std::string Text = "There is no enemy";

							//	

							//	ImGui::Text(Text.c_str());
							//	ImGui::End();
							//}
							Text = "|  There is no enemy  |";
							//Text = "|  THERE IS NO ENEMY  |";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 23, Text, DX11Window::Width / 2 - 0, 80, DX11::ImGui_DX11::Color::Green, true);
						}
					}
				}

				if (Setting::TotalEnemy)
				{
					if (watermark)
					{
						if (Emulator::IsGameLoop)
						{
							/*Text = "   Emulator : Gameloop & Time:";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, Text, 90, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, tim, 260, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);*/

						}

						if (Emulator::IsSmartGaGa)
						{
							/*Text = "   Emulator : SmartGaGA & Time:";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 15, Text, 90, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 15, tim, 260, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);*/

						}
					}
					//if (Data::AActorList.size() != 0)
					//{
					//	ImGui::SetNextWindowSize(ImVec2(105.0f, 35.0f));
					//	/*ImGui::SetCursorPos({ 50, 200 });
					//	ImGui::SetWindowPos({ 50, 50 });
					//	ImGuiIO& io = ImGui::GetIO();*/
					//	ImGuiStyle& sstyle = ImGui::GetStyle();
					//	ImVec4* colors = sstyle.Colors;

					//	//sstyle.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 230);
					//	//sstyle.Colors[ImGuiCol_Border] = ImColor(73, 255, 0, 255);
					//	//sstyle.WindowBorderSize = 1.0f;
					//	ImGuiIO& Io = ImGui::GetIO();

					//	//ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
					//	ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
					//	if (ImGui::Begin("ene", 0, Flags21))
					//	{
					//		std::string Text = " Total Enemy : ";
					//		Text.append(std::to_string((Data::AActorList.size())));

					//		//Text = " Enemy Near : " + to_string(Data::AActorList.size());
					//		//DX11::ImGui_DX11::DrawFilledRectangle(DX11Window::Width / 2 + 66, DX11Window::Height / 100 * 18.0f, 140, 22, ImColor(1.0f, 0.f, 0.f, 0.600f));
					//		//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 17, Text, DX11Window::Width / 2, DX11Window::Height / 100 * 14.5f, DX11::ImGui_DX11::Color::enem, true);

					//		ImGui::Text(Text.c_str());
					//		ImGui::End();
					//	}
					//}
					//if (Data::AActorList.size() == 0)
					//{
					//	ImGui::SetNextWindowSize(ImVec2(110, 35.0f));
					//	/*ImGui::SetCursorPos({ 50, 200 });
					//	ImGui::SetWindowPos({ 50, 50 });
					//	ImGuiIO& io = ImGui::GetIO();*/
					//	ImGuiStyle& sstyle = ImGui::GetStyle();
					//	ImVec4* colors = sstyle.Colors;

					//	//sstyle.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 160);
					//	//sstyle.Colors[ImGuiCol_Border] = ImColor(255, 0, 0, 255);
					//	//sstyle.WindowBorderSize = 1.0f;
					//	ImGuiIO& Io = ImGui::GetIO();

					//	//ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
					//	ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
					//	if (ImGui::Begin("ene", 0, Flags21))
					//	{
					//		//std::string Text = ICON_FA_HOME "NO ONE ENEMY";
					//		std::string Text = " There is no enemy ";

					//		//VECTOR3 screen;
					//		//int distance;
					//		//Memory::RestoreHook();
					//		//Memory::IsMagicInitialized = false;

					//		/*	Text.append(std::to_string((Data::AActorList.size())));*/

					//			//Text = " Enemy Near : " + to_string(Data::AActorList.size());
					//			//DX11::ImGui_DX11::DrawFilledRectangle(DX11Window::Width / 2 + 66, DX11Window::Height / 100 * 18.0f, 140, 22, ImColor(1.0f, 0.f, 0.f, 0.600f));
					//			//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 17, Text, DX11Window::Width / 2, DX11Window::Height / 100 * 14.5f, DX11::ImGui_DX11::Color::enem, true);

					//		ImGui::Text(Text.c_str());
					//		ImGui::End();
					//	}
					//}
				}

				if (Setting::MAgicline)
				{
					for (int i = 0; i < Data::AActorList.size(); i++)
					{


						if (!Algorithm::WorldToScreen(Data::AActorList[i].Position, Screen, &Distance, ViewMatrix)) continue;
						if (currIndex == i)
						{
							DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, DX11Window::Height / 2, Screen.X, Screen.Y - 10, Colors::magicline, 1.2f);
							//DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, DX11Window::Height / 2, Screen.X, Screen.Y - 10, Colors::playerline, 1.0f);
						}
					}


				}
			}

			if (Setting::aimbotposition)
			{
				if (Setting::curraim == 0)
				{
					//Text = "Head";
					//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 18, Text, DX11Window::Width / 2 + 130, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Red, true);

					//Text = "Press (T) Change Aim Position :";
					//Text = "Press (T) Change Current Aim Position : Head";

					Text = "";
					//Text = "Press (T) Change | Aim Position : Head";
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 20, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Red, true);

				}
				if (Setting::curraim == 1)
				{
					//Text = "Body";
					//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 18, Text, DX11Window::Width / 2 + 130, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);

					//Text = "Press (T) Change Aim Position :";
					//Text = "Press (T) Change Current Aim Position : Body";

					Text = "";
					//Text = "Press (T) Change | Aim Position : Body";
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 20, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);

				}
			}

			if (Setting::fovcircle)
			{
				if (Data::AActorList.size() != 0)
				{
					//DrawCircle(OverlayWindowWidth / 2, OverlayScreenHeight / 2, 100.0f/*FovRadius*/
					DX11::ImGui_DX11::DrawCircle(DX11Window::Width / 2, DX11Window::Height / 2, Setting::fovcircleredus, Colors::fovcirclecolor);
				}
			}

			if (Setting::graned)
			{
				for (Item& Item : Data::ItemList)
				{
					if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

					std::string	Textt = Item.Name;// +" " + "(" + to_string(Distance) + "m)";
					//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
					//if (Setting::grw)
					//{
					//	if (Setting::Esp_Item_Grenade && Item.Name == "Grenade")
					//	{

					//		////DX11::ImGui_DX11::DrawFilledRect(Screen.X - 15, Screen.Y, 30, 15, ImColor(0.000f, 0.00f, 0.00f, 0.250f));
					//		DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					//		//DX11::ImGui_DX11::CornerBox(Screen.X - 15, Screen.Y, 30, 15, 0.9f, popcorn2, DX11::ImGui_DX11::Color::Red);

					//	}
					//}

					if (Setting::Esp_Item_Smoke && Item.Name == "Smoke")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Smoke, true); //Y, ImColor(Setting::Esp_Item_Smoke_Color[0], Setting::Esp_Item_Smoke_Color[1], Setting::Esp_Item_Smoke_Color[2], Setting::Esp_Item_Smoke_Color[3]), true);
					}

					if (Setting::Esp_Item_Molotof && Item.Name == "Molotof")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Molotof, true); //Y, ImColor(Setting::Esp_Item_Molotof_Color[0], Setting::Esp_Item_Molotof_Color[1], Setting::Esp_Item_Molotof_Color[2], Setting::Esp_Item_Molotof_Color[3]), true);
					}

					if (Setting::molow)
					{
						if (Setting::Esp_Item_Molotof && Item.Name == "Burn")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Burn, true);
						}
					}

					if (Setting::Esp_Item_Molotof && Item.Name == "Grenade")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Grenade, true);
					}

				}
			}

			if (!Setting::fightmode)
			{


				if (Setting::deadbox)
				{
					ImColor color;
					for (int i = 0; i < g_pEsp->lootboxr.size(); i++)
					{

						if (!Algorithm::WorldToScreen(g_pEsp->lootboxr[i].Position, Screen, &Distance, ViewMatrix)) continue;
						if (Distance < 80)
						{
							std::string dead = "Loot-Box   " + to_string(Distance) + "M";

							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, dead, Screen.X, Screen.Y + 13, Colors::deadbox, false);
							if (Setting::playerdeadbox)
							{


								for (int k = 0; k < g_pEsp->lootboxr[i].boxitem.size(); k++)
								{
									color = g_pEsp->lootboxr[i].boxitem[k].colorcod;
									std::string text = g_pEsp->lootboxr[i].boxitem[k].Displayname;


									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, text, Screen.X, Screen.Y - 15 * (k), g_pEsp->lootboxr[i].boxitem[k].colorcod, false);

									if (Setting::bg)
									{
										DX11::ImGui_DX11::DrawFilledRect(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, ImColor(0.000f, 0.00f, 0.00f, 0.200f));


									}
									if (Setting::itemrect)
									{
										if (Setting::redioption == 1)
										{
											DX11::ImGui_DX11::CornerBox(Screen.X - 10, Screen.Y - 15 * (k), 110, 15, 0.6f, popcorn2, Colors::bgcorner);

										}

										if (Setting::redioption == 2)
										{
											DX11::ImGui_DX11::DrawRectangle(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, Colors::bgcorner, 0.6f);

										}


									}

								}

							}
						}
					}


				}

				if (Setting::impitems)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

						Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";
						std::string air = Item.Name + " " + to_string(Distance) + "M";
						if (Setting::Esp_Item_AKM && Item.Name == "AKM")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon7mm, true);
						}
						if (Setting::Esp_Item_SCARL && Item.Name == "SCAR-L")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}
						if (Setting::Esp_Item_M416 && Item.Name == "M416")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}
						if (Setting::Esp_Item_M24 && Item.Name == "M24")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::M24, true);
						}
						if (Setting::Esp_Item_Kar98k && Item.Name == "Kar98k")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::kar98, true);
						}
						if (Setting::plan && Item.Name == "Airplan")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, Setting::plancolor, true);
						}
						if (Setting::Esp_Item_DP28 && Item.Name == "DP28")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon7mm, true);
						}
						if (Setting::Esp_Item_M762 && Item.Name == "M762")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon7mm, true);
						}
						if (Setting::Esp_Item_Awm && Item.Name == "AWM")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, weapon::AWM, true);
						}
						if (Setting::Esp_Item_FlareGun && Item.Name == "Flare Gun")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, weapon::Flaregun, true);
						}
						if (Setting::Esp_Item_Flare && Item.Name == "Flare")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, weapon::Flare, true);
						}
						if (Setting::Esp_Item_AirDrop && Item.Name == "Air Drop")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, weapon::Airdrop, true);
						}
						if (Setting::Esp_Item_Armor3 && Item.Name == "Armor Lv.3")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, Colors::armer, true);
						}
						if (Setting::Esp_Item_Bag3 && Item.Name == "Bag Lv.3")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, Colors::bag, true);
						}
						if (Setting::Esp_Item_Helmet3 && Item.Name == "Helmet Lv.3")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, Colors::helmat, true);
						}
						if (Setting::Esp_Item_Helmet3 && Item.Name == "300Magnum")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, weapon::AWMimmo, true);
						}
						if (Setting::deadbox && Item.Name == "Dead-Box")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, Colors::deadbox, true);
						}
					}
				}

				if (Setting::healthitem)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

						Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";

						if (Setting::Esp_Item_MedKit && Item.Name == "Med Kit")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Madkit, true);
						}

						if (Setting::Esp_Item_FirstAidKit && Item.Name == "First Aid Kit")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Firstkit, true);
						}

						if (Setting::Esp_Item_Painkiller && Item.Name == "Painkiller")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Painkiller, true);
						}

						if (Setting::Esp_Item_EnergyDrink && Item.Name == "Energy Drink")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::EnergyDrink, true);
						}

						if (Setting::Esp_Item_AdrenalineSyringe && Item.Name == "Adrenaline Syringe")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::AdrenalineSyringe, true);
						}

					}
				}

				if (Setting::scope)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

						Text = Item.Name;// +" " + to_string(Distance) + " M";
						if (Setting::Esp_Item_x2 && Item.Name == "2x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::scope2x, true);
						}

						if (Setting::Esp_Item_x3 && Item.Name == "3x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::scope3x, true);
						}

						if (Setting::Esp_Item_x4 && Item.Name == "4x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::scope4x, true);
						}

						if (Setting::Esp_Item_x6 && Item.Name == "6x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::scope6x, true);
						}

						if (Setting::Esp_Item_x8 && Item.Name == "8x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::scope8x, true);
						}
					}

				}

				if (Setting::allitemss)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

						Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";

						if (Setting::Esp_Item_Bag1 && Item.Name == "Bag L.1")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::bag, true);
						}

						if (Setting::Esp_Item_Bag2 && Item.Name == "Bag L.2")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::bag, true);
						}

						if (Setting::Esp_Item_Helmet1 && Item.Name == "Helmet L.1")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::helmat, true);
						}

						if (Setting::Esp_Item_Helmet2 && Item.Name == "Helmet L.2")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::helmat, true);
						}

						if (Setting::Esp_Item_Armor1 && Item.Name == "Armor L.1")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, Colors::armer, true);
						}

						if (Setting::Esp_Item_Armor2 && Item.Name == "Armor L.2")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::armer, true);
						}


						if (Setting::Esp_Item_Mk47Mutant && Item.Name == "Mk47 Mutant")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon7mm, true);
						}

						if (Setting::Esp_Item_M16A4 && Item.Name == "M16A4")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}

						if (Setting::Esp_Item_G36C && Item.Name == "G36C")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}

						if (Setting::Esp_Item_QBZ && Item.Name == "QBZ")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}

						if (Setting::Esp_Item_QBU && Item.Name == "QBU")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}

						if (Setting::Esp_Item_SLR && Item.Name == "SLR")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon7mm, true);
						}

						if (Setting::Esp_Item_Mini14 && Item.Name == "Mini-14")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}



						if (Setting::Esp_Item_PP19 && Item.Name == "PP19")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}

						if (Setting::Esp_Item_TommyGun && Item.Name == "Tommy Gun")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}

						if (Setting::Esp_Item_MP5K && Item.Name == "MP5K")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}

						if (Setting::Esp_Item_UMP9 && Item.Name == "UMP9")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}

						if (Setting::Esp_Item_Vector && Item.Name == "Vector")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}

						if (Setting::Esp_Item_Uzi && Item.Name == "Uzi")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}

						if (Setting::Esp_Item_762mm && Item.Name == "7.62mm")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::ammo7_62mm, true);
						}

						if (Setting::Esp_Item_556mm && Item.Name == "5.56mm")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::ammo5_56mm, true);
						}

						if (Setting::Esp_Item_9mm && Item.Name == "9mm")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::ammo9mm, true);
						}

						if (Setting::Esp_Item_45ACP && Item.Name == "45ACP")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::ammo45ACP, true);
						}

						if (Setting::Esp_Item_Holo && Item.Name == "Holo")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
						}
						if (Setting::Esp_Item_M249 && Item.Name == "M249")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon5mm, true);
						}

						if (Setting::Esp_Item_Mk12 && Item.Name == "MK12")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::weapon7mm, true);
						}


					}
				}

				if (Setting::Vehicle)
				{
					if (Setting::style1)
					{
						for (Vehicle& Vehicle : Data::VehicleList)
						{
							if (!Algorithm::WorldToScreen(Vehicle.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Distance < 10)
							{

							}
							else
							{
								if (Distance < 500)
								{
									Text = Vehicle.Name + "  " + to_string(Distance) + "M";

									std::string hp;
									if (Setting::hp)
									{
										hp.append("Gas : ").append(std::to_string((int)(Vehicle.oil)).append(" - HP : ").append(std::to_string((int)(Vehicle.hp)).append("")));
										if (Setting::style1)
										{
											DX11::ImGui_DX11::DrawBlood(Screen.X - 40, Screen.Y + 25, 80.0f, 2.0f, Vehicle.hp);
											DX11::ImGui_DX11::DrawBlood(Screen.X - 40, Screen.Y + 30, 80.0f, 3.0f, Vehicle.oil);
										}
									}

									if (Setting::feul)
									{
										//DX11::ImGui_DX11::DrawBlood(Screen.X - 30, Screen.Y + 17, 20.00f, 2.0, Vehicle.oil);
									}

									if (Setting::vahicle_item && Vehicle.Name == "BRDM")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Scooter")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Motorcycle")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Snowmobile")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Tuk")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Buggy")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Sportsa")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Sports")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Dacia")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Rony")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "UAZ")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Minibus")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "PG117")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Aquarail")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Plane")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "UTV (Utility Terrain Vehicle)")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Monstar Truck")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Coupe-RB_New Dacia")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
								}
							}
						}
					}
					if (Setting::style2)
					{
						for (Vehicle& Vehicle : Data::VehicleList)
						{
							if (!Algorithm::WorldToScreen(Vehicle.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Distance < 10)
							{

							}
							else
							{
								if (Distance < 500)
								{
									Text = Vehicle.Name + "  " + to_string(Distance) + "M";

									std::string hp;
									if (Setting::hp)
									{
										hp.append("Gas : ").append(std::to_string((int)(Vehicle.oil)).append(" - HP : ").append(std::to_string((int)(Vehicle.hp)).append("")));
										if (Setting::style2)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, hp, Screen.X - 0, Screen.Y + 20, DX11::ImGui_DX11::Color::Yellow, true);
										}
									}
									if (Setting::feul)
									{
										//DX11::ImGui_DX11::DrawBlood(Screen.X - 30, Screen.Y + 17, 20.00f, 2.0, Vehicle.oil);
									}
									if (Setting::vahicle_item && Vehicle.Name == "BRDM")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Scooter")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Motorcycle")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Snowmobile")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Tuk")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Buggy")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Sportsa")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Sports")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Dacia")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Rony")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "UAZ")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Minibus")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "PG117")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Aquarail")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Plane")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "UTV (Utility Terrain Vehicle)")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Monstar Truck")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Coupe-RB_New Dacia")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);

										}
									}
								}
							}
						}
					}
					if (Setting::style3)
					{
						for (Vehicle& Vehicle : Data::VehicleList)
						{
							if (!Algorithm::WorldToScreen(Vehicle.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Distance < 10)
							{

							}
							else
							{
								if (Distance < 500)
								{
									Text = Vehicle.Name + "  " + to_string(Distance) + "M";

									std::string hp;
									if (Setting::hp)
									{
										hp.append("Gas : ").append(std::to_string((int)(Vehicle.oil)).append(" - HP : ").append(std::to_string((int)(Vehicle.hp)).append("")));
										if (Setting::style3)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 17, hp, Screen.X - 0, Screen.Y + 20, Colors::vehicle, true);
										}
									}
									if (Setting::feul)
									{
										//DX11::ImGui_DX11::DrawBlood(Screen.X - 30, Screen.Y + 17, 20.00f, 2.0, Vehicle.oil);
									}
									if (Setting::vahicle_item && Vehicle.Name == "BRDM")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Scooter")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Motorcycle")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Snowmobile")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Tuk")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Buggy")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Sportsa")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Sports")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Dacia")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Rony")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "UAZ")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Minibus")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "PG117")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Aquarail")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::Esp_Item_AKM && Vehicle.Name == "Plane")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "UTV (Utility Terrain Vehicle)")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Monstar Truck")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
									if (Setting::vahicle_item && Vehicle.Name == "Coupe-RB_New Dacia")
									{
										if (Vehicle.driving)
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

										}
										else
										{
											DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

										}
									}
								}
							}
						}
					}
				}

			}
		}

		ImGui::Render();
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
		DX11::EndDraw();

		//std::this_thread::sleep_for(std::chrono::milliseconds(10));

		if (Esp::EspThread)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		}

	}

}