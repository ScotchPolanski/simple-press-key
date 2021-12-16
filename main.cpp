#include "iostream"
#include "Windows.h"

void ClearEnter()
{
	std::cin.ignore(std::cin.rdbuf()->in_avail());
}

namespace Keyboard
{
	BYTE S = 0x53;
	BYTE PfeilRunter = 0x28;
	BYTE komma = 0xBC;
	BYTE strg = 0xA2;
	BYTE LinkeMausstaste = 0x01;
}

int main()
{
	SetConsoleTitleA("Simulator by Scotch");
	while (true)
	{
		std::cout << 6302 - 12 << std::endl;
		std::cout << "Amount: ";
		int amount = 0;
		std::cin >> amount;
		ClearEnter();
		std::cout << "Press Enter to start simulate...\n";
		getchar();
		std::cout << "Go with your Mouse to the start!\n";
		Sleep(2000);
		for (int i = 5; i >= 0; --i)
		{
			std::cout << i << std::endl;
			Sleep(1000);
		}
			for (int i = 0; i <= amount; ++i)
			{
				keybd_event(Keyboard::PfeilRunter, 0, 0, 0);
				std::cout << "Pfeil runter\n";
				Sleep(50);
				std::cout << "Komma\n";
				keybd_event(Keyboard::komma, 0, 0, 0);
				system("cls");
				std::cout << "Version 0.03\n";
				std::cout << i << std::endl;
			}		
	}
}

// https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes