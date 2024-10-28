#include<stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;
	for (o = 0; o < 4; o++)
	{
		for (i = -5; i <= 5; i++)
		{
			for (n = 0; n < 4; n++)
			{
				for (l = 1; l <= 2; l++)
				{
					for (k = 1; k <= 3; k++)
					{
						if (i < 0)
						{
							j = -i;
						}
						else
						{
							j = i;
						}
						if (l == 2)
						{
							m = 4 - k;
						}
						else
						{
							m = k;
						}
						switch (m)
						{
						case 1:
							for (j; j >= 0; j--)
							{
								printf(" ");
							}
							break;
						case 2:
							for (j; j >= 0; j--)
							{
								printf("*");
							}
							break;
						case 3:
							for (j = 10 - j * 2; j >= 0; j--)
							{
								printf(" ");
							}
							break;
						}
					}
				}
			}
			printf("\n");
		}
	}
}