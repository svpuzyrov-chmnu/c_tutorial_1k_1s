#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PRINT_ARRAY(a, size) \
for (i = 0; i < size; ++i) \
{ \
    printf("%d ", a[i]); \
}

//Selection sort O(n^2)
#define SELECTION_SORT(array, size) \
for (i = 0; i < size - 1; ++i) \
{ \
    int j; \
    int k = i; \
    for (j = i + 1; j < size; ++j) \
    { \
        if (array[j] < array[k]) \
        { \
            k = j; \
        } \
    } \
    if (k > i) \
    { \
        int temp = array[k]; \
        array[k] = array[i]; \
        array[i] = temp; \
    } \
}