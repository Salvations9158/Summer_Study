#include <stdio.h>

#define M2 0.3025

void apt();

int main()
{
    apt();
    return 0;
}

void apt()
{
    double a = 0.0L; //����

    printf("����Ʈ�� ����(��������)? ");
    scanf_s("%lf", &a);

    printf("%.2f �������� = %.2f ��", a, a * M2);

    return;
}