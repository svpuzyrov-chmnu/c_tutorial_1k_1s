#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PRINT_ARRAY(a, size) \
for (i = 0; i < size; ++i) \
{ \
    printf("%d ", a[i]); \
}