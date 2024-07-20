#include <stdio.h>

int a = 50;

void Assign();

void main()
{
	printf("a는 %d \n", a);
	Assign();
	printf("a는 %d \n", a);

}

void Assign()
{
	// 전역 변수와 동일한 이름의 지역변수가 존재한다면?
	// -> 전역 변수보다 지역 변수가 우선시 됩니다.
	//	  함수의 매개변수도 지역 변수처럼 처리됨
	
	int a = 10;

	// 전역 변수의 값을 변경하는 것이 아닌,
	// 지역 변수 a의 값을 변경
	a += 100;
}
