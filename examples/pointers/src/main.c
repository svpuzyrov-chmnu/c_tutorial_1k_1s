#include "app.h"

int b = 100;

int main()
{
    
    
    int a = 10;

    int *pa;

    pa = &a;

    printf("%d\n", a);

    *pa = 20;

    int ar1[3] = { -1, 2, 5 };

    pa = &ar1[0];


    printf("%d\n", ar1[0]);
    printf("%d\n", *ar1);

    // ++, --, -, &, 
    //p + n, p - n

    //pa + 1
    //pa - 1

    //ar1[i] == *(ar1 + i) == *(i + ar1) = i[ar1];

    printf("%d\n", ar1[1]);
    printf("%d\n", *(ar1 + 1));
    printf("%d\n", 1[ar1]);
    return 0;
}