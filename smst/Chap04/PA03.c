#include <stdio.h>

int Density();
void Calculation(const double* weight, const double* volume, double* density);

int main()
{
	Density();
	return 0;
}

int Density()
{
	double g = 0.0;
	double v = 0.0;
	double result = 0.0;

	printf("����(g)? ");
	scanf("%lf", &g);

	printf("����(��������Ƽ����)? ");
	scanf("%lf", &v);

	Calculation(&g, &v, &result);

	printf("�е�: %f", result);

	return 0;
}

void Calculation(const double* weight, const double* volume, double* density)
{
	*density = *weight / *volume;
}