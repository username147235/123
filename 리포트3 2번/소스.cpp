#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>

#define clear 0
#define error 1

unsigned int GenRandNum(int n)
{
	unsigned int result = 0;
	result = rand() % n;
	return result;
}

double D(double n, double mean)
{
	double deviation = n - mean;
	return deviation;
}

int main(void)
{
	srand((unsigned int)(time(NULL)));

	double sources[10] = {};
	int i;
	int n_Renge = 0;
	double sum = 0;
	double deviation_sum = 0;
	int n = 0;

	printf("������ ������ ����: ");
	scanf_s("%d", &n_Renge);

	printf("\n\n������ ����: ");

	for (i = 0; i < 10; i++)
	{
		double num = GenRandNum(n_Renge);
		printf("%.0f, ", num);
		sum = sum + num;
		sources[i] = num;
	}
	printf("\n\n���� = %.0f\n", sum);
	double mean = sum / 10;

	for (i = 0; i < 10; i++)
	{
		double num2 = sources[i];
		double deviation = D(num2, mean);
		deviation_sum = deviation_sum + pow(deviation, 2);
	}
	double variance = deviation_sum / 10;
	double SD = sqrt(variance);
	printf("�л� = %.2f\nǥ������ = %.2f", variance, SD);

	int status = error;
	while (status == error)
	{
		printf("\n\nȮ���ϰ� ���� ������ ��ȣ(1~10): ");
		scanf_s("%d", &n);
		if ((n <= 0) || (n > 10))
		{
			printf("\n\n�Է°��� �ùٸ��� �ʽ��ϴ�.");
		}
		else
		{
			status = clear;
		}
	}
	double n2 = sources[n-1];
	double nD = D(n2, mean);
	printf("\n�ش� ������ �� = %.0f\n�ش� ������ ���� = %.2f", n2, nD);
}