#include <stdio.h>
#include <math.h>

#define MAXSIZE 1000

enum hex_small
{
    a=10,
    b,
    c,
    d,
    e,
    f
};

enum hex_caps
{
    A=10,
    B,
    C,
    D,
    E,
    F
};

main()
{
    char hex[MAXSIZE];
    char dec[MAXSIZE];
    int c;
    int sum = 0;
    int i = -1;

    printf("Enter a hex value to convert to integer\n");

    while((c = getchar()) != '\n')
    {
        printf("%c\n", c);
        hex[++i] = c;
    }
    
    printf("%d\n", htoi(hex, i, dec));
}

int htoi(char s[], int len, char dec[])
{
    int i = 0;

    for (i = 0; i < len; i++)
    {
        if (s[i] > 0 && s[i] < 9)
        {
            dec[i] =  s[i];
        }
        else if (s[i] == 'a')
        {
            dec[i] =  a;
        }
        else if (s[i] == 'b')
        {
            dec[i] =  b;
        }
        else if (s[i] == 'c')
        {
            dec[i] = c;
        }
        else if (s[i] == 'd')
        {
            dec[i] = d;
        }
        else if (s[i] == 'e')
        {
            dec[i] = e;
        }
        else if (s[i] == 'f')
        {
            dec[i] = f;
        }
        else if (s[i] == 'A')
        {
            dec[i] = A;
        }
        else if (s[i] == 'B')
        {
            dec[i] = B;
        }
        else if (s[i] == 'C')
        {
            dec[i] = C;
        }
        else if (s[i] == 'D')
        {
            dec[i] = D;
        }
        else if (s[i] == 'E')
        {
            dec[i] = E;
        }
        else if (s[i] == 'F')
        {
            dec[i] = F;
        }
    }

    int res = 0;
    int j;
    int l = 0;

    for (j = len-1; (l != len) && (j >= 0); j--)
    {
        res = res + dec[j] * pow(16, l++);
    }

    return res;
    
    
}


