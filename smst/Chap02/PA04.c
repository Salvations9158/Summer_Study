#include <stdio.h>

void time();

int main()
{
	time();
	return 0;
}

void time()
{
	int h = 0; //��
	int m = 0; //��
	int s = 0; //��

	printf("��?");
	scanf_s("%d", &h);
	printf("��?");
	scanf_s("%d", &m);
	printf("��?");
	scanf_s("%d", &s);

	printf("�Է��� �ð��� %02d:%02d:%02d�Դϴ�.", h, m, s);

	return;
}
