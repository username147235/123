#include <stdio.h>

int main(void)
{
	int A; 
	int B; 
	int C;
	char M = 'a';

	printf("��Ģ���� �Է�(����) : ");
	scanf_s("%d%c%d", &A, &M, sizeof(M), &B);
	//!!!!!!!!!!!!!!!!!sizeof ������� �ȵ� 30�� ������!!!!!!!!!!!!!!
	if (M == '+')
	{
		C = A + B;
	}
	else if (M == '-')
	{
		C = A - B;
	}
	else if (M == '*')
	{
		C = A * B;
	}
	else if (M == '/')
	{
		C = A / B;
	}

	printf("%d%c%d=%d\n", A, M, B, C);
return 0;
}