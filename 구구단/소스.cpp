#include<stdio.h>

int main(void)
{
	int a;
	int i;
	int j;

	printf("숫자 입력(1은 2~9단): ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		for (j = 2; j < 10; j++)
		{
			printf("%d단\n\n", j);
			for (i = 1; i < 10; i++)
			{
				printf("%d×%d=%d\n", j, i, j * i);
			}
			printf("\n\n");
		}
		break;

	default:
		printf("%d단\n\n", a);
		for (i = 1; i < 10; i++)
		{
			printf("%d×%d=%d\n", a, i, a * i);
		}
		printf("\n\n");
		break;
	}
}