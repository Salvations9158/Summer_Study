#include <stdio.h>

void today();

int main()
{
	today();
	return 0;
}

void today()
{
	int year = 0; //연
	int month = 0; //월
	int day = 0; //일

	printf("연?");
	scanf_s("%d", &year);
	printf("월?");
	scanf_s("%d", &month);
	printf("일?");
	scanf_s("%d", &day);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);

	return;
}
