#include <iostream>

using namespace std;

int& RefRetFuncOne2(int &ref) {
	ref++;

	return ref;
}

int main2(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne2(num1);

	num1++;
	num2 = num2 + 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}

// 변수로 리턴값을 받았으므로 별개의 변수가 생겨버림
// 지역변수를 참조형으로 반환하면 사라진다
