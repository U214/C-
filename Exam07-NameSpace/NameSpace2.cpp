/*
#include <iostream>

namespace my11 {
	void SimpleFunc(void);
}

namespace my22 {
	void SimpleFunc(void);
}

int main2(void)
{
	my11::SimpleFunc();
	my22::SimpleFunc();

	return 0;
}

namespace my11 {
	void SimpleFunc(void) {
		std::cout << "my1�� ������ �Լ�" << std::endl;
	}
}

void my22::SimpleFunc(void) {
		std::cout << "my2�� ������ �Լ�" << std::endl;
}


/*
�̸����� ����� �Լ� ����� ������ ����
������ ���ӽ����̽��� �״�� ǥ���ؾ� �ϰ�,
���Ǵ� �ٿ��� ǥ���� �� �ִ�.
*/
