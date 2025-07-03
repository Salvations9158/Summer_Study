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

	printf("질량(g)? ");
	scanf("%lf", &g);

	printf("부피(세제곱센티미터)? ");
	scanf("%lf", &v);

	Calculation(&g, &v, &result);

	printf("밀도: %f", result);

	return 0;
}

void Calculation(const double* weight, const double* volume, double* density)
{
	*density = *weight / *volume;
}