#include <stdio.h>

void size();

int main()
{
	size();

	return 0;
}

void size()
{
	char s = '\0'; // ������

	printf("�� ������(S,M,L)? ");
	scanf_s("%c", &s, 1);
	printf("%c ����� �����߽��ϴ�.", s);

	return;
}
