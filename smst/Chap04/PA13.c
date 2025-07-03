#include <stdio.h>
#include <math.h>

int LineLength();
void CalculateLineLength(const int* x1, const int* y1, const int* x2, const int* y2, double* length);

int main()
{
	LineLength();
	return 0;
}

int LineLength()
{
	int x_one = 0;
	int y_one = 0;
	int x_two = 0;
	int y_two = 0;
	double resultLength = 0.0;

	printf("직선의 시작점의 좌표 (x1, y1)? ");
	scanf_s("%d %d", &x_one, &y_one);

	printf("직선의 끝점의 좌표 (x2, y2)? ");
	scanf_s("%d %d", &x_two, &y_two);

	CalculateLineLength(&x_one, &y_one, &x_two, &y_two, &resultLength);

	printf("직선의 길이: %f\n", resultLength);

	return 0;
}

void CalculateLineLength(const int* x1, const int* y1, const int* x2, const int* y2, double* length)
{
	double dx = (double)(*x2 - *x1);
	double dy = (double)(*y2 - *y1);
	*length = sqrt(dx * dx + dy * dy);
}