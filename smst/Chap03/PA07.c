#include <stdio.h>

void square();

int main()
{
	square();
	return 0;
}

void square()
{
	double an = 0.0L;//�Ǽ���

	printf("�Ǽ�? ");
	scanf_s("%lf", &an);

	printf("����: %e\n", an * an);
	printf("������: %e", an * an * an);

	return;
}