#include <stdio.h>

void scoreOut(void);

int main()
{
	scoreOut();
	return 0;
}

void scoreOut(void)
{
	int number = 0; //번호
	float score = 0; //학점

	printf("번호?");
	scanf_s("%d", &number);
	printf("학점?");
	scanf_s("%f", &score);

	printf("%d번 학생의 학점은 %f입니다.", number, score);
	return;
}
