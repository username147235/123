#include<stdio.h>

int main(void)
{
	double n1;
	double n2;

	printf("���� �Է� (ft, in �Ǵ� slug), (m �Ǵ� kg) : ");
	scanf_s("%lf%lf", &n1, &n2);

	printf("%.1lfft = %lfm\n", n1, 0.3048 * n1);
	printf("%.1lfin = %lfm\n", n1, 0.0254 * n1);
	printf("%.1lfslug = %lfkg\n", n1, 14.5939 * n1);
	printf("%.1lfm = %lfft\n", n2, 3.28084 * n2);
	printf("%.1lfm = %lfin\n", n2, 39.3701 * n2);
	printf("%.1lfkg = %lfslug\n", n2, 0.0685218 * n2);


	return 0;
}