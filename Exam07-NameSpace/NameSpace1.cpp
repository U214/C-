#include <iostream>

namespace my1 {
	void SimpleFunc(void) {
		std::cout << "my1이 정의한 함수" << std::endl;
	}
}

namespace my2 {
	void SimpleFunc(void) {
		std::cout << "my2이 정의한 함수" << std::endl;
	}
}

int main1(void)
{
	my1::SimpleFunc();
	my2::SimpleFunc();

	return 0;
}