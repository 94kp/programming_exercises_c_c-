#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 1000
#define MAXLINE 1000

main()
{
    int len;
    char line[MAXSIZE];

    while((len=fgetline(line, MAXLINE) != 0))
    {
        printf("%s\n", line);
    }

}

int fgetline(char s[], int lim)
{
    /* function declarations */
    int lower(int c);

    /* variable declarations */
    int c;
    int i;

    /* code */
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
    {
        s[i] = lower(c);
    }

    s[i] = '\0';

    return i;
}

int lower (int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 'a' - 'A';
    }
    else
    {
        return c;
    }
}


