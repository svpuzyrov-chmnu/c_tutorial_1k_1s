#include "app.h"

int main()
{
    {
        int a1[] = { -1, 2, 4, 7, -5, -2, 1 };

        int sz = sizeof(a1) / sizeof(a1[0]);


        print_array(a1, sz);

        int count = count_diff_sign_pair(a1, sz);

        printf("Count of diff sign pair: %d\n", count);
    }

    {
        int a1[] = { -3, -5, 2, 1, 0, 5, -1, 2, 1, 5, 10 };

        int sz = sizeof(a1) / sizeof(a1[0]);


        print_array(a1, sz);

        int count = count_diff_sign_pair(a1, sz);

        printf("Count of diff sign pair: %d\n", count);
    }
    

    return 0;
}