#include <stdio.h>

void today();

int main()
{
	today();
	return 0;
}

void today()
{
	int year = 0; //��
	int month = 0; //��
	int day = 0; //��

	printf("��?");
	scanf_s("%d", &year);
	printf("��?");
	scanf_s("%d", &month);
	printf("��?");
	scanf_s("%d", &day);

	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, day);

	return;
}
