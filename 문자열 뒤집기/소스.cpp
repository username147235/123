#include <stdio.h>
#include <string.h>
#include <cstring>
#define l 1000

int main(void)
{
	char str[l];
	char* p = str;
	char c[50];

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	printf("입력받은 문자열: %s", str);
	str[strcspn(str, " ")] = ' ';

	int a, j, k = 0;
	char w[50];
	char rev_w[50];
	for (int i = 0; i < 100; i + 2)
	{
		for (j = 0; j < 50; j++)
		{
			k = j + i;
			if (str[k] == ' ')
			{
				for (a = j-1; a >= 0; a--) 
				{
					printf("%c", w[a]);
				}
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