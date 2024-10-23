#include<stdio.h>

int main(void)
{
	int a;
	int b;

	printf("숫자 2개 입력: ");
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
	printf("최소공배수: %d\n", a1);

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
	printf("최대공약수: %d", b2);
}
