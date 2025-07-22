#include <stdio.h>

typedef struct date {
	int year;
	int month;
	int day;
}DATE;

void is_same_date(DATE, DATE public_holiday[]);
void PA06();

int main()
{
	PA06();
	return 0;
}

void PA06() 
{
	DATE public_holiday[] = {
		{ 2020,  1,  1 }, { 2020,  1, 24 },
		{ 2020,  1, 25 }, { 2020,  1 ,26 },
		{ 2020,  1, 27 }, { 2020,  3,  1 },
		{ 2020,  4, 15 }, { 2020,  4, 30 },
		{ 2020,  5,  5 }, { 2020,  6,  6 },
		{ 2020,  8, 15 }, { 2020,  9, 30 },
		{ 2020, 10,  1 }, { 2020, 10,  2 },
		{ 2020, 10,  3 }, { 2020, 10,  9 },
		{ 2020, 12, 25 }
	};
	DATE data;
	int year, month, day;
	while (1)
	{
		printf("날짜(연월일)? ");
		scanf_s("%d %d %d", &year, &month, &day);

		if (year == 0 && month == 0 && day == 0)
			break;

		data.year = year;
		data.month = month;
		data.day = day;

		is_same_date(data, public_holiday);
	}

}

void is_same_date(DATE data, DATE public_holiday[]) 
{
	int size = 17;
	int i;
	int is_holiday = 0;

	for (i = 0; i < size; i++) {
		if (data.year == public_holiday[i].year && data.month == public_holiday[i].month && data.day == public_holiday[i].day) {
			printf("%d/%d/%d은 공휴일입니다.\n", data.year, data.month, data.day);
			is_holiday = 1;
			break;
		}
	}

	if (is_holiday == 0)
		printf("%d/%d/%d은 공휴일이 아닙니다.\n", data.year, data.month, data.day);
}