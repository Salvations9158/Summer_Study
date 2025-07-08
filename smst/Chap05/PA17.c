/* 파일명: assignment17.c
* 내용: PA17. 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오. 주차요금은 최초 30분은 2000원
* 그 이후는 10분당 1000원씩으로 계산하며, 하루 최대 25000원을 넘을 수 없다. 주차 시간은 24시간을 넘을 수는 없다고 가정한다.
* 작성자: 전민규
* 날짜: 2025.7.8
* 버전: v1.0
*/
#include <stdio.h>

int PA17();
void C(const int* minutesInput, int* totalFee);

int main()
{
	PA17();
	return 0;
}

int PA17()
{
	int m = 0;
	int result = 0;

	printf("주차 시간(분)? ");
	scanf_s("%d", &m);

	C(&m, &result);

	printf("주차 요금: %d원\n", result);

	return 0;
}

void C(const int* minuteInput, int* total)
{
	int CM = *minuteInput;
	*total = 0;

	if (CM <= 0)
	{
		*total = 0;
	}
	else if (CM <= 30)
	{
		*total = 2000;
	}
	else
	{
		*total = 2000;
		int RM = CM - 30;
		int add = (RM + 9) / 10;
		*total += add * 1000;
	}

	if (*total > 25000)
	{
		*total = 25000;
	}
}