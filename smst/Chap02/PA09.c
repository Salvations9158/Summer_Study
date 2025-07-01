#include <stdio.h>

void number();

int main()
{
	number();
	return 0;
}

void number()
{
	int num = 0; //정수 입력

	printf("16진수 정수?");
	scanf_s("%x", &num);
	printf("16진수 %x는 10진수로 %d입니다.", num, num);

	return;
}