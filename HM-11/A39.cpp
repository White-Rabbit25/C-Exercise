#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	float N;
	cout << "Enter N";
	cin >> N;

	float const pi = 3.1415962;

	float A;
	A = (pi + 34) / 12;
	
	float dob;
	dob = A;

	for (int i = 2; i <= N; i++) {
		A = (pow(A + i, 1.7) - pow(A + i - 1, 0.5)) / (pow(A + i, 0.4) + pow(A + i - 1, 0.2));
		dob *= A;
		cout << "Dob is" << dob << endl;
	}
}
