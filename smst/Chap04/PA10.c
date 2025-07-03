#include <stdio.h>

void ConvertTime(const double* totalHours, int* days, int* hours, int* minutes);

int main()
{
    double timetaken = 0.0;
    int d = 0;
    int h = 0;
    int m = 0;

    printf("�ð�(�ð� ����, ��: 25.5)? ");
    scanf_s("%lf", &timetaken);

    ConvertTime(&timetaken, &d, &h, &m);

    printf("�ð�: %d�� %d�ð� %d��\n", d, h, m);

    return 0;
}

void ConvertTime(const double* totalHours, int* days, int* hours, int* minutes)
{
    *days = (int)(*totalHours / 24.0);
    double remainingHoursAfterDays = *totalHours - (*days * 24.0);
    *hours = (int)remainingHoursAfterDays;
    *minutes = (int)((remainingHoursAfterDays - *hours) * 60.0);
}