#include "arrays.h"

int count_diff_sign_pair(int a[], int size)
{
    int i, counter = 0;

    for (i = 0; i < size - 1; ++i)
    {
        if (SIGN(a[i]) != SIGN(a[i + 1]))
        {
            ++counter;
        }
    }

    return counter;
}

void print_array(int a[], int size)
{
    int i;
    
    for (i = 0; i < size; ++i)
    {
        char c = i < size - 1 ? ' ' : '\0';

        printf("%4d%c", a[i], c);
    }

    printf("\n");
}