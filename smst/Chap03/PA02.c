#include <stdio.h>

void rectangle();

int main()
{
	rectangle();
	return 0;
}

void rectangle()
{
	int width = 0; //���� ����
	int length = 0; //���� ����

	printf("������ ����? ");
	scanf_s("%d", &width);

	printf("������ ����? ");
	scanf_s("%d", &length);

	printf("���簢���� ����: %d\n", width * length);
	printf("���簢���� �ѷ�: %d", width * 2 + length * 2);

	return;
}