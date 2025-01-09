
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

string Generator_Error(string message)
{
	string text = "";
	for (int ii = 0; ii < 810; ii++) text += message;
	
	return text;
}

void dedos()
{
	string text = Generator_Error("ERROR_404 ");

	string comand = ("start cmd /k echo " + text);

	for (int ii = 0; ii < 10; ii++)
		system(comand.c_str());
	
}

void massage()
{
	cout << " то €";
	cin.get();
	cout << "я";
	for (int ii = 0; ii < 10; ii++)
	{
		cout << ".";
		Sleep(80);
	}
	cout << endl;
	cout << "√уль" << endl;
	Sleep(400);
}

int main()
{
	setlocale(LC_ALL, "ru");
	massage();
	ghoul();
	dedos();

	return 0;
}