#include <stdio.h>

void number();

int main()
{
	number();
	return 0;
}

void number()
{
	int num = 0; //���� �Է�

	printf("16���� ����?");
	scanf_s("%x", &num);
	printf("16���� %x�� 10������ %d�Դϴ�.", num, num);

	return;
}