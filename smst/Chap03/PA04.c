#include <stdio.h>

void J();

int main()
{
	J();
	return 0;
}

void J()
{
	double N = 0.0L; //��
	double m = 0.0L; //����

	printf("��(N)? ");
	scanf_s("%lf", &N);

	printf("�̵��Ÿ�(m)? ");
	scanf_s("%lf", &m);

	printf("���� ��: %.2f J", N * m);

	return;
}