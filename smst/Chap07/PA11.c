#include <stdio.h>

#define NS 5
#define NC 4

void cs(int (*sc_ptr)[NC], int* tsp_ptr, double* asc_ptr);
void pr(const int (*sc_ptr)[NC], const int* tsp_ptr, const double* asc_ptr);
int pa11();

int main()
{
    pa11();
    return 0;
}

int pa11()
{
    int sc[NS][NC] = {
        {28, 28, 26, 9},
        {30, 27, 30, 10},
        {25, 26, 24, 8},
        {18, 22, 22, 5},
        {24, 25, 30, 10}
    };

    int tsp[NS];
    double asc[NC];

    cs(sc, tsp, asc);
    pr(sc, tsp, asc);

    return 0;
}

void cs(int (*sc_ptr)[NC], int* tsp_ptr, double* asc_ptr)
{
    for (int i = 0; i < NS; i++)
    {
        tsp_ptr[i] = 0;
        for (int j = 0; j < NC; j++)
        {
            tsp_ptr[i] += sc_ptr[i][j];
        }
    }

    for (int j = 0; j < NC; j++)
    {
        double c_sum = 0;
        for (int i = 0; i < NS; i++)
        {
            c_sum += sc_ptr[i][j];
        }
        asc_ptr[j] = c_sum / NS;
    }
}

void pr(const int (*sc_ptr)[NC], const int* tsp_ptr, const double* asc_ptr)
{
    printf("학생 번호: 중간고사 기말고사 팀프로젝트 출석 => 총점\n");

    for (int i = 0; i < NS; i++)
    {
        printf("학생 %d번: ", i + 1);
        for (int j = 0; j < NC; j++)
        {
            printf("%-6d ", sc_ptr[i][j]);
        }
        printf("=> %d\n", tsp_ptr[i]);
    }

    printf("항목별 평균: ");
    for (int j = 0; j < NC; j++)
    {
        printf("%.2f ", asc_ptr[j]);
    }
    printf("\n");
}