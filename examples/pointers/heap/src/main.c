#include "app.h"

int main()
{
    
    {
        //stdlib
        //malloc, calloc, free
        int* pa;
        double* pf;

        double temps[] = { -2.4, -3.1, 0.5, 5.3, 7.9 };

        double* pf1 = temps + 4;

        pf1 -= 2;

        printf("Tmp: %.3f\n", *pf1);

        double *pf2 = malloc(sizeof(double));

        printf("%.3f\n", *pf2);

        int* pi = malloc(sizeof(int));

        printf("%d\n", *pi);

        free(pi);
        free(pf2);

        int sz = 60000;

        double *ptemp = malloc(sizeof(double) * sz);

        for (int i = 0; i < sz; ++i)
        {
            *(ptemp + i) = 0.0;
        }

        free(ptemp);
    }

    {
        int sz = 60000;
        
        double *tmp = calloc(sz, sizeof(double));

        if (!tmp)
        {
            printf("Not enogugh memory\n");

            return -100;
        }

        for (int i = 0; i < sz; ++i)
        {
            *(tmp + i) = 0.0;
        }

        free(tmp);
    }


    //{
    //    int sz = 100000000;

    //    int* data;

    //    while (1)
    //    {
    //        data = calloc(sz, sizeof(int));
    //    }

    //    free(data);
    //}

    {
        int rows = 3, cols = 3;

        int **m = calloc(rows, sizeof(int*));

        for (int i = 0; i < rows; ++i)
        {
            m[i] = calloc(cols, sizeof(int));
        }

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                m[i][j] = 0;
            }
        }
    }

    {
        int rows = 3, cols = 3;

        int* m = calloc(rows * cols, sizeof(int));

        for (int i = 0; i < rows * cols; ++i)
        {
            m[i] = 0;
        }
        /*
        * |  |  |  | | | | | | |
        * ---------
        *          ------
        *                -------
        */
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                m[j + i*cols] = 0.0;
            }
        }
    }



    return 0;
}