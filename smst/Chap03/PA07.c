#include <stdio.h>

void square();

int main()
{
	square();
	return 0;
}

void square()
{
	double an = 0.0L;//½Ç¼ö°ª

	printf("½Ç¼ö? ");
	scanf_s("%lf", &an);

	printf("Á¦°ö: %e\n", an * an);
	printf("¼¼Á¦°ö: %e", an * an * an);

	return;
}