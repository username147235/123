#include<stdio.h>

int main(void)
{
	int a=0;
	int i;
	int j;

	while ((a > 9) || (a < 1))
	{
		printf("1~9 ���� �Է�(1�� 2~9��): ");
		scanf_s("%d", &a);
		
		if ((a > 9) || (a < 1))
		{
			printf("���� ���� ���� �Դϴ�.\n\n");
		}
	}
	switch (a)
	{
	case 1:
		for (j = 2; j < 10; j++)
		{
			printf("%d��\n\n", j);
			for (i = 1; i < 10; i++)
			{
				printf("%d��%d=%d\n", j, i, j * i);
			}
			printf("\n\n");
		}
		break;

	default:
		printf("%d��\n\n", a);
		for (i = 1; i < 10; i++)
		{
			printf("%d��%d=%d\n", a, i, a * i);
		}
		printf("\n\n");
		break;
	}
}