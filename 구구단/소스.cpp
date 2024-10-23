#include<stdio.h>

int main(void)
{
	int a=0;
	int i;
	int j;

	while ((a > 9) || (a < 1))
	{
		printf("1~9 숫자 입력(1은 2~9단): ");
		scanf_s("%d", &a);
		
		if ((a > 9) || (a < 1))
		{
			printf("범위 밖의 숫자 입니다.\n\n");
		}
	}
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