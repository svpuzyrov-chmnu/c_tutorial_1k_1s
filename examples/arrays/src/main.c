#include "app.h"

int main()
{
    
    srand(time(NULL));

    int min = -1000, max = 1000;

    int array[10] = { -772, 20, -49, -490, 66, 441, 878, -305, -967, 994 };

    int size = sizeof(array) / sizeof(array[0]);

    int i;
    
    //Fill array by random numbers

    /*for (i = 0; i < size; ++i)
    {
        array[i] = rand() % (max - min + 1) + min;
    }*/

    //Print array before sorting
    PRINT_ARRAY(array, size);

    printf("\n");

    
    //Insertion sort O(n^2)
    //for (i = 0; i < size; ++i)
    //{
    //    int k = array[i];

    //    int j;
    //    //Find position to insert
    //    for (j = i - 1; j >= 0 && array[j] > k; --j)
    //    {
    //        array[j + 1] = array[j];
    //    }

    //    array[j + 1] = k;

    //}

    int k = 441;

    int index = -1;

    /*for (i = 0; i < size; ++i)
    {
        if (k == array[i])
        {
            index = i;
            break;
        }
    }*/

    SELECTION_SORT(array, size);


    int left = 0, right = size - 1;

    do
    {
        if (k == array[left])
        {
            index = left;
            break;
        }

        if (k == array[right])
        {
            index = right;
            break;
        }

        int mid = (left + right) / 2;

        if (k == array[mid])
        {
            index = mid;
            break;
        }

        if (k > array[mid])
        {
            left = mid;
        }
        else if (k < array[mid])
        {
            right = mid;
        }

        if (right - left == 1)
        {
            break;
        }
    } while (left < right);

    
    if (index == -1)
    {
        printf("Nothing was found\n");
    }
    else {
        printf("Found in position %d\n", index);
    }

    //Print array after sorting
    PRINT_ARRAY(array, size);

    return 0;
}