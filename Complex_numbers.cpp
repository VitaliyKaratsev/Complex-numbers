// Complex_numbers.cpp: определяет точку входа для консольного приложения.
//Пользователь вводит два компклексных числа необходимо : сложить и умножить эти числа

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int re, im, re1, im1, a; // re - действительная часть комплексного числа, im - мнимая часть комплексного числа;
	char sign, sign1, ion, sign3; // sing - символы, ion - переменная для мнимой единицы
	cout << "Введите первое комплексное число: " << endl;
	cin >> re >> sign >> im >> ion;
	cout << "Введите второе комплексное число: " << endl;
	cin >> re1 >> sign1 >> im1 >> ion;
	cout << "Какую операцию выполнить? " << endl;
	cout << "Нажмите 1 если сложить, 2 - если умножить " << endl;
	cin >> a;
	if (a == 1)
	{
		cout << "Cумма двух комплексных чисел: " << re + re1 << "+" << im + im1 <<"i" <<  endl;
	}
	else if ( a == 2)
	{
		cout << "Произведение двух комплексных чисел: " << (re * re1)-(im*im1) << "+" << (re * im1)+(im*re1) << "i" << endl;
	}
	system("pause");
	return 0;

}

