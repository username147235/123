#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define range 10

int rand_num()
{
	int num = rand() % range;
	return num;
}

int inner(int *vec1, int *vec2)
{
	int in = (vec1[0] * vec2[0]) + (vec1[1] * vec2[1]) + (vec1[2] * vec2[2]);
	return in;
}

void outter(int *vec1, int *vec2, int *result)
{
	result[0] = (vec1[1] * vec2[2]) - (vec1[2] * vec2[1]);
	result[1] = -((vec1[0] * vec2[2]) - (vec1[2] * vec2[0]));
	result[2] = (vec1[0] * vec2[1]) - (vec1[1] * vec2[0]);
}

int main(void)
{
	srand((unsigned int)(time(NULL)));

	int vec1[3];
	int vec2[3];
	int result[3];
	int* pa = vec1, * pb = vec2;

	printf("\nvec1 = (");

	for (int i = 0; i < 3; i++)
	{
		vec1[i] = rand_num();
		printf("%d ", vec1[i]);
	}

	printf(")\n\nvec2 = (");

	for (int i = 0; i < 3; i++)
	{
		vec2[i] = rand_num();
		printf("%d ", vec2[i]);
	}
	printf(")\n\n");

	int in = inner(pa, pb);
	printf("두 벡터의 내적 = %d", in);

	outter(pa, pb, result);

	printf("\n\n두 벡터의 외적 = (%d, %d, %d)\n", result[0], result[1], result[2]);
}