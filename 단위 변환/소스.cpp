#include<stdio.h>

int main(void)
{
	double n;

	printf("숫자 입력 : ");
	scanf_s("%lf", &n);

	printf("%lfft = %lfm\n", n, 0.3048 * n);
	printf("%lfin = %lfm\n", n, 0.0254 * n);
	printf("%lfkg = %lfslug\n", n, 0.0685218 * n);

	return 0;
}