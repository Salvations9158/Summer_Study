#include <stdio.h>

int Assignment0401(void);
void GetMotionEnergy(double weight, const double velocity, const double* energy);

int main()
{
    Assignment0401();
    return 0;
}

int Assignment0401(void)
{
    double w, v = 0.0;
    double energy = 0.0;

    printf("질량 속도를 입력해주세요: ");
    scanf_s("%lf %lf", &w, &v);

    GetMotionEnergy(w, v, &energy);

    printf("질량: %.2f kg, 속력: %.2f m/s 의 운동에너지는 %.2f 입니다.", w, v, energy);
    return 0;
}

void GetMotionEnergy(double weight,double velocity, double* energy)
{

    *energy = 0.5 * weight * velocity * velocity;

}