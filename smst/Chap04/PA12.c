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

	printf("�̵� �Ÿ�(km)? ");
	scanf_s("%lf", &distance);

	printf("���� �ӷ�(km/h)? ");
	scanf_s("%lf", &speed);

	CalculateArrivalTime(&distance, &speed, &estimatedTime);

	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.\n", estimatedTime);

	return 0;
}

void CalculateArrivalTime(const double* distanceKm, const double* speedKmh, int* estimatedMinutes)
{
	double hours = *distanceKm / *speedKmh;
	*estimatedMinutes = (int)(hours * 60.0);
}