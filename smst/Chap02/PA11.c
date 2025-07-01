#include <stdio.h>

void printPi();

int main()
{
    printPi();
    return 0;
}

void printPi()
{
    double pi = 3.14159265; //ÆÄÀÌ°ª

    printf("pi = %.2f\n", pi);
    printf("pi = %.4f\n", pi);
    printf("pi = %.6f\n", pi);
    printf("pi = %.8f\n", pi);
    printf("pi = %e\n", pi);

    return;
}