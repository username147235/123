#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define range 10

int rand_num()
{
	int num = rand() % range;
	return num;
}

int inner(int a1, int a2, int a3, int b1, int b2, int b3)
{
	int in = (a1 * b1) + (a2 * b2) + (a3 * b3);
	return in;
}

int outter(int a1, int a2, int b1, int b2)
{
	int out = (a1 * b2) - (a2 * b1);
	return out;
}

int main(void)
{
	srand((unsigned int)(time(NULL)));

	int* pa1, * pa2, * pa3, * pb1, * pb2, * pb3;

	int vec1[3];
	int vec2[3];
	pa1 = &vec1[0]; pa2 = &vec1[1]; pa3 = &vec1[2]; pb1 = &vec2[0]; pb2 = &vec2[1]; pb3 = &vec2[2];

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

	int in = inner(*pa1, *pa2, *pa3, *pb1, *pb2, *pb3);
	printf("두 벡터의 내적 = %d", in);

	int out_x, out_y, out_z;
	out_x = outter(*pa2, *pa3, *pb2, *pb3);
	out_y = -outter(*pa1, *pa3, *pb1, *pb3);
	out_z = outter(*pa1, *pa2, *pb1, *pb2);

	printf("\n\n두 벡터의 외적 = (%d, %d, %d)\n", out_x, out_y, out_z);
}