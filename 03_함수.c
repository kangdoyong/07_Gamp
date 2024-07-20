#include <stdio.h>

// 매개변수
// 함수에서 사용할 데이터를 전달받는 일
// 함수 외부에서 사용될 수 없습니다.
// -> 해당 함수의 영역에서 선언된 변수라고 생각

// 매개변수에 출생연도를 전달받아, 나이를 출력하는 함수
void PrintAge(int birthYear);

void main()
{
	int year;
	printf("출생년도를 입력해주세요. \n");
	scanf("%d", &year);

	// year 변수의 값을 인자로
	// PrintAge 매개변수에 전달
	PrintAge(year);
}

void PrintAge(int birthYear)
{
	int age = 2024 - birthYear;
	printf("나이 : %d \n", age);
}
