#include <stdio.h>

void exchange();

int main()
{
	exchange();
	return 0;
}

void exchange()
{
	double dollor, won = 0.0L; //달러와 원화 선언 및 초기화

	printf("KRW? ");
	scanf_s("%lf", &dollor);

	printf("원/달러 환율? ");
	scanf_s("%lf", &won);

	printf("USD %.2f = KRW %.2f", dollor, dollor * won);

	return;
}