#include <stdio.h>

#define BLANK_EXISTS 1

#define MAXLINE 1000
#define MAXSIZE 1000
#define FOLD_LINE 50

int getline(char line[], int maxline);

int blank = 0;

main()
{
    int len;
    char line[MAXSIZE];
    int j;

    while((len = getline(line, MAXLINE)) > 0)
    {
        if ((len <= FOLD_LINE) && (blank != BLANK_EXISTS))
        {
            printf("%s\n", line);
        }
        else
        {
            int count = 0;
            int backtrack = 0;
            for (j = 0; j < len; j++)
            {
                if (j == FOLD_LINE+count)
                {
                    if (line[j] != ' ')
                    {
                        for (backtrack = j; line[backtrack] != ' '; backtrack--)
                            ;

                        line[backtrack] = '\n';
                    }
                    else
                    {
                        line[j] = '\n';
                    }

                    count = count + FOLD_LINE;
                }
            }

            printf("%s\n", line);
        }
    }
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    
        if (c == ' ')
        {
            blank = BLANK_EXISTS;
        }
    }
    
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

