#include <stdio.h>

int NavigationTime();
void CalculateArrivalTime(const double* distanceKm, const double* speedKmh, int* estimatedMinutes);

int main()
{
	NavigationTime();
	return 0;
}

int NavigationTime()
{
	double distance = 0.0;
	double speed = 0.0;
	int estimatedTime = 0;

	printf("이동 거리(km)? ");
	scanf_s("%lf", &distance);

	printf("예상 속력(km/h)? ");
	scanf_s("%lf", &speed);

	CalculateArrivalTime(&distance, &speed, &estimatedTime);

	printf("도착까지 예상 소요 시간은 %d분입니다.\n", estimatedTime);

	return 0;
}

void CalculateArrivalTime(const double* distanceKm, const double* speedKmh, int* estimatedMinutes)
{
	double hours = *distanceKm / *speedKmh;
	*estimatedMinutes = (int)(hours * 60.0);
}