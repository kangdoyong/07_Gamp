#include <stdio.h>

// �ش� ������ �ܺο� ����� myNumber�� ����Ϸ��� ��
// -> extern ����
extern int myNumber;

// ���� ����ϰ��� �ϴ� �ܺ� �Լ��� ������ �ۼ�
void PrintNumber();
// �Լ��� extern�� ������� �ʾƵ�, �⺻���� extern �Դϴ�.

void main()
{
	// printf("myNumber�� %d \n", myNumber);
	PrintNumber();
}