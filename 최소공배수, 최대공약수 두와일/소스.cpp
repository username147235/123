#include<stdio.h>

int main(void)
{
	int a;
	int b;

	printf("���� 2�� �Է�: ");
	scanf_s("%d%d", &a, &b);

	int a1 = a;
	int b1 = b;

	do
	{
		do
		{
			a1 = a1 + a;
		}while (a1 < b1);
		do
		{
			b1 = b1 + b;
		}while (b1 < a1);
	}while (a1 != b1);
	printf("�ּҰ����: %d\n", a1);

	int a2 = 1;
	int b2;

	do
	{
		if ((a % a2 == 0) && (b % a2 == 0))
		{
			b2 = a2;
		}
		a2 = a2 + 1;
	} while (a2 <= a);
	printf("�ִ�����: %d", b2);
}
