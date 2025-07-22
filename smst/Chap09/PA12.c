#include <stdio.h>
#include <string.h>
#include <ctype.h>

int PA12();

int main()
{
	PA12();
	return 0;
}

int PA12()
{
	char books[5][30] = {
		"wonder",			// books[0]의 초기값
		"me before you",	// ;;
		"the hunger games",	// ;;
		"twilight",			// ;;
		"harry potter"		// ;;
	};
	int i = 0;

	for (i = 0; i < 5; i++)
		printf("책 제목: %s\n", books[i]);

	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))	// i번째 문자열의 0번째 문자 사용
			books[i][0] = toupper(books[i][0]);
	}

	puts("<< 변경 후 >>");
	for (i = 0; i < 5; i++)
		printf("책 제목: %s\n", books[i]);

	return 0;
}