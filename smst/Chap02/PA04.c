#include <stdio.h>

void time();

int main()
{
	time();
	return 0;
}

void time()
{
	int h = 0; //시
	int m = 0; //분
	int s = 0; //초

	printf("시?");
	scanf_s("%d", &h);
	printf("분?");
	scanf_s("%d", &m);
	printf("초?");
	scanf_s("%d", &s);

	printf("입력한 시간은 %02d:%02d:%02d입니다.", h, m, s);

	return;
}
