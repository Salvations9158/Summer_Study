#include <stdio.h>

void Number();

int main()
{
    Number();
    return 0;
}

void Number() {
    int num = 0; //정수 입력

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
    printf("정수?");
    scanf_s("%i", &num);

    printf(" 8진수: %03o\n", num);
    printf("10진수: %d\n", num);
    printf("16진수: 0x%x\n", num);

    return;
}