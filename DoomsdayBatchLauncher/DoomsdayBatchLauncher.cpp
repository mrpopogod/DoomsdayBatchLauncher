// DoomsdayBatchLauncher.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <direct.h>
#include <Windows.h>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char cCurrentPath[FILENAME_MAX];
	_getcwd(cCurrentPath, sizeof(cCurrentPath));
	string str(cCurrentPath);
	str.append("\\base\\doomsday.bat");
	// pad with quotes for paths with spaces
	str.insert(0, "\"\"");
	str.append("\"\"");
	return system(str.c_str());
}

