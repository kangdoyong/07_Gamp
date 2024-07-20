#include <stdio.h>

int myNumber = 30;

// 함수를 통해서 내가 원하는 변수의 데이터 쓰기 or 읽기를
// 할 수 있음
// -> 굳이 전역변수를 extern 선언하여, 쓰거나 읽을 필요가 없음
void PrintNumber()
{
	printf("myNumber는 %d \n", myNumber);
}