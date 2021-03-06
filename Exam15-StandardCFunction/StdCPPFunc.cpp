#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(void) {
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);

	printf("%s : %f \n", str1, sin(0.14));
	printf("%s : %f \n", str2, abs(-1.25));

	return 0;
}


/*
헤더파일의 확장자인 .h를 생략하고 앞에 c를 붙이면
C언어에 대응하는 C++의 헤더파일 이름이 된다.

5라인 : C의 표준에 정의된 함수들 조차 이름공간 std 안에 선언이 되어 있어서 이 문장이 필요한다.


C++의 헤더를 선언해야 하는 이유
- 하위 버전과의 호환성을 위해 C형태의 함수호출을 허용하는 것
- C++ 표준 라이브러리에서 제공하는 함수들은 C 표준 라이브러리가 제공하는 함수들을 오버로딩하고 있다.

int abs(int num);

long abs(long num);
float abs(float num);
double abs(double num);
*/
