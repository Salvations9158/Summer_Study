#include <stdio.h>

void gri(const double* w_ptr, const double* h_ptr, double* a_ptr, double* p_ptr);
int pa11();

int main()
{
    pa11();
    return 0;
}

int pa11()
{
    double w = 0.0;
    double h = 0.0;
    double a = 0.0;
    double p = 0.0;

    printf("가로? ");
    scanf_s("%lf", &w);

    printf("세로? ");
    scanf_s("%lf", &h);

    gri(&w, &h, &a, &p);

    printf("넓이: %.0f, 둘레: %.0f\n", a, p);

    return 0;
}

void gri(const double* w_ptr, const double* h_ptr, double* a_ptr, double* p_ptr)
{
    *a_ptr = *w_ptr * *h_ptr;
    *p_ptr = 2 * (*w_ptr + *h_ptr);
}