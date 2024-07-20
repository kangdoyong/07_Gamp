#include <stdio.h>

// 전역변수를 정적으로 만들면 "정적 전역 변수"
static int myVariable;
// 정적 전역 변수는 해당 파일 내부에서만 사용할 수 있게 되며,
// 외부 파일에서 extern으로 사용될 수 없습니다.
// 프로그램이 종료될 때까지 유지

// 함수를 정적으로 만들면 정적 함수가 됩니다.
static void HelloWorld();
// 정적 함수는 해당 파일 내부에서만 사용