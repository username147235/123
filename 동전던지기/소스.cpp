#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define Roll_Count 10000
#define Up 0
#define Down 1

unsigned int Coin_Roll()
{
	unsigned int status = 0;
	status = rand() % 2;
	return status;
}

int main(void)
{
	srand((unsigned int)(time(NULL)));

	double Count = Roll_Count;
	double Up_Count = 0.0000;
	double Down_Count = 0.0000;
	while (Count > 0)
	{
		unsigned int Coin_status = Coin_Roll();
	
		if (Coin_status == Up)
		{
			Up_Count = Up_Count + 1;
		}
		else
		{
			Down_Count = Down_Count + 1;
		}
		Count = Count - 1;
	}

	double Percentage_Up = (Up_Count / Roll_Count) * 100;
	double Percentage_Down = (Down_Count / Roll_Count) * 100;
	printf("결과 => 앞: %.0f, 뒤: %.0f\n\n", Up_Count, Down_Count);
	printf("앞면이 나올 확률 = %.2f\n뒷면이 나올 확률 = %.2f", Percentage_Up, Percentage_Down);
}