#include <Windows.h>
#include <iostream>
#include "../Sources/Headers/animation.h"

/*	Định nghĩa các hàm class 'animation' (Define 'animation' class functions)	*/
void animation::DotAnimation(int milliseconds) {
	for (int i = 0; i < 3; i++) {
		Sleep(milliseconds);
		std::cout << ".";
	}
}

void animation::FlashWindows() {
	FLASHWINFO fi;
	fi.cbSize = sizeof(FLASHWINFO);
	fi.hwnd = (HWND)(GetConsoleWindow());
	fi.dwFlags = FLASHW_TRAY;
	fi.uCount = 3;
	fi.dwTimeout = 0;
	FlashWindowEx(&fi);
}

void animation::DisableSelection()
{
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);

	SetConsoleMode(hStdin, ~ENABLE_QUICK_EDIT_MODE);
}