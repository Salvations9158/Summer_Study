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

	printf("반지름의 길이: ");
	scanf_s("%lf", &l);

	Calculation(&l, &result);

	printf("구의 부피: %f", result);

	return 0;
}

void Calculation(const double* length, double* sphereVolume)
{
	*sphereVolume = 4.0 / 3.0 * PI * pow(*length, 3);
}