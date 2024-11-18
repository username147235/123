#include<stdio.h>

int main(void)
{
	int n;//입력받을 정수 선언

	printf("한개의 정수를 입력하시오: ");	//정수를 입력받기 위한 문구 출력
	scanf_s("%d", &n);						//정수 입력

	switch (n % 2)							//n % 2의 값이 얼마인지 확인
	{
	case 0:									//n % 2이 0이면
		printf("%d은/는 짝수 입니다\n", n);	//n은 짝수임을 출력하고
		break;								//블록을 벗어나 20행으로 이동

	default:								//n % 2와 일치하는 case값이 없으면
		printf("%d은/는 홀수 입니다\n", n);	//n은 홀수임을 출력하고
		break;								//블록을 벗어나 20행으로 이동
	}
	return 0;
}