#include <stdio.h>

int main(void)
{
	int n = 1;
	float t = 0;
	char c = ' ';
	float sum(float a, char c);

	do
	{
		printf("입력할 단위(C, F): ");
		scanf_s("%c", &c, sizeof(c));

		switch (c)
		{
		case 67:
			printf("\n\n설정값: 섭씨->화씨\n\n");
			n = 0;
			break;

		case 70:
			printf("\n\n설정값: 화씨->섭씨\n\n");
			n = 0;
			break;

		default:
			printf("\n\n잘못된 입력값입니다.\n\n");
			break;
		}
	} while (n == 1);

	float result;

	printf("온도 입력: ");
	scanf_s("%f", &t);

	result = sum(t, c);
	printf("변환된 값: %.1f", result);
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