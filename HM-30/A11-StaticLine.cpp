#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//11.	Чи є в запропонованому рядку задана літера ?

	char Text[100];
	cout << "Enter Line: ";
	gets_s(Text);

	char Let;
	cout << "Enter Letter: ";
	cin >> Let;

	bool res = 0;
	for (int i = 0; i < strlen(Text); i++) {
		if (Text[i] == Let)
			res = true;
	}
	cout << "Res is: " << res << endl;
}