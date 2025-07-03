#include <stdio.h>
#include <math.h>

int Hypotenuse();
void Calculation(const double* bottom, const double* height, double* hypotenuseLength);

int main()
{
	Hypotenuse();
	return 0;
}

int Hypotenuse()
{
	double b = 0.0;
	double h = 0.0;
	double result = 0.0;

	printf("�غ�? ");
	scanf_s("%lf", &b);

	printf("����? ");
	scanf_s("%lf", &h);

	Calculation(&b, &h, &result);

	printf("������ ����: %f", result);
	return 0;
}

void Calculation(const double* bottom, const double* height, double* hypotenuseLength)
{
	*hypotenuseLength = sqrt(pow(*bottom, 2) + pow(*height, 2));
}