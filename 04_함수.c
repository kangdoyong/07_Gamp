#include <stdio.h>

int Plus(int a, int b);

void main()
{
	int a, b;

	printf("a :");
	scanf("%d", &a);

	printf("b :");
	scanf("%d", &b);

	printf("%d + %d = %d \n", a, b, Plus(a,b));
}

int Plus(int a, int b)
{
	return a + b;
}
