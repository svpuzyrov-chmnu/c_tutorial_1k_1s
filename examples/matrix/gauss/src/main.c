#include "app.h"

#define ROWS 3
#define COLS 3

int main()
{
    printf("-----------------------\n");
    printf("Matrix\n");

    double m[ROWS][COLS] = {
        { -1.5, 0.8, 4.2 },
        { -0.8, 5.55, -2 },
        { 6, 1, 3 }
    };

    double rhs[ROWS] = {1.5, -2.0, -7.4};

    double x[ROWS] = {0};


    PRINT_MATRIX(m, ROWS, COLS);

    printf("\nVector\n");
    
    PRINT_VECTOR(rhs, ROWS);

    printf("\n-----------------------\n");

    {
        int i;
        for (i = 0; i < ROWS; ++i)
        {
            int j;
            int k = i;

            for (j = i + 1; j < ROWS; ++j)
            {
                if (fabs(m[j][i]) > fabs(m[k][i]))
                {
                    k = j;
                }
            }

            if (k > i)
            {
                for (j = i; j < COLS; ++j)
                {
                    double tmp = m[i][j];
                    m[i][j] = m[k][j];
                    m[k][j] = tmp;
                }
            }
            
            for (j = i+1; j < ROWS; ++j)
            {
                double factor = m[j][i]/m[i][i];

                for (k = i; k < COLS; ++k)
                {
                    m[j][k] -= m[i][k] * factor;
                }
            }

        }
    }

    printf("Gauss elimination\n");

    PRINT_MATRIX(m, ROWS, COLS);

    printf("-----------------------\n");

    printf("Find solution\n");

    {
        int i;
        for (i = ROWS - 1; i >= 0; --i)
        {
            double S = 0;
            int j;
            for (j = ROWS - 1; j > i; --j)
            {
                S += m[i][j] * x[j];
            }

            x[i] = (rhs[i] - S) / m[i][i];
        }
    }

    PRINT_VECTOR(x, ROWS);
    printf("\n-----------------------\n");

    return 0;
}