#include <iostream>

using namespace std;

int RefRetFuncTwo(int &ref) {
	ref++;

	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);
	// 리턴값이 상수이므로 참조변수에 못넣음 &num2(x)

	num1++;
	num2 = num2 + 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}