#include "app.h"

int b = 100;

int main()
{
    
    int i;

    for (i = 1000; i <= 10000; ++i)
    {
        if (is_prime(i))
        {
            printf("%d is prime\n", i);
        }
    }
    
    return 0;
}