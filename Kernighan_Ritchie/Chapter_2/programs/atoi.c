#include <stdio.h>
#define MAXSIZE 1000
#define MAXLINE 1000

int fgetline(char list[], int lim);
int atoi(char s[]);

main()
{
    int len;
    char num[MAXLINE];
    int c;

    while ((len = fgetline(num, MAXSIZE)) != 0)
    {
        printf("\nThe number you entered is: %s\n", num);
        printf("\n%d\n", atoi(num));
    }
}

int atoi(char s[])
{
    int i,n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = 10 * n + (s[i] - '0');
    }

    return n;
}

int fgetline(char s[], int lim)
{
    int c;
    int i;

    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
    {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}


