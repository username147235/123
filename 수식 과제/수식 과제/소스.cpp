#include <stdio.h>

int main(void)
{
	int A, B, C;
	char M = 'a';

	printf("사칙연산 입력(정수) : ");
	scanf_s("%d%c%d", &A, &M, sizeof(M), &B);

	if (M == '+')
	{
		C = A + B;
	}
	else if (M == '-')
	{
		C = A - B;
	}
	else if (M == '*')
	{
		C = A * B;
	}
	else if (M == '/')
	{
		C = A / B;
	}
	
	printf("%d%c%d=%d\n", A, M, B, C);
}