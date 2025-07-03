#include <stdio.h>

int Percent();
void Calculation(const int* menstruum, const int* solute, double* percentage);

int main()
{
	Percent();
	return 0;
}

int Percent()
{
	int mg = 0;
	int sg = 0;
	double concentration = 0.0;

	printf("용매(g)? ");
	scanf_s("%d", &mg);

	printf("용질(g)? ");
	scanf_s("%d", &sg);

	Calculation(&mg, &sg, &concentration);

	printf("농도: %.2f %%\n", concentration);
	return 0;
}

void Calculation(const int* menstruum, const int* solute, double* percentage)
{
	*percentage = (double)*solute / (*menstruum + *solute) * 100;
}