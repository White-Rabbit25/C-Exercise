#include "pch.h"
#include <iostream>
using namespace std;

float f1(float d) {
	return pow(d/2.0, 2);
}

float per(float d1, float d2) {
	 return 4 * sqrt(f1(d1) + f1(d2));
}

int main()
{
	int d1;
	cout << "Enter d1 ";
	cin >> d1;

	int d2;
	cout << "Enter d2 ";
	cin >> d2;

	cout << per(d1, d2);
}
