#include "pch.h"
#include <iostream>
using namespace std;


int CntWo(char *text, char *word) {
	int cnt = 0;
	char *ptr;
	while (text) {
		ptr = strstr(text, word);
		if (!ptr) 
			break;
		cnt++;
		ptr += strlen(word);
		text = ptr;
	}
	return cnt;
}


//7.	Написати функцію, яка знаходить скільки разів у заданому рядку зустрічається задане слово, 
//що представлене іншим рядком
int main()
{
	char *L1 = new char[100];
	cout << "Enter Text: ";
	gets_s(L1, 99);

	char *L2 = new char[100];
	cout << "Enter Line: ";
	gets_s(L2, 99);

	cout << CntWo(L1, L2);
}}