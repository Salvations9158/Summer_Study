#include <stdio.h>
#include <math.h>

#define PI 3.141592

int Volume();
void Calculation(const double* length, double* sphereVolume);

int main()
{
	Volume();
	return 0;
}

int Volume()
{
	double l = 0.0;
	double result = 0.0;

	printf("�������� ����: ");
	scanf_s("%lf", &l);

	Calculation(&l, &result);

	printf("���� ����: %f", result);

	return 0;
}

void Calculation(const double* length, double* sphereVolume)
{
	*sphereVolume = 4.0 / 3.0 * PI * pow(*length, 3);
}