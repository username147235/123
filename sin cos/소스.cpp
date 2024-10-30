#include <stdio.h>
#include <math.h>

int main(void)
{
	float n = 200;
	float sin(float a, float b);
	float cos(float a, float b);

	while ((n > 180) || (n < 0))
	{
		printf("각도 입력(0~180[deg]): ");
		scanf_s("%fl", &n);

		if ((n > 180) || (n < 0))
		{
			printf("범위 밖의 숫자 입니다.\n\n");
		}
	}

	float result1;
	float result2;
	
	result1 = sin(n, n);
	result2 = cos(n, n);
	printf("sin %f˚= %.5f\ncos %f˚= %.5f", n, result1, n, result2);
}

float sin(float a, float b)
{
	float pi = 3.1415926;

	float temp1 = sin(a * pi / 180);
	return temp1;
}
float cos(float a, float b)
{
	float pi = 3.1415926;

	float temp2 = cos(a * pi / 180);
	return temp2;
}