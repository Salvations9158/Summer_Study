#include <stdio.h>

int Inclination();
void Calculation(const int* xx1, const int* xx2, const int* yy1, const int* yy2, double* output);

int main()
{
	Inclination();
	return 0;
}

int Inclination()
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	double result = 0.0;

	printf("�� ���� ��ǥ (x1 ,y1)? ");
	scanf_s("%d %d", &x1, &y1);

	printf("�� �ٸ� ���� ��ǥ (x2 ,y2)? ");
	scanf_s("%d %d", &x2, &y2);

	Calculation(&x1, &x2, &y1, &y2, &result);

	printf("������ ����: %f", result);
	return 0;
}

void Calculation(const int* xx1, const int* xx2, const int* yy1, const int* yy2, double* output)
{
	*output = (double)(*yy2 - *yy1) / (double)(*xx2 - *xx1);
}