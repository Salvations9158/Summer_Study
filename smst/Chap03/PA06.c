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
    double a = 0.0L; //면적

    printf("아파트의 면적(제곱미터)? ");
    scanf_s("%lf", &a);

    printf("%.2f 제곱미터 = %.2f 평", a, a * M2);

    return;
}