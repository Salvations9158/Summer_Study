#include <stdio.h>

void weight();

int main()
{
	weight();
	return 0;
}

void weight()
{
	float w = 0.0; //����

	printf("������?");
	scanf_s("%f", &w);
	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", w);

	return 0;
}