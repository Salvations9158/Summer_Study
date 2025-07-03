#include <stdio.h>

void TimeCalculation(const int* totalSeconds, int* hours, int* minutes, int* seconds);

int main()
{
	int video = 0;
	int h = 0;
	int m = 0;
	int t = 0;

	printf("재생시간(초)? ");
	scanf_s("%d", &video);

	TimeCalculation(&video, &h, &m, &t);

	printf("재생시간은 ");

	h ? printf("%d시간", h) : 0;
	m ? printf("%d분", m) : 0;
	t ? printf("%d초", t) : 0;

	printf("입니다.\n");

	return 0;
}

void TimeCalculation(const int* totalSeconds, int* hours, int* minutes, int* seconds)
{
	*hours = *totalSeconds / 3600;
	*minutes = (*totalSeconds % 3600) / 60;
	*seconds = *totalSeconds % 60;
}