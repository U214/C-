#include <iostream>

namespace my31 {
	void SimpleFunc(void);
}

namespace my31 {
	void PrettyFunc(void);
}

namespace my32 {
	void SimpleFunc(void);
}


int main3(void)
{
	my31::SimpleFunc();

	return 0;
}

namespace my11 {
	void SimpleFunc(void) {
		std::cout << "my1�� ������ �Լ�" << std::endl;
	}
}

void my31::SimpleFunc(void) {
	std::cout << "my31�� ������ �Լ�" << std::endl;
	PrettyFunc();
	my32::SimpleFunc();
}

void my31::PrettyFunc(void) {
	std::cout << "So Pretty" << std::endl;
}

void my32::SimpleFunc(void) {
	std::cout << "my32�� ������ �Լ�" << std::endl;
}

