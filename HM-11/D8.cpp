#include "pch.h"
#include <iostream>
using namespace std;

int main()
{ /*8.Задано довільні значення кутів А і B(в градусах). 
  Якщо трикутник з такими кутами існує, то визначити його тип по відношенню до кутів
  (гострокутний, прямокутний, тупокутний).*/
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Enter a\n";
	cin >> a;
	cout << "Enter B\n";
	cin >> b;
	cout << "Enter c\n";
	cin >> c;
	if (a + b + c > 180 || a+b+c < 180 )
		cout << "Неверные данные";
	else if (a < 90 && b < 90 && c < 90)
		cout << "Треугольник остроугольный";
	else if (a == 90 || b == 90 || c == 90)
		cout << "Треугольник прямоугольный";
	else
		cout << "Треугольник тупоугольный";

}
