#include<stdio.h>

int main(void)
{
	int n;//입력받을 정수 선언

	printf("한개의 정수를 입력하시오: ");	//정수를 입력받기 위한 문구 출력
	scanf_s("%d", &n);						//정수 입력

	if (n % 2 == 0)							//n % 2가 0일 시
	{
		printf("%d은/는 짝수 입니다\n", n);	//n은 짝수임을 출력
	}
	else									//아닐 시
	{
		printf("%d은/는 홀수 입니다\n", n);	//n은 홀수임을 출력
	}

	return 0;
}