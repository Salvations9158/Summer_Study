#include <stdio.h>

#define PI 3.141592

int Cylinder();
void Calculation(const int* length, const int* height, double* volume);

int main()
{
	Cylinder();
	return 0;
}

int Cylinder()
{
	int l = 0;
	int h = 0;
	double result = 0.0;

	printf("반지름의 길이? ");
	scanf_s("%d", &l);

	printf("높이? ");
	scanf_s("%d", &h);

	Calculation(&l, &h, &result);

	printf("원기둥의 부피: %f", result);
	return 0;
}

void Calculation(const int* length, const int* height, double* volume)
{
	*volume = PI * (*length) * (*length) * (*height);
}