#include <windows.h>


int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) // entry point for windows
{
	MessageBoxA(0, "This is Handmade Hero", "Handmade Hero", MB_OK|MB_ICONINFORMATION); // " | " bitwise operator

	return 0;
}
