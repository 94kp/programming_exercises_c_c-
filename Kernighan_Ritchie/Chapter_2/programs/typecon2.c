#include <stdio.h>

// void func(int p);

main()
{
    short x=8;

    func(x);
}


void func(int x)
{
    printf("%d\n", sizeof(x));
}   
