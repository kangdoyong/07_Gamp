#include <stdio.h>

// 반환타입이 void가 아닌 함수
// 반환타입이 void가 아니라면
// 반환할 데이터가 존재하므로, return문을
// 이용해서 어떠한 결과를 반환해야 합니다.

// return문이란?
// 점프문이며, 함수의 실행을 종료하고
// 프로그램의 흐름을 호출자에게 되돌려놓습니다.
 
// 반환 타입이 void 가 아닌 함수에서는
// return 반환값; <- 어떠한 데이터를 반환할 수 있음

// 반환 타입이 void인 함수에서는
// return; <- 함수를 종료시킬 수 있음

// int형 데이터를 반환하는 함수를 선언
int GetNumber();

void main()
{
	int n = GetNumber();
	
	printf("n의 값은 %d \n", n);
}

int GetNumber()
{
	int myNumber;

	printf("정수 입력 :");
	scanf("%d", &myNumber);

	// 반환 값을 myNumber로 지정
	// 해당 함수를 호출하는 곳에서 myNumber가 가진 값을 받을 수 있습니다.

	return myNumber;
}
