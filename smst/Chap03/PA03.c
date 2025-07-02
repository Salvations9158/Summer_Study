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

    printf("질량과 높이를 입력: ");
    scanf_s("%lf %lf", &kg, &m);

    calcPositionEnergy(kg, m, &energy);
    printf("위치에너지: %f\n", energy);
}

void calcPositionEnergy(double weight, double height, double* penergy)
{
    *penergy = weight * height * 9.8;
}