#include "app.h"

#define ROWS 3
#define COLS 3

int main()
{

    int m1[ROWS][COLS] = {
        { -1, 0, 4 },
        { 0, 5, -2 },
        { 6, 1, 3 }
    };

    int m2[ROWS][COLS] = {
        { 2, 3, 1 },
        { -12, 11, 4 },
        { 7, -3, 0 }
    };

    int mr[ROWS][COLS] = {
        { 0 },
        { 0 },
        { 0 }
    };


    PRINT_MATRIX(m1, ROWS, COLS);

    printf("-----------------------\n");

    PRINT_MATRIX(m2, ROWS, COLS);

    printf("Sum of matrix\n");

    {
        int i;
        for (i = 0; i < ROWS; ++i)
        {
            int j;
            for (j = 0; j < COLS; ++j)
            {
                mr[i][j] = m1[i][j] + m2[i][j];
            }

        }
    }
    
    PRINT_MATRIX(mr, ROWS, COLS);
    printf("-----------------------\n");

    printf("Diff of matrix\n");

    {
        int i;
        for (i = 0; i < ROWS; ++i)
        {
            int j;
            for (j = 0; j < COLS; ++j)
            {
                mr[i][j] = m1[i][j] - m2[i][j];
            }

        }
    }

    PRINT_MATRIX(mr, ROWS, COLS);
    printf("-----------------------\n");

    printf("Mult of matrix\n");

    {
        int i;
        for (i = 0; i < ROWS; ++i)
        {
            int j;
            for (j = 0; j < COLS; ++j)
            {
                int k;

                mr[i][j] = 0;

                for (k = 0; k < COLS; ++k)
                {
                    mr[i][j] += m1[i][k] * m2[k][j];
                }
            }

        }
    }

    PRINT_MATRIX(mr, ROWS, COLS);
    printf("-----------------------\n");

    return 0;
}