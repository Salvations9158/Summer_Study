#include <stdio.h>

void floatPlus();

int main()
{
	floatPlus();
	return 0;
}

void floatPlus()
{
	float num1 = 0;
	float num2 = 0;
	float result = 0.0;

	printf("½Ç¼ö 2°³?");
	scanf_s("%f %f", &num1, &num2);

	printf("%f + %f = %f", num1, num2, num1 + num2);
	printf("%f + %f = %f", num1, num2, num1 - num2);

	return;
}
