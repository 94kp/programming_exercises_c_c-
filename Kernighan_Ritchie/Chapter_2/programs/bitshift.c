#include <stdio.h>

main()
{
    signed int x = -32;
    int i = 0;

    for (i = 0; i < 50; i++)
    {
        x = x << 2;
        printf("%x\n", x);
    }
}
