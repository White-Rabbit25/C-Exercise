#include "pch.h"
#include <iostream>
#include <windows.h>
using namespace std;
//3.	Яка із заданих двох літер зустрічається в запропонованому тексті частіше ?
int main()
{
	char Text[300];
	strcpy_s(Text, "O, that you were yourself! but, love, you are.No longer yours than you yourself here live : Against this coming end you should prepare, And your sweet semblance to some other give.");

	char Fl;
	cout << "Enter first letter ";
	cin >> Fl;

	char Sl;
	cout << "Enter second letter ";
	cin >> Sl;

	//cout << size(Text) << endl;
	//cout << strlen(Text) << endl;
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < strlen(Text); i++) {
		if (Text[i] == Fl)
			cnt1++;
		if (Text[i] == Sl)
			cnt2++;
	}
	//cout << "Count of first letter" << cnt1 << endl;
	//cout << "Count of second letter" << cnt2 << endl;

	if (cnt1 > cnt2) {
		cout << "First letter is most common" << Fl << endl;
	}
	else {
		cout << "Second letter is most common" << Sl << endl;
	}
}