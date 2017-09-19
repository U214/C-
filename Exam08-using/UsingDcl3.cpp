#include <iostream>

namespace Hybrid {
	void HybFunc(void) {
		std::cout << "so simple function" << std::endl;
		std::cout << "in namespace hybrid" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;
	HybFunc();

	return 0;
}


/*
14���� : HybFunc�� �̸����� Hybrid���� ã����
- Ű���� using�� �̿��ؼ� '�̸����� Hybrid�� ���ǵ� HybFunc�� ȣ���� ������,
�̸������� �������� �ʰ� ȣ���ϰڴ�!'�� ���� ����ϰ� �ִ�.
�� ��, HybFunc�� �Լ��� �̸��� �� ���� �ְ�, ������ �̸��� �� �� �ִ�.
���� ��� ���������� ����� ���������� ����� ���ĺ��� ȿ���� �����ϸ�,
����� ������ �����, ��������ó�� ������ ȿ���� �Ұ� �ȴ�.
*/
