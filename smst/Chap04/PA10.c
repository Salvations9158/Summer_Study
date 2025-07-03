#include <stdio.h>

void ConvertTime(const double* totalHours, int* days, int* hours, int* minutes);

int main()
{
    double timetaken = 0.0;
    int d = 0;
    int h = 0;
    int m = 0;

    printf("시간(시간 단위, 예: 25.5)? ");
    scanf_s("%lf", &timetaken);

    ConvertTime(&timetaken, &d, &h, &m);

    printf("시간: %d일 %d시간 %d분\n", d, h, m);

    return 0;
}

void ConvertTime(const double* totalHours, int* days, int* hours, int* minutes)
{
    *days = (int)(*totalHours / 24.0);
    double remainingHoursAfterDays = *totalHours - (*days * 24.0);
    *hours = (int)remainingHoursAfterDays;
    *minutes = (int)((remainingHoursAfterDays - *hours) * 60.0);
}