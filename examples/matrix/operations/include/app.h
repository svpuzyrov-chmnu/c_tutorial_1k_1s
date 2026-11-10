#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIGNUM(x) (x) < 0 ? 0 : ' '

#define PRINT_MATRIX(matrix, m, n) \
{\
int i; \
for (i = 0; i < m; i++) \
{ \
    int j; \
    for (j = 0; j < n; ++j) \
    { \
        int item = matrix[i][j]; \
        printf("%4d ", item); \
    } \
    printf("\n"); \
} \
}
