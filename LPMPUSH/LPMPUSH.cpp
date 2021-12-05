//LPMPUSH
//Filip Rokita
//www.filiprokita.com

#include <iostream>
#include <Windows.h>

using namespace std;

char enable, disable;

void menu()
{
	cout << "ENABLE: "; cin >> enable;
	cout << "DISABLE: "; cin >> disable;
}

void push()
{
	while (true)
	{
		if (GetAsyncKeyState(enable))
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		}
		if (GetAsyncKeyState(disable))
		{
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
	}
}

int main()
{
	system("title LPMPUSH - www.filiprokita.com");
	menu();
	push();
	return 0;
}