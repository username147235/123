#include<stdio.h>

int main(void)
{
	int a;
	int b;

	printf("���� 2�� �Է�: ");
	scanf_s("%d%d", &a, &b);

	int a1 = a;
	int b1 = b;

	while (a1 != b1)
	{
		while (a1 < b1)
		{
			a1 = a1 + a;
		}
		while (b1 < a1)
		{
			b1 = b1 + b;
		}
	}
	printf("�ּҰ����: %d\n", a1);

	int a2 = 1;
	int b2;

	while (a2 <= a)
	{
		if ((a % a2 == 0) && (b % a2 == 0))
		{
			b2 = a2;
		}
		a2 = a2 + 1;
	}
	printf("�ִ�����: %d", b2);
}
