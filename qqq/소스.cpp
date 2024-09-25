#include<stdio.h>

int main(void)
{
	double r;
	double l;
	double h;

	printf("원 또는 구의 반지름, 삼각형 또는 사각형의 밑변, 삼각형 또는 사각형의 높이 : ");
	scanf_s("%lf%lf%lf", &r, &l, &h);

	printf("반지름이 %.1lfcm인 원의 넓이 = %.1lfπcm²\n", r, r * r);
	printf("반지름이 %.1lfcm인 구의 표면적 = %.1lfπcm²\n",r, 4*r*r);
	printf("반지름이 %.1lfcm인 구의 체적 = %.1lfπcm³\n", r, 4 * r * r * r / 3);
	printf("밑변의 길이가 %.1lfcm, 높이가 %.1lfcm인 사각형의 넓이 = %.1lfcm²\n", l, h, l * h);
	printf("밑변의 길이가 %.1lfcm, 높이가 %.1lfcm인 삼각형의 넓이 = %.1lfcm²\n", l, h, l * h / 2);

	return 0;
}