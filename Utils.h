#pragma once

#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <AclAPI.h>
#include <string>
#include "Sddl.h"

using namespace std;

class Utils {
public:
	void HideConsole();
	void Autoload(string Name, string Path);
	string FindPath();
	LPCWSTR Path();
	string FindDir();
	bool Screenshot(int x, int y, int width, int height, char* filename, HWND hwnd);
};