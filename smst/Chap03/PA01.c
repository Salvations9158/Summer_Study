#include <stdio.h>

void Quadrilateral();

int main()
{
	Quadrilateral();
	return 0;
}

void Quadrilateral()
{
	int length = 0; //����

	printf("�� ���� ���� ? ");
	scanf_s("%d", &length);

	printf("���簢���� ���� : %d\n", length * length);
	printf("���簢���� ���� : %d", length * 4);

	return;

}