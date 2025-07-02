#include <stdio.h>

void rectangle();

int main()
{
	rectangle();
	return 0;
}

void rectangle()
{
	int width = 0; //가로 길이
	int length = 0; //세로 길이

	printf("가로의 길이? ");
	scanf_s("%d", &width);

	printf("세로의 길이? ");
	scanf_s("%d", &length);

	printf("직사각형의 넓이: %d\n", width * length);
	printf("직사각형의 둘래: %d", width * 2 + length * 2);

	return;
}