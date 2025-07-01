#include <stdio.h>

void weight();

int main()
{
	weight();
	return 0;
}

void weight()
{
	float w = 0.0; //무게

	printf("몸무게?");
	scanf_s("%f", &w);
	printf("입력한 몸무게는 %.2fKG입니다.", w);

	return 0;
}