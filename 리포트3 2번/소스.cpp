#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Up 0
#define Down 1

unsigned int GenRandNum(int n)
{
	unsigned int result = 0;
	result = rand() % n;
	return result;
}

int main(void)
{
	srand((unsigned int)(time(NULL)));

	int i;
	int n_Renge = 0;

	printf("������ ������ ����: ");
	scanf_s("%d", &n_Renge);

	printf("\n\n������ ����: ");

	for (i = 0; i < 10; i++)
	{
		double Num = GenRandNum(n_Renge);
		printf("%.0f, ", Num);
	}
}