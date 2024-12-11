#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#define range 1000

double rand_num()
{
	double num = rand() % range;
	return num;
}

void upper(double* num)
{
	double temp = 0;
	for (int j = 0; j < 99; j++)
	{
		for (int i = 0; i < 99; i++)
		{
			if (num[i] > num[i + 1])
			{
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}
}

double variance(double* num, double mean)
{
	double dev_sum = 0;
	for (int i = 0; i < 10; i++) 
	{
		double squar_dev = pow(num[i] - mean, 2);
		dev_sum += squar_dev;
	}
	return dev_sum / 10;
}


int main(void)
{
	srand((unsigned int)(time(NULL)));

	double num[100];
	double sum = 0;


	printf("������ ����(��������): ");
	for (int i = 0; i < 100; i++)
	{
		num[i] = rand_num();
	}
	upper(num);
	for (int i = 0; i < 100; i++)
	{
		printf("%.0f ", num[i]);
	}

	double select_range_num[10];
	int start_num = rand() % 90;
	printf("\n\n���� ������ ��ȣ: %d\n", start_num + 1);
	printf("���� ���� ��: %.0f\n\n", num[start_num]);

	printf("���õ� ����: ");

	for (int i = 0; i < 10; i++)
	{
		select_range_num[i] = num[start_num + i];
		sum += select_range_num[i];
		printf("%.0f ", select_range_num[i]);
	}
	double mean = sum / 10;
	double var = variance(select_range_num, mean);
	double standard_dev = sqrt(var);
	printf("\n\n����: %.0f\n���: %.1f\n�л�: %.1f\nǥ�� ����: %.1f", sum, mean, var, standard_dev);
}