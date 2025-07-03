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

    printf("���� �ӵ��� �Է����ּ���: ");
    scanf_s("%lf %lf", &w, &v);

    GetMotionEnergy(w, v, &energy);

    printf("����: %.2f kg, �ӷ�: %.2f m/s �� ��������� %.2f �Դϴ�.", w, v, energy);
    return 0;
}

void GetMotionEnergy(double weight,double velocity, double* energy)
{

    *energy = 0.5 * weight * velocity * velocity;

}