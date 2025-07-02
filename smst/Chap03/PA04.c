#include <stdio.h>

void J();

int main()
{
	J();
	return 0;
}

void J()
{
	double N = 0.0L; //힘
	double m = 0.0L; //질량

	printf("힘(N)? ");
	scanf_s("%lf", &N);

	printf("이동거리(m)? ");
	scanf_s("%lf", &m);

	printf("일의 양: %.2f J", N * m);

	return;
}