#include <stdio.h>

// 해당 파일의 외부에 선언된 myNumber를 사용하려고 함
// -> extern 선언
extern int myNumber;

// 내가 사용하고자 하는 외부 함수의 선언을 작성
void PrintNumber();
// 함수는 extern을 명시하지 않아도, 기본값이 extern 입니다.

void main()
{
	// printf("myNumber는 %d \n", myNumber);
	PrintNumber();
}