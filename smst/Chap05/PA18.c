/* 파일명: assignment18.c
* 내용: PA18. 17번의 정산요금 프로그램을 주차 시간에 0이 입력될 때 까지 반복 수행하도록 수정하시오 
* 작성자: 전민규
* 날짜: 2025.7.8
* 버전: v1.0
*/
#include <stdio.h>

int PA17();
void C(const int* minutesInput, int* totalFee);

int main()
{
	PA18();
	return 0;
}

int PA18()
{
	int m = 0;
	int result = 0;
	const int MAX_MINUTES = 1440; // 24시간 = 1440분

	while (1)
	{
		printf("주차 시간(분)? ");
		scanf_s("%d", &m);

		if (m == 0)
		{
			break;
		}

		if (m > MAX_MINUTES)
		{
			printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
			continue;
		}

		C(&m, &result);

		printf("주차 요금: %d원\n", result);
	}

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