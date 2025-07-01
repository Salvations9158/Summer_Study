#include <stdio.h>

void pri();

int main()
{
	pri();
	return 0;
}

void pri()
{
	printf("int main(void)\n{\n    return 0;\n}");
	return;
}