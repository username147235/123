#include<stdio.h>

int main(void)
{
	int n1;//입력받을 정수 선언
	int n2;//입력받을 정수 선언

	printf("두개의 정수를 입력하시오: ");	//정수를 입력받기 위한 문구 출력
	scanf_s("%d%d", &n1, &n2);				//정수 입력

	if (n1 % n2 == 0)										//n1 % n2의 값이 0이면
	{
		printf("%d은/는 %d의 배수 입니다\n", n1, n2);		//배수가 맞음을 출력
	}
	else													//아니면
	{
		printf("%d은/는 %d의 배수가 아닙니다\n", n1, n2);	//배수가 아님을 출력
	}

	return 0;
}