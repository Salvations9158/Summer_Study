#include <stdio.h>

void Number();

int main()
{
    Number();
    return 0;
}

void Number() {
    int num = 0; //���� �Է�

    printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
    printf("����?");
    scanf_s("%i", &num);

    printf(" 8����: %03o\n", num);
    printf("10����: %d\n", num);
    printf("16����: 0x%x\n", num);

    return;
}