#include <iostream>

using namespace std;

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int main1(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;

	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	return 0;
}

/*
범위 지정 연산자는 지역변수가 아닌 전역변수의 접근에도 사용이 가능하다.
*/
