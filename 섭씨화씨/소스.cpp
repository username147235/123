#include <stdio.h>

int main(void)
{
	int n = 1;
	float t = 0;
	char c = ' ';
	float sum(float a, char c);

	do
	{
		printf("�Է��� ����(C, F): ");
		scanf_s("%c", &c, sizeof(c));

		switch (c)
		{
		case 67:
			printf("\n\n������: ����->ȭ��\n\n");
			n = 0;
			break;

		case 70:
			printf("\n\n������: ȭ��->����\n\n");
			n = 0;
			break;

		default:
			printf("\n\n�߸��� �Է°��Դϴ�.\n\n");
			break;
		}
	} while (n == 1);

	float result;

	printf("�µ� �Է�: ");
	scanf_s("%f", &t);

	result = sum(t, c);
	printf("��ȯ�� ��: %.1f", result);
}

float sum(float a, char c)
{
	float temp;
	if (c == 67)
	{
		temp = (a * 1.8) + 32;
	}
	else
	{
		temp = (a - 32) * 0.56;
	}
	return temp;
}