#include<stdio.h>

int main(void)
{
	float score;							//입력받을 점수 선언

	printf("점수를 입력하시오(0~100): ");
	scanf_s("%fl", &score);					//점수 입력

	if (score >= 90.0)						//score가 90 이상일 시
	{
		printf("A\n");						//A를 출력
	}
	else if (score >= 80.0)					//score가 위의 if문에 포함되지 않고 80 이상일 시
	{
		printf("B\n");						//B를 출력
	}		
	else if (score >= 70.0)					//score가 위의 if문에 포함되지 않고 70 이상일 시
	{
		printf("C\n");						//C를 출력
	}
	else if (score >= 60.0)					//score가 위의 if문에 포함되지 않고 60 이상일 시
	{
		printf("D\n");						//D를 출력
	}
	else									//score가 위의 if문에 포함되지 않을 시
	{
		printf("F\n");						//F를 출력
	}
	return 0;
}