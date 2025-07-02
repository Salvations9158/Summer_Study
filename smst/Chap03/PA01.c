#include <stdio.h>

void Quadrilateral();

int main()
{
	Quadrilateral();
	return 0;
}

void Quadrilateral()
{
	int length = 0; //길이

	printf("한 변의 길이 ? ");
	scanf_s("%d", &length);

	printf("정사각형의 넓이 : %d\n", length * length);
	printf("정사각형의 넓이 : %d", length * 4);

	return;

}