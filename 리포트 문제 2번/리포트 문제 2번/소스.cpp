#include<stdio.h>

//문제의 조건: 입력된 금액과 물건값을 통해 거스름돈과 지급해야 할 지폐/동전의 개수를 계산하여 출력

int main(void)
{
	int money;//입력받을 금액 선언
	int price;//입력받을 물건값 선언

	printf("투입할 금액, 물건값: ");
	scanf_s("%d%d", &money, &price);//투입할 금액과 가격 입력

	printf("거스름돈 : %d원\n", money - price);//거스름돈 계산
	printf("지급해야 할 1000원 지폐 %d장\n", (money - price) / 1000);//지급해야 할 1000원 지폐 개수
	printf("지급해야 할 500원 주화 %d개\n", (money - price) % 1000 / 500);//지급해야 할 500원 주화 개수
	printf("지급해야 할 100원 주화 %d개\n", (money - price) % 500 / 100);//지급해야 할 100원 주화 개수

	return 0;
}