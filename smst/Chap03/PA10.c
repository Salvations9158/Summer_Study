#include <stdio.h>

void exchange();

int main()
{
	exchange();
	return 0;
}

void exchange()
{
	double dollor, won = 0.0L; //�޷��� ��ȭ ���� �� �ʱ�ȭ

	printf("KRW? ");
	scanf_s("%lf", &dollor);

	printf("��/�޷� ȯ��? ");
	scanf_s("%lf", &won);

	printf("USD %.2f = KRW %.2f", dollor, dollor * won);

	return;
}