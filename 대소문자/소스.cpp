#include <stdio.h>

int main(void)
{
	char A[1000];
	int count = 0;
	int upper_count = 0;

	printf("input text: ");
	fgets(A, 1000, stdin);

	printf("\noutput text: ");
	while (A[count])
	{
		if ((A[count] >= 65) && (A[count] <= 90))
		{
			A[count] += 32;
			upper_count++;
		}
		printf("%c", A[count]);
		count++;
	}
	printf("\nupper count = %d\n", upper_count);
	puts(A);
}