#include <iostream>
#include <math.h>
using namespace std;

//A11

int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;

	float y;

	if (x >= 0) {
		y = sin(2 * x) + cos(x + 3.2);
	}
	else {
		y = sin(x) - cos(x - 0.3);
	}
	cout << "y: " << y << endl;
  
}