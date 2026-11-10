#include "app.h"

int main()
{

    //-1, 0, 4, 0, 5, -2, 6, 1, 3
    int matrix3x3[3][3] = {
        {-1, 0, 4},
        {0, 5, -2},
        {6, 1, 3}
    };

    int len = sizeof(matrix3x3);

    matrix3x3[1][1] = -5;

    int i;
    
    for (i = 0; i < 3; i++)
    {
        int j;

        for (j = 0; j < 3; ++j)
        {
            char sign = SIGNUM(matrix3x3[i][j]);

            printf("%c%d\t", sign, matrix3x3[i][j]);
        }

        printf("\n");
    }

    int max = matrix3x3[0][0];

    for (i = 0; i < 3; i++)
    {
        int j;

        for (j = 0; j < 3; ++j)
        {
            if (matrix3x3[i][j] > max)
            {
                max = matrix3x3[i][j];
            }
        }
    }

    printf("Magic number %d\n", len);
    printf("Max item %d\n", max);

    return 0;
}