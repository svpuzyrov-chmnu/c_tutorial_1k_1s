#include "app.h"

int main()
{
    
    int a = 10;

    int b = 203;

    int *pa;

    pa = &a;

    printf("a=%d\n", a);

    *pa = 20;

    printf("a=%d\n", a);

    pa = &b;

    printf("b=%d\n", b);

    *pa = 256;
    
    printf("b=%d\n", b);

    double f = 1.45;

    double *pf = &f;

    // pf = &a; //warning
    
    //&, *, pa + n, pa - n, --pa, ++pa, pa++, pa--, pa - pb

    int ar1[3] = { -1, 2, 5 };

    pa = &ar1[0];
    pa = ar1;

    printf("%d\n", ar1[0]);
    printf("%d\n", *ar1);

    //ar1[i] == *(ar1 + i) == *(i + ar1) = i[ar1];

    printf("%d\n", ar1[2]);
    printf("%d\n", *(ar1 + 2));
    printf("%d\n", 1[ar1]);

    return 0;
}