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
		"wonder",			// books[0]�� �ʱⰪ
		"me before you",	// ;;
		"the hunger games",	// ;;
		"twilight",			// ;;
		"harry potter"		// ;;
	};
	int i = 0;

	for (i = 0; i < 5; i++)
		printf("å ����: %s\n", books[i]);

	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))	// i��° ���ڿ��� 0��° ���� ���
			books[i][0] = toupper(books[i][0]);
	}

	puts("<< ���� �� >>");
	for (i = 0; i < 5; i++)
		printf("å ����: %s\n", books[i]);

	return 0;
}