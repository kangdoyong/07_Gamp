#include <stdio.h>

// �Ű�����
// �Լ����� ����� �����͸� ���޹޴� ��
// �Լ� �ܺο��� ���� �� �����ϴ�.
// -> �ش� �Լ��� �������� ����� ������� ����

// �Ű������� ��������� ���޹޾�, ���̸� ����ϴ� �Լ�
void PrintAge(int birthYear);

void main()
{
	int year;
	printf("����⵵�� �Է����ּ���. \n");
	scanf("%d", &year);

	// year ������ ���� ���ڷ�
	// PrintAge �Ű������� ����
	PrintAge(year);
}

void PrintAge(int birthYear)
{
	int age = 2024 - birthYear;
	printf("���� : %d \n", age);
}
