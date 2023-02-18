#include "Main.h"
#include "Includes.h"
#include "Utility.h"
#include "Driver.h"
#include "DX11Window.h"
#include "DX11.h"
#include "Data.h"
#include "Esp.h"
#include "Memory.h"
#include "Aimbot.h"
#include "loadDrv.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"
//#include "termcolor.hpp"
#include "ShObjIdl.h"
#include "xorstr.hpp"
//#include <termcolor.hpp>
#include "Console Colour\termcolor.hpp"
#include <tchar.h>
#include "Discord.h"

Discord* Discord_Status;

#define XTREME_DRIVER_FILE  "C:\\Windows\\OMARhkdriver.sys"
#define XTREME_SERVICE_NAME "OMARhkdriver"
#define XTREME_DEVICE_NAME  "\\Device\\OMARhkdriver"
DRIVER* m_drv = nullptr;

//inline bool FileExist(const std::string& name) {
//	if (FILE* file = fopen(name.c_str(), "r")) {
//		fclose(file);
//		return true;
//	}
//	else {
//		return false;
//	}
//}

inline bool existsDrv(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}
bool WriteDataToFile(const UCHAR pBuffer[], const DWORD dwSize, const std::string& strFileName, const DWORD dwCreationDisposition = CREATE_NEW)
{
	const auto hFile = CreateFileA(strFileName.c_str(), GENERIC_READ | GENERIC_WRITE, 0, nullptr, dwCreationDisposition, FILE_ATTRIBUTE_NORMAL, nullptr);
	if (hFile == INVALID_HANDLE_VALUE) return false;
	DWORD dwNumberOfBytesWritten = NULL;
	const auto bWriteFile = WriteFile(hFile, pBuffer, dwSize, &dwNumberOfBytesWritten, nullptr);
	CloseHandle(hFile);
	return !(!bWriteFile || dwNumberOfBytesWritten != dwSize);
}

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam);

//Opacity and colour===============================================================
void CustomImGUIStyle()
{
	ImGuiIO& io = ImGui::GetIO();
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(4, 9);
	style.WindowRounding = 10.0f;
	style.FramePadding = ImVec2(3, 3);
	style.FrameRounding = 5.0f; // Make all elements (checkboxes, etc) circles
	style.ItemSpacing = ImVec2(8, 4);
	style.ItemInnerSpacing = ImVec2(1, 6);
	style.CellPadding = ImVec2(5, 5);
	style.IndentSpacing = 23.0f;
	style.ScrollbarSize = 11.0f;
	style.ScrollbarRounding = 9.0f;
	style.GrabMinSize = 5.0f; // Make grab a circle
	style.GrabRounding = 3.0f;
	style.PopupRounding = 2.f;
	style.Alpha = 1.0;
	style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
	style.TouchExtraPadding = ImVec2(0, 0);
	style.TabRounding = 7.0f;

	style.ChildRounding = 7.0f;

	style.ButtonTextAlign = ImVec2(0.50f, 0.50f);

	style.ChildBorderSize = 0.100f;

	style.DisplayWindowPadding = ImVec2(22, 22);
	style.DisplaySafeAreaPadding = ImVec2(4, 4);
	style.AntiAliasedLines = true;
	style.CurveTessellationTol = 1.f;
	style.TabBorderSize = 0.000f;
	ImVec4* colors = style.Colors;

	//Window Opacity and colour===============================================================
	style.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 150);
	style.Colors[ImGuiCol_Border] = ImColor(0, 110, 255, 250);
	//Main Window Back Color============================================================
	//style.Colors[ImGuiCol_ChildBg] = ImVec4(5.03399e-07, 4.41989e-07, 1e-06, 0.84530);
	style.Colors[ImGuiCol_ChildBg] = ImColor(0, 0, 0, 75);

	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 1.0f);
	style.Colors[ImGuiCol_FrameBg] = ImColor(0, 110, 255, 100);
	style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 110, 255, 250);
	style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 140, 255, 250);

	//Title Bar Color============================================================
	style.Colors[ImGuiCol_TitleBg] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_TitleBgActive] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(0, 0, 255, 255);

	//Menu Mix Color============================================================
	style.Colors[ImGuiCol_CheckMark] = ImColor(253, 149, 0);
	style.Colors[ImGuiCol_MenuBarBg] = ImColor(253, 149, 0);
	style.Colors[ImGuiCol_SliderGrab] = ImColor(253, 149, 0);
	style.Colors[ImGuiCol_SliderGrabActive] = ImColor(253, 149, 0);
	style.Colors[ImGuiCol_Text] = ImVec4(255, 255, 255, 255);

	style.Colors[ImGuiCol_Header] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_HeaderHovered] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_HeaderActive] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_TabHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_SliderGrabActive] = ImColor(66, 66, 66, 250);

	//Login Menu + Main Menu Button Color============================================================
	style.Colors[ImGuiCol_Button] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_ButtonHovered] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_ButtonActive] = ImColor(0, 0, 255, 255);

	colors[ImGuiCol_Header] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_HeaderHovered] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_HeaderActive] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_SeparatorHovered] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_SeparatorActive] = ImColor(20, 0, 255, 255);
	colors[ImGuiCol_ResizeGrip] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_ResizeGripHovered] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_ResizeGripActive] = ImColor(0, 0, 255, 255);

	style.Colors[ImGuiCol_PlotHistogram] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_PlotLines] = ImColor(0, 0, 255, 255);

	colors[ImGuiCol_PlotHistogram] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_PlotHistogramHovered] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_PlotLinesHovered] = ImColor(0, 0, 255, 255);
	colors[ImGuiCol_PlotLines] = ImColor(0, 0, 255, 255);

	style.Colors[ImGuiCol_Tab] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_TabHovered] = ImColor(0, 0, 255, 255);
	style.Colors[ImGuiCol_TabActive] = ImColor(0, 0, 255, 255);
	//colors[ImGuiCol_TabUnfocused] = ImVec4(0.038f, 0.050f, 0.136f, 1.000f);

	colors[ImGuiCol_TabUnfocusedActive] = ImColor(0, 0, 255, 255);
	//colors[ImGuiCol_TextSelectedBg] = ImVec4(0.98f, 0.26f, 0.26f, 0.35f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.0f, 0.0f, 0.100f, 0.600f);
	colors[ImGuiCol_NavHighlight] = ImColor(0, 0, 255, 255);
	//style.Colors[ImGuiCol_Node]
}


int main()
{
	Discord_Status->Initialize();
	Discord_Status->Update();

	int choice = 2;
	std::cout << termcolor::bright_blue << R"(

          
           /$$$$$$$   /$$$$$$  /$$$$$$$  /$$        /$$$$$$        /$$    /$$ /$$$$$$ /$$$$$$$ 
          | $$__  $$ /$$__  $$| $$__  $$| $$       /$$__  $$      | $$   | $$|_  $$_/| $$__  $$
          | $$  \ $$| $$  \ $$| $$  \ $$| $$      | $$  \ $$      | $$   | $$  | $$  | $$  \ $$
          | $$$$$$$/| $$$$$$$$| $$$$$$$ | $$      | $$  | $$      |  $$ / $$/  | $$  | $$$$$$$/
          | $$____/ | $$__  $$| $$__  $$| $$      | $$  | $$       \  $$ $$/   | $$  | $$____/ 
          | $$      | $$  | $$| $$  \ $$| $$      | $$  | $$        \  $$$/    | $$  | $$      
          | $$      | $$  | $$| $$$$$$$/| $$$$$$$$|  $$$$$$/         \  $/    /$$$$$$| $$      
          |__/      |__/  |__/|_______/ |________/ \______/           \_/    |______/|__/      
                                                                                     
                        
                                                                                                          
                                                                                                          )" << '\n';

	Sleep(200);
	std::cout << termcolor::bright_red << "\n                                                 ";
	Sleep(50);
	std::cout << ("D"); Sleep(50);
	std::cout << ("e"); Sleep(50);
	std::cout << ("v"); Sleep(50);
	std::cout << ("e"); Sleep(50);
	std::cout << ("l"); Sleep(50);
	std::cout << ("o"); Sleep(50);
	std::cout << ("p"); Sleep(50);
	std::cout << ("e"); Sleep(50);
	std::cout << ("d"); Sleep(50);
	std::cout << (" "); Sleep(50);
	std::cout << (""); Sleep(50);
	std::cout << ("B"); Sleep(50);
	std::cout << ("y"); Sleep(50);
	std::cout << (" "); Sleep(50);
	std::cout << (""); Sleep(50);
	std::cout << ("O"); Sleep(50);
	std::cout << ("M"); Sleep(50);
	std::cout << ("A"); Sleep(50);
	std::cout << ("R\n"); Sleep(200);

	//std::cout << "\n ";
	std::cout << termcolor::bright_blue << "\n";
	Sleep(20);
	std::cout << (" W"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("l"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("m"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("B"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("k"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("("); Sleep(20);
	std::cout << ("P"); Sleep(20);
	std::cout << ("A"); Sleep(20);
	std::cout << ("B"); Sleep(20);
	std::cout << ("L"); Sleep(20);
	std::cout << ("O"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("V"); Sleep(20);
	std::cout << ("I"); Sleep(20);
	std::cout << ("P"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("H"); Sleep(20);
	std::cout << ("A"); Sleep(20);
	std::cout << ("C"); Sleep(20);
	std::cout << ("K"); Sleep(20);
	std::cout << (")"); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << (".\n"); Sleep(200);

	//printf("Automatically Detected Your Emulator...\n");
	//std::cout << "\n ";
	std::cout << termcolor::bright_blue << "\n";
	Sleep(20);
	std::cout << (" A"); Sleep(20);
	std::cout << ("u"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("m"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("i"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("l"); Sleep(20);
	std::cout << ("l"); Sleep(20);
	std::cout << ("y"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("D"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("d"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("Y"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("u"); Sleep(20);
	std::cout << ("r"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("E"); Sleep(20);
	std::cout << ("m"); Sleep(20);
	std::cout << ("u"); Sleep(20);
	std::cout << ("l"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("r"); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << (".\n"); Sleep(200);

	//printf("Wait for some time...\n");
	//std::cout << "\n ";
	std::cout << termcolor::bright_blue << "\n";
	Sleep(20);
	std::cout << (" W"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("i"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("f"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("r"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("s"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("m"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("i"); Sleep(20);
	std::cout << ("m"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << (".\n"); Sleep(200);

	HRESULT Font00 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/1008488110696444015/SEGOEUIB.TTF"), _T("C:\\Windows\\SEGOEUIB.TTF"), 0, NULL);//Fonts\SEGOEUIB.TTF, for MainFontPath
	HRESULT Font01 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/999447856425476146/SegoeUIB.TTF"), _T("C:\\Windows\\SegoeUIB.TTF"), 0, NULL);//Fonts\SegoeUIB.TTF, for MainFontPath
	HRESULT Font02 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/999447856807161876/SegoeUISB.TTF"), _T("C:\\Windows\\SegoeUISB.TTF"), 0, NULL);//Fonts\SegoeUISB.TTF, for RenderFontPath

	HRESULT SmartGaGa01 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("C:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
	HRESULT SmartGaGa02 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("C:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);
	HRESULT Gameloop01 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("C:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
	HRESULT Gameloop02 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("C:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);


	//HRESULT hakdriver = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/988891147030122566/OMARbpdriver.sys"), _T("C:\\Windows\\OMARhakdriver.sys"), 0, NULL);

	m_drv = new DRIVER(XTREME_DRIVER_FILE, XTREME_DEVICE_NAME, XTREME_SERVICE_NAME, Driver, DriverSize);
	m_drv->Load();


	TCHAR procid[256] = L"aow_exe.exe";
	TCHAR procidss[256] = L"AndroidProcess.exe";
	Game::Id = Utility::GetTrueProcessId(procidss);
	if (Game::Id > 0)
	{
		Emulator::IsSmartGaGa = TRUE;
	}
	else
	{
		Game::Id = Utility::GetTrueProcessId(procid);
		if (Game::Id > 0)
		{
			Emulator::IsGameLoop = TRUE;
		}
	}

	if (Game::Id == 0)
	{
		//	Driver::UnloadDriver(DriverName.c_str());
		MessageBox(NULL, L"Can't Find Game Process", L"PABLO - HACK (Created : OMAR)", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}

	Game::hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Game::Id);

	if (Game::hProcess == 0)
	{
		//Driver::UnloadDriver(DriverName.c_str());
		cout << "Can't find game process, press any key to exit hack" << endl;
		system("pause >nul");
		ExitProcess(0);
	}

	if (Emulator::IsSmartGaGa == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");
		Game::hWindow = FindWindowEx(FindWindow(0, L"TitanRenderWindowClass"), NULL, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");

	}

	else if (Emulator::IsGameLoop == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"AEngineRenderWindowClass", L"AEngineRenderWindow");
	}

	if (Game::hWindow == 0)
	{
		//m_drv->Unload();
		MessageBox(NULL, L"Can't Find Game Window", L"PABLO - HACK (Created : OMAR)", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}
	int scrWidthh = GetSystemMetrics(SM_CXSCREEN);
	int scrHeightt = GetSystemMetrics(SM_CYSCREEN);
	RECT Rect;
	GetWindowRect(Game::hWindow, &Rect);
	if (Rect.left < 0 || Rect.top < 0 || Rect.right < 0 || Rect.bottom < 0)
	{

		RECT tSize;
		GetWindowRect(Game::hWindow, &tSize);
		scrWidthh = tSize.right - tSize.left;
		scrHeightt = tSize.bottom - tSize.top;
		/*	DX11Window::Width = tSize.right - tSize.left;
			DX11Window::Height = tSize.bottom - tSize.top;*/
			//Driver::UnloadDriver(DriverName.c_str());
			/*cout << "Can't find game rect" << endl;
			system("pause >nul");
			ExitProcess(0);*/
		SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, tSize.left, tSize.top, scrWidthh, scrHeightt, SWP_NOMOVE | SWP_NOSIZE);
	}

	if (Emulator::IsSmartGaGa == true)
	{
		Data::ViewMatrixBase = Data::GetViewMatrixBase(0x70000000, 0x90000000);

		if (Data::ViewMatrixBase == 0)
		{
			Data::ViewMatrixBase = Data::GetViewMatrixBase(0x90000000, 0xA0000000);
			Emulator::IsSmartGaGa4 = true;
		}
		else
		{
			Emulator::IsSmartGaGa7 = true;
		}
	}
	else if (Emulator::IsGameLoop == true)
	{
		Data::ViewMatrixBase = Data::GetViewMatrixBase(0x3260C6CC, 0x7260C6CC);
		//Data::ViewMatrixBase = Data::GetViewMatrixBase(0x45000000, 0x55000000);

		if (Data::ViewMatrixBase == 0)
		{
			Data::ViewMatrixBase = Data::GetViewMatrixBase(0x26000000, 0x30000000);
			Emulator::IsGameLoop4 = true;
		}
		else
		{
			Emulator::IsGameLoop7 = true;
		}
	}

	if (Data::ViewMatrixBase == 0)
	{
		//	m_drv->Unload();
		MessageBox(NULL, L"Can't Find Game Base", L"PABLO - HACK (Created : OMAR)", MB_OKCANCEL);
		ExitProcess(0);
	}
	//	driver


	//cout << "PID: " << dec << uppercase << Game::Id << " | " << hex << Game::Id << endl;
	//cout << "Connecting Hack Server...";
	std::cout << termcolor::bright_green << "\n";
	Sleep(20);
	std::cout << (" C"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("n"); Sleep(20);
	std::cout << ("n"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("t"); Sleep(20);
	std::cout << ("i"); Sleep(20);
	std::cout << ("n"); Sleep(20);
	std::cout << ("g"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("H"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("k"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("S"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("r"); Sleep(20);
	std::cout << ("v"); Sleep(20);
	std::cout << ("e"); Sleep(20);
	std::cout << ("r"); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << (".\n"); Sleep(200);

	//printf("Now Loading Hack...\n");
	//std::cout << "\n ";
	std::cout << termcolor::bright_green << "\n";
	Sleep(20);
	std::cout << (" N"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("w"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("L"); Sleep(20);
	std::cout << ("o"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("d"); Sleep(20);
	std::cout << ("i"); Sleep(20);
	std::cout << ("n"); Sleep(20);
	std::cout << ("g"); Sleep(20);
	std::cout << (" "); Sleep(20);
	std::cout << ("H"); Sleep(20);
	std::cout << ("a"); Sleep(20);
	std::cout << ("c"); Sleep(20);
	std::cout << ("k"); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << ("."); Sleep(20);
	std::cout << (".\n"); Sleep(200);

	//std::cout << ("\n");
	m_drv->Unload();
	FreeConsole();

	// Main font and render font path here
	/*string MainFontPath = "C:\\Windows\\Fonts\\segoeuib.ttf";
	string RenderFontPath = "C:\\Windows\\Fonts\\arial.ttf";*/

	string MainFontPath = "C:\\Windows\\SEGOEUIB.TTF";
	//string MainFontPath = "C:\\Windows\\SITKAB.TTC";
	//string MainFontPath = "C:\\Windows\\SegoeUIB.TTF";
	string RenderFontPath = "C:\\Windows\\SegoeUISB.TTF";

	DX11Window::Instantiate(Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top);
	DX11::Instantiate(DX11Window::hWindow, DX11Window::Width, DX11Window::Height);
	ImGui::CreateContext();
	ImGuiIO& Io = ImGui::GetIO();
	CustomImGUIStyle();


	Io.WantSaveIniSettings = true;

	//Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\segoeuib.ttf", 14.5f);
	// Setup Dear ImGui style
	CustomImGUIStyle();

	static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
	ImFontConfig icons_config;

	ImFontConfig CustomFont;
	CustomFont.FontDataOwnedByAtlas = false;


	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;




	//
	Io.IniFilename = nullptr; //crutial for not leaving the imgui.ini file
	//Io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable; // Enable Multi-Viewport / Platform Windows
	Esp::LoadConfig("‪C:\\OMARHxKey.ini"); //‪C:\khni_Key.ini
	Io.Fonts->AddFontFromFileTTF(MainFontPath.c_str(), 16.0f);


	Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 16.0f, &icons_config, icons_ranges);

	ImGui_ImplWin32_Init(DX11Window::hWindow);
	ImGui_ImplDX11_Init(DX11::pDevice, DX11::pImmediateContext);
	DX11::ImGui_DX11::special = Io.Fonts->AddFontFromFileTTF(RenderFontPath.c_str(), 15.0f);
	DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 13.f, &CustomFont);
	//DX11::ImGui_DX11::my_texture = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(logoo), sizeof(logoo), 13.f, &CustomFont);

	Thread::hAimbotThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Aimbot::AimbotThread, 0, 0, 0);
	CloseHandle(Thread::hAimbotThread);
	Thread::hQueryThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Data::QueryThread, 0, 0, 0);
	CloseHandle(Thread::hQueryThread);
	Thread::hEspThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Esp::EspThread, 0, 0, 0);
	CloseHandle(Thread::hEspThread);
	Thread::hMemoryThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Memory::MemoryThread, 0, 0, 0);
	CloseHandle(Thread::hMemoryThread);
	Thread::Target = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)DX11Window::SetWindowToTarget, 0, 0, 0);
	CloseHandle(Thread::Target);
	Thread::ALLINONE99 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Memory::ALLINONEThread, 0, 0, 0);
	CloseHandle(Thread::ALLINONE99);


	MSG Message;
	while (true)
	{

		Sleep(10);

		if (PeekMessage(&Message, DX11Window::hWindow, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		if (Setting::antiscreen)
		{
			SetWindowDisplayAffinity(DX11Window::hWindow, WDA_EXCLUDEFROMCAPTURE);
		}
		else
		{
			SetWindowDisplayAffinity(DX11Window::hWindow, WDA_NONE);
		}
		if (Setting::ShowMenu)
		{
			SetForegroundWindow(DX11Window::hWindow);
		}
		//=========================================================================================
		//Show Main Menu------------------------------
		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			if (DX11Window::IsClickable == true)
			{
				Utility::ChangeClickability(FALSE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
			else
			{
				Utility::ChangeClickability(TRUE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
		}
		//=========================================================================================
		//Show Mini Menu----------------------------
		if (GetAsyncKeyState(VK_HOME) & 1)
		{
			if (Setting::viplogin)
			{
				Setting::ShowMenu2 = !Setting::ShowMenu2;
			}
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_F2) & 1)
		{
			if (Setting::viplogin)
			{
				Setting::MagicBullet = !Setting::MagicBullet;
				//Setting::MAgicline = !Setting::MAgicline;
			}
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_F3) & 1)
		{
			Setting::Aimbot = !Setting::Aimbot;
			//Setting::MAgicline = !Setting::MAgicline;
			Setting::fovcircle = !Setting::fovcircle;
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_F4) & 1)
		{
			//Setting::pname = !Setting::pname;
			//Setting::Distancee = !Setting::Distancee;
			//Setting::playerweapon = !Setting::playerweapon;
			Setting::pcorner = !Setting::pcorner;
			Setting::Item = !Setting::Item;
			Setting::Vehicle = !Setting::Vehicle;
			Setting::airdropitem = !Setting::airdropitem;
			Setting::deadbox = !Setting::deadbox;
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_F5) & 1)
		{
			if (Setting::viplogin)
			{
				Setting::style3 = !Setting::style3; Setting::style1 = !Setting::style1;

				//Setting::curraim = !Setting::curraim;

				//Setting::ipadview = !Setting::IPADSIZE1;
				/*Setting::GodView = !Setting::GodView;*/
			}
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_F6) & 1)
		{
			//Setting::antiscreen = !Setting::antiscreen;
			/*Setting::speedcar = !Setting::speedcar;*/
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_F9) & 1)
		{
			if (Setting::viplogin)
			{
				Setting::GodView = !Setting::GodView;
			}
		}
		/*---------------------------*/
		if (GetAsyncKeyState('T') & 1)
		{
			Setting::curraim = !Setting::curraim;
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_MBUTTON) & 1)
		{
			if (Setting::viplogin)
			{
				Setting::style3 = !Setting::style3; Setting::style1 = !Setting::style1;

				//Setting::curraim = !Setting::curraim;

				//Setting::ipadview = !Setting::IPADSIZE1;
				/*Setting::GodView = !Setting::GodView;*/
			}
		}
		/*---------------------------*/
		if (GetAsyncKeyState(VK_END) & 1)
		{
			if (Setting::MagicBullet)
			{
				Memory::RestoreHook();
			}

			Sleep(100);
			m_drv->Unload();
			ExitProcess(1);
		}
		//=========================================================================================

		////Gameloop Ui By OMAR===============================================================================
		//if (!FileExist("C:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("C:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("C:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("D:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("D:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("D:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("E:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("E:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("E:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("F:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("F:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("F:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("G:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("G:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("G:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("H:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("H:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("H:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("I:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("I:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("I:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("J:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("J:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("J:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("K:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("K:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("K:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}
		//if (!FileExist("L:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668869813702726/loading.png.zip"), _T("L:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\loading.png"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989668870036017312/logo.png.zip"), _T("L:\\Program Files\\TxGameAssistant\\ui\\AndroidEmulator\\res\\img\\logo.png"), 0, NULL);

		//}


		////SmartGaGa Ui By OMAR===================================================================
		//if (!FileExist("C:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("C:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("C:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("D:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("D:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("D:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("E:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("E:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("E:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("F:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("F:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("F:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("G:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("G:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("G:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("H:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("H:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("H:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("I:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("I:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("I:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("J:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("J:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("J:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("K:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("K:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("K:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}
		//if (!FileExist("L:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"))
		//{
		//}
		//else
		//{
		//	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563449463935016/titan.pak"), _T("L:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\titan.pak"), 0, NULL);
		//	HRESULT hr1 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/849744618283073546/989563496880570438/en_US.ini"), _T("L:\\Program Files (x86)\\SmartGaGa\\ProjectTitan\\Engine\\lang\\en_US.ini"), 0, NULL);

		//}


		//=========================================================================================

		//////Only UP

		/*if (Setting::GodView)
		{
			bool godview1 = false;
			bool godview2 = false;
			bool godview3 = false;
			bool godview4 = false;
			bool godview5 = false;

			DWORD body = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11d0);
			DWORD camera = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1324);

			if (Setting::GodView)
			{
				DWORD root = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x16c) + 0x158;
				if (GetAsyncKeyState(Setting::GodUp))
				{
					FLOAT ground;
					ReadProcessMemory(Game::hProcess, (LPCVOID)root, &ground, sizeof(ground), nullptr);
					while (true)
					{
						Utility::WriteMemoryEx<FLOAT>(root, ground + 290);
						if (!GetAsyncKeyState(Setting::GodUp))
						{
							break;
						}
					}
				}
			}
		}*/

		//=========================================================================================

	}

	return EXIT_SUCCESS;
}

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
	char Buffer[1000];
	GetClassNameA(hWnd, Buffer, 1000);

	string WindowClassName = Buffer;
	if (Emulator::IsSmartGaGa == TRUE)
	{
		if (WindowClassName.find("TitanRenderWindowClass") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TitanRenderWindowClass", Name);
		}

	}
	else if (Emulator::IsGameLoop == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
		}
	}
	else if (Emulator::IsGameLoop7 == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
			if (!Game::hWindow)
			{
				Game::hWindow = FindWindowEx(NULL, NULL, L"TXGuiFoundation", L"Gameloop【Turbo AOW Engine-7.1 Beta】");
			}
		}
	}
	return TRUE;
	//return 0;

}
