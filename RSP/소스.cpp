#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define R_S_P 3
#define R 0
#define P 1
#define S 2
#define n 100
#define End 999

#define Win 11
#define Lose 12
#define Draw 13

void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}

unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

unsigned int CalcRpsGameRes(unsigned int nPlayerRps, unsigned nComRps)
{
	if (nPlayerRps == nComRps)
	{
		return Draw;
	}
	if ((nPlayerRps == R) && (nComRps == S))
	{
		return Win;
	}
	else if ((nPlayerRps == S) && (nComRps == R))
	{
		return Lose;
	}
	else
	{
		if (nPlayerRps < nComRps)
		{
			return Win;
		}
		else
		{
			return Lose;
		}
	}

}

int main(void)
{

	unsigned int nComRps = n;
	unsigned int nPlayerRps = n;

	while (1)
	{
		printf("input(Rock = 0, Paper = 1, Scissos = 2\npause = 999\n");
		scanf_s("%d", &nPlayerRps);

		if (nPlayerRps == End)
		{
			printf("End RPS game\n");
			break;
		}

		if ((nPlayerRps < 0) || (nPlayerRps >= R_S_P))
		{
			printf("check your input condition\n\n");
			continue;
		}

		unsigned int nComRps = GenRandNum(R_S_P);

		unsigned int nGameRpsRes = CalcRpsGameRes(nPlayerRps, nComRps);

		printf("status(Player, Conputer) (%d, %d)", nPlayerRps, nComRps);

		switch (nGameRpsRes)
		{
		case Win:
		{
			printf("You Win!\n\n");
			break;
		}
		case Lose:
		{
			printf("You Lose!\n\n");
			break;
		}
		case Draw:
		{
			printf("Draw!\n\n");
			break;
		}
		default:
		{
			printf("check your input condition\n\n");\
			break;
		}
		}
	}

}