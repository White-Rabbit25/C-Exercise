#include "pch.h"
#include <iostream>
using namespace std;

int main()  //11.	Дано рядок.Чи є він паліндромом ? (Читається однаково в дві сторони)
{
	char Text[100];
	cout << "Enter Line: ";
	gets_s(Text);

	bool res;

	for (int i = 0; i < strlen(Text) / 2; i++) {
		if (Text[i] == Text[strlen(Text) - i - 1])
			res = true;
		else
			res = false;
	}
	cout << "Res is: " << res << endl;

}