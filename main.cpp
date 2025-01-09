
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

//коментарии для гита, конкретно для этого человека "kirtsarev"
//у меня 4:35 режим ушёл в 0, с плюсов мне зашло писать на gite. Тянуть не буду краткие коментари для галочки 

void ghoul() // ghoul - это я а если серёзно то это просто вывод чисел в консоль от 1000 до 6 с шагом -7 старый мем по языкам программирования
{			//https://www.youtube.com/watch?v=UqxNPAh0Usc я юзаю на каждом новом языке программа с базовах зниний о новом языке и усложнять её можно до бесконечности
	int namber = 993;

	while (namber > 1)
	{
		cout << namber + 7 << "-7=" << namber << endl;
		namber -= 7;
		Sleep(50);
	}
}

string Generator_Error(string message) // генератор ошибок, возвращает строку с ошибкой 404, 810 раз
{
	string text = "";
	for (int ii = 0; ii < 810; ii++) text += message;
	
	return text;
}

void dedos() // создаёт окно с ошибкой 404, 1000 раз что приводит к жутким лагам но у меня xeon e5 2695 v4 так что мне пофиг
{
	string text = Generator_Error("ERROR_404 ");

	string comand = ("start cmd /k echo " + text);

	for (int ii = 0; ii < 1000; ii++)
		system(comand.c_str());
	
}

void massage() // выводит сообщение "Кто я" и "Я" с точками, а потом выводит "Гуль"
{
	cout << "Who am I?";
	cin.get();
	cout << "I";
	for (int ii = 0; ii < 10; ii++)
	{
		cout << ".";
		Sleep(80);
	}
	cout << endl;
	cout << "Ghoul" << endl;
	Sleep(400);
}

int main()	// главная функция, вызывает все остальные
{
	setlocale(LC_ALL, "ru");
	massage();
	ghoul();
	dedos();

	return 0;
}
// Конец main.cpp и моему режиму 4:48
// зато есть идея для нового проекта по Фигме, но это уже другая история
// ладно всем споки =)

//░██████╗░░██████╗░
//██╔════╝░██╔════╝░
//██║░░██╗░██║░░██╗░
//██║░░╚██╗██║░░╚██╗
//╚██████╔╝╚██████╔╝
//░╚═════╝░░╚═════╝░