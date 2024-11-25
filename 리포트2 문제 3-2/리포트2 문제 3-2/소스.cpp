#include<stdio.h>
int main(void)
{
	float score;							//입력받을 점수 선언

	printf("점수를 입력하시오(0~100): ");	//점수를 입력받기 위한 문구 출력
	scanf_s("%fl", &score);					//점수 입력

	int a = score / 10;

	switch (a)				//a의 값이 얼마인지 확인
	{	
	case 10:				//가 10이면						┐
		printf("A\n");		//A를 출력하고					│
		break;				//블록을 벗어나 37행으로 이동	│
							//								│	case 10: case 9:	┐
	case 9:					//가 9면						├		printf("A\n");	├궁금증에 검색 해보니 이렇게 묶어도 상관없지만
		printf("A\n");		//A를 출력하고					│		break;			┘ppt자료에 나와있지 않아 분리했습니다
		break;				//블록을 벗어나 37행으로 이동	┘

	case 8:					//가 8이면
		printf("B\n");		//B를 출력하고
		break;				//블록을 벗어나 37행으로 이동

	case 7:					//가 7이면
		printf("C\n");		//C를 출력하고
		break;				//블록을 벗어나 37행으로 이동

	case 6:					//가 6이면
		printf("D\n");		//D를 출력하고
		break;				//블록을 벗어나 37행으로 이동
	
	default:				//a와 일치하는 case의 값이 없으면 
		printf("F\n");		//F를 출력하고
		break;				//블록을 벗어나 37행으로 이동
	}
	return 0;
}