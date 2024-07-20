#include <stdio.h>

// static 이란?
// 변수에 선언될 경우 -> 정적 변수
// 함수에 선언될 경우 -> 정적 함수

void Add(int value);

void main()
{
	Add(10);
	Add(20);
	Add(30);
}

void Add(int value)
{
	// 정적 변수 선언
	static int result = 0;
	// 단 한 번의 초기화를 진행하며, ( =0 초기화 부분이 1번만 실행)
	// data 메모리 영역에 할당됩니다.

	// 프로그램이 종료될 때까지 데이터를 유지
	// -> 함수가 종료되더라도 정적 변수는 해제되지 않음
	// 함수 내부에서 선언되었기 때문에, 선언된 블록 내에서만 사용

	result += value;
	printf("result는 %d \n", result);
}