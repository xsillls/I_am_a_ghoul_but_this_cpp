
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void ghoul()
{
	int namber = 994;

	while (namber > 1)
	{
		cout << namber + 7 << "-7=" << namber << endl;
		namber -= 7;
		Sleep(50);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	ghoul();

	return 0;
}