// ���� �� ���α׷�
// ����, ����, ���� ������ ����� �Է¹ް�
// (������ ����), (������ ���), (���� �� �ְ�����)��
// ��ȯ�ϴ� �Լ��� �����Ͽ�,
// �Ʒ��� ���� �����ϴ� ���α׷��� �ۼ�

// input
// ���� : 90
// ���� : 80
// ���� : 85

// output
// ���� : 255
// ��� : 85.00
// �ְ����� : 90

#include <stdio.h>

// ������ ��ȯ�ϴ� �Լ�
int GetSum(int a, int b, int c);
// ����� ��ȯ�ϴ� �Լ�
double GetAvg(int a, int b, int c);
// �ְ������� ��ȯ�ϴ� �Լ�
int GetMax(int a, int b, int c);

void main()
{
	int kor, eng, math;

	printf("���� : ");
	scanf("%d", &kor);
	printf("���� : ");
	scanf("%d", &eng);
	printf("���� : ");
	scanf("%d", &math);

	printf("���� : %d \n", GetSum(kor, eng, math));
	printf("��� : %.2f \n", GetAvg(kor, eng, math));
	printf("�ְ����� : %d \n", GetMax(kor, eng, math));


}

int GetSum(int a, int b, int c)
{
	return a + b + c;
}

double GetAvg(int a, int b, int c)
{
	return (double)(a + b + c) / 3;
}

int GetMax(int a, int b, int c)
{
	int max = a;
	max = max > b ? max : b;
	max = max > c ? max : c;
	
	return max;
}



//#include <stdio.h>
//
//int Plus(int a, int b, int c);
//float Avg(int a, int b, int c);
//int Top(int a, int b, int c);
//
//void main()
//{
//	int a, b, c;
//	printf("���� :");
//	scanf("%d", &a);
//	printf("���� :");
//	scanf("%d", &b);
//	printf("���� :");
//	scanf("%d", &c);
//
//	printf("������ %d \n",Plus(a,b,c));
//	printf("����� %.2f \n",Avg(a,b,c));
//	printf("�ְ������� %d \n", Top(a,b,c));
//	
//}
//
//int Plus(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//float Avg(int a, int b, int c)
//{
//	
//	return (a + b + c)/3;
//}
//
//int Top(int a, int b, int c)
//{
//	return 0;
//}