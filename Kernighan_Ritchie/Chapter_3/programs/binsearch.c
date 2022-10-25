#include <stdio.h>

main()
{
    int x = 10;
    int n = 15;

    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    printf("position of the number is %d\n", binsearch(x, arr, n));
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
