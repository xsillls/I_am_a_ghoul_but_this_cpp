
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void ghoul()
{
	int namber = 993;

	while (namber > 1)
	{
		cout << namber + 7 << "-7=" << namber << endl;
		namber -= 7;
		Sleep(50);
	}
}

void massage()
{
	cout << "��� �";
	cin.get();
	cout << "�";
	for (int ii = 0; ii < 10; ii++)
	{
		cout << ".";
		Sleep(80);
	}
	cout << endl;
	cout << "����" << endl;
	Sleep(400);
}

int main()
{
	setlocale(LC_ALL, "ru");
	massage();
	ghoul();

	return 0;
}