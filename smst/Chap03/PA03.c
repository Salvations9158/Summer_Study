#include <stdio.h>

void calcPositionEnergy(double weight, double height, double* penergy);

void assignment0303(void); 

int main()
{
    assignment0303();
    return 0;
}

void assignment0303(void)
{
    double kg, m = 0.0; 
    double energy = 0.0;

    printf("������ ���̸� �Է�: ");
    scanf_s("%lf %lf", &kg, &m);

    calcPositionEnergy(kg, m, &energy);
    printf("��ġ������: %f\n", energy);
}

void calcPositionEnergy(double weight, double height, double* penergy)
{
    *penergy = weight * height * 9.8;
}