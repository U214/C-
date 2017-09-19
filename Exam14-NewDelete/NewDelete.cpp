#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr2(int len) {
	char* str = new char[len];

	return str;
}

int main(void)
{
	char* str = MakeStrAdr2(20);
	strcpy(str, "i am so happy");
	cout << str << endl;
	delete []str; //¹è¿­ ¼Ò¸ê

	return 0;
}