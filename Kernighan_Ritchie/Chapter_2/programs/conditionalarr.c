#include <stdio.h>

main()
{
    int i;
    int n = 13;
    int arr[] = {1, 5, 32, 67, 3, 2, 9,6,7, 7, 7, 7, 4, 12, 12,3,3, 33, 4,4,3,432,42, 1,23 ,2,3};

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%6d%c", arr[i], (i%10==9 || i==n-1) ? '\n' : ' ');
}

