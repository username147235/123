#include<stdio.h>

int main(void)
{
	float score;							//�Է¹��� ���� ����

	printf("������ �Է��Ͻÿ�(0~100): ");
	scanf_s("%fl", &score);					//���� �Է�

	if (score >= 90.0)						//score�� 90 �̻��� ��
	{
		printf("A\n");						//A�� ���
	}
	else if (score >= 80.0)					//score�� ���� if���� ���Ե��� �ʰ� 80 �̻��� ��
	{
		printf("B\n");						//B�� ���
	}		
	else if (score >= 70.0)					//score�� ���� if���� ���Ե��� �ʰ� 70 �̻��� ��
	{
		printf("C\n");						//C�� ���
	}
	else if (score >= 60.0)					//score�� ���� if���� ���Ե��� �ʰ� 60 �̻��� ��
	{
		printf("D\n");						//D�� ���
	}
	else									//score�� ���� if���� ���Ե��� ���� ��
	{
		printf("F\n");						//F�� ���
	}
	return 0;
}