#include<stdio.h>

int main(void)
{
	double r;
	double l;
	double h;

	printf("�� �Ǵ� ���� ������, �ﰢ�� �Ǵ� �簢���� �غ�, �ﰢ�� �Ǵ� �簢���� ���� : ");
	scanf_s("%lf%lf%lf", &r, &l, &h);

	printf("�������� %.1lfcm�� ���� ���� = %.1lf��cm��\n", r, r * r);
	printf("�������� %.1lfcm�� ���� ǥ���� = %.1lf��cm��\n",r, 4*r*r);
	printf("�������� %.1lfcm�� ���� ü�� = %.1lf��cm��\n", r, 4 * r * r * r / 3);
	printf("�غ��� ���̰� %.1lfcm, ���̰� %.1lfcm�� �簢���� ���� = %.1lfcm��\n", l, h, l * h);
	printf("�غ��� ���̰� %.1lfcm, ���̰� %.1lfcm�� �ﰢ���� ���� = %.1lfcm��\n", l, h, l * h / 2);

	return 0;
}