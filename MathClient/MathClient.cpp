// MathClient.cpp : Client app for MathLibrary DLL.
#include "pch.h" 
#include <iostream>
#include "MathLibrary.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int god;
	cout << "Введите год" << endl;
	cin >> god;

	visokos_init(god);

	if (visokos_next() == true)
	{
		cout << "Високосный";
	}
	if (visokos_next() == false)
	{
		cout << "Не високосный";
	}
}
