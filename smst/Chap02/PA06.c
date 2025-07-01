#include <stdio.h>

void size();

int main()
{
	size();

	return 0;
}

void size()
{
	char s = '\0'; // 사이즈

	printf("옷 사이즈(S,M,L)? ");
	scanf_s("%c", &s, 1);
	printf("%c 사이즈를 선택했습니다.", s);

	return;
}
