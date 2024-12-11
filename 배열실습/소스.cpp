#include <stdio.h>

int main(void)
{
	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		switch (i % 3)
		{
		case 0:
			B[i] = A[0];
			break;

		case 1:
			B[i] = A[1];
			break;

		case 2:
			B[i] = A[2];
			break;

		default:
			break;
		}
		printf("%d  ", B[i]);
	}
}