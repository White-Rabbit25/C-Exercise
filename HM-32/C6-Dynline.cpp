#include "pch.h"
#include <iostream>
using namespace std;

bool CheckFunc(char *Arr, char t) {
	for (int i = 0; i < strlen(Arr); i++) {
		if (Arr[i] == t)
			return 1;
	}
	return 0;
}

char *NewLine(char *CharArr, int N) {
	char *NCA = new char[100];
	int cnt = 0;
	for (int i = 0; i < strlen(CharArr); i++) {
		if (CheckFunc(NCA, CharArr[i]) == 0) {
			NCA[cnt] = CharArr[i];
			cnt++;
		}
	}
	NCA[cnt] = '\0';
	return NCA;
}
//6.	Дано рядок.Утворити новий рядок, всі літери якого входять у перший рядок лише один раз.
int main() {

	char *CharArr = new char[100];
	cout << "Enter Line" << endl;
	gets_s(CharArr, 99);

	char *S = NewLine(CharArr, 100);
	cout << S << endl;

}