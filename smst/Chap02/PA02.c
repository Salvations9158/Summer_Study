#include <stdio.h>

void scoreOut(void);

int main()
{
	scoreOut();
	return 0;
}

void scoreOut(void)
{
	int number = 0; //��ȣ
	float score = 0; //����

	printf("��ȣ?");
	scanf_s("%d", &number);
	printf("����?");
	scanf_s("%f", &score);

	printf("%d�� �л��� ������ %f�Դϴ�.", number, score);
	return;
}
