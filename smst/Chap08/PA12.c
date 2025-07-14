#include <stdio.h>

#define ARR_SZ 10 

int faia(const int* arr_ptr, const int* sz_ptr, const int* k_ptr, int* fi_ptr);
int pa12();

int main()
{
    pa12();
    return 0;
}

int pa12()
{
    int arr[ARR_SZ] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
    const int sz_val = ARR_SZ;

    int k = 0;
    int fi[ARR_SZ];
    int fc = 0;

    for (int i = 0; i < ARR_SZ; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n찾을 값? ");
    scanf_s("%d", &k);

    fc = faia(arr, &sz_val, &k, fi);

    printf("찾은 항목은 모두 %d개입니다.\n", fc);
    printf("찾은 항목의 인덱스: ");
    for (int i = 0; i < fc; i++)
    {
        printf("%d ", fi[i]);
    }
    printf("\n");

    return 0;
}

int faia(const int* arr_ptr, const int* sz_ptr, const int* k_ptr, int* fi_ptr)
{
    int count = 0;
    for (int i = 0; i < *sz_ptr; i++)
    {
        if (arr_ptr[i] == *k_ptr)
        {
            fi_ptr[count] = i;
            count++;
        }
    }
    return count;
}