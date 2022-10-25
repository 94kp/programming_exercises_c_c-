#include <stdio.h>

main()
{
    int c;
    int a;
    int b;

    a = 10.5;
    b = 20;

    c = a + b;

    printf("\n%d", (c > 0) ? a : b);
}

