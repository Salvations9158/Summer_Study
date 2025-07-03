#include <stdio.h>

int Conversion();
void Calculation(const double* fahrenheit, double* celsius);

int main()
{
	Conversion();
	return 0;
}

int Conversion()
{
	double F = 0.0;
	double C = 0.0;

	printf("È­¾¾¿Âµµ? ");
	scanf_s("%lf", &F);

	Calculation(&F, &C);

	printf("%.2f F = %.2f C", F, C);

	return 0;
}

void Calculation(const double* fahrenheit, double* celsius)
{
	*celsius = (*fahrenheit - 32) * 5.0 / 9.0;
}