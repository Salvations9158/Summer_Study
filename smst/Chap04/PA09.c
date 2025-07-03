#include <stdio.h>

void TimeCalculation(const int* totalSeconds, int* hours, int* minutes, int* seconds);

int main()
{
	int video = 0;
	int h = 0;
	int m = 0;
	int t = 0;

	printf("����ð�(��)? ");
	scanf_s("%d", &video);

	TimeCalculation(&video, &h, &m, &t);

	printf("����ð��� ");

	h ? printf("%d�ð�", h) : 0;
	m ? printf("%d��", m) : 0;
	t ? printf("%d��", t) : 0;

	printf("�Դϴ�.\n");

	return 0;
}

void TimeCalculation(const int* totalSeconds, int* hours, int* minutes, int* seconds)
{
	*hours = *totalSeconds / 3600;
	*minutes = (*totalSeconds % 3600) / 60;
	*seconds = *totalSeconds % 60;
}