#include <iostream>
using namespace std;

int main(void)
{
	char name[100];
	char lang[200];

	cout << "�̸��� �����Դϱ�? ";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	cin >> lang;

	cout << "�� �̸��� " << name << "�Դϴ�. \n";
	cout << "���� �����ϴ� ���� " << lang << "�Դϴ�. " << std::endl;

	return 0;
}

//���ڿ� �Է½� �ι��ڰ� �߰��Ǿ
// cout���� ���� �ڵ����� �ι��������� ����Ѵ�.