#include <stdio.h>
#include <string.h>
#include <cstring>
#define l 1000

int main(void)
{
	char str[l];
	char c[50];

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = ' ';

	int a, j, k, i = 0;
	char w[50];
	char rev_w[50];
	printf("\n변형된 문자열: ");
	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 50; j++)
		{
			k = j + i;
			if (str[k] == ' ')
			{
				for (a = j-1; a >= 0; a--) 
				{
					printf("%c", w[a]);
					w[a] = '\0';
				}
				printf(" ");
				i += j;
				j = 50;
			}
			else
			{
				w[j] = str[k];
			}
		}
	}
}