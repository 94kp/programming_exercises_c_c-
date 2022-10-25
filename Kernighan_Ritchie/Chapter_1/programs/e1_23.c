#include <stdio.h>

#define MAXSIZE 1000
#define MAXLINE 1000

main()
{
    char line[MAXSIZE];
    int len, i;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("%s", line);
    }
}

int getline(char s[], int lim)
{
    int c, i;
    int in_comment = 0;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        if (c == '/')
        {
            if ((c = getchar()) == '*')
            {
                while ((c = getchar()) != '*')
                    ;
                
                if((c=getchar()) != '/')
                {
                    in_comment = 1;
                }
                else
                {
                    in_comment = 0;
                }

                c = getchar();
            }
        }
        if (in_comment == 0)
            s[i] = c;   
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}


