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
        double item = matrix[i][j]; \
        printf("%4.2f ", item); \
    } \
    printf("\n"); \
} \
}


#define PRINT_VECTOR(v, m) \
{\
int i; \
for (i = 0; i < m; i++) \
{ \
    printf("%4.2f ", v[i]); \
} \
}
