#include <stdio.h>

#define MAXLINE 1000
#define MAXSIZE 1000

main()
{
    int len;
    char line[MAXSIZE];
    int j;
    int parantheses = 0;
    int brackets = 0;
    int braces = 0;
    int s_quotes = 0;
    int d_quotes = 0;

    while((len = getline(line, MAXLINE)) > 0)
    {
        for (j=0; j < len; j++)
        {
            if (line[j] == '{')
            {
                braces++;
            }
            else if (line[j] == '[')
            {
                brackets++;
            }
            else if (line[j] == '(')
            {
                parantheses++;
            }
            else if (line[j] == '\"')
            {
                d_quotes++;
                j++;
            }
            else if (line[j] == '\'')
            {
                s_quotes++;
                j++;
            }

            if (line[j] == '}')
            {
                braces--;
            }
            else if (line[j] == ']')
            {
                brackets--;
            }
            else if (line[j] == ')')
            {
                parantheses--;
            }
            else if (line[j] == '\"')
            {
                d_quotes--;
            }
            else if (line[j] == '\'')
            {
                s_quotes--;
            }
        }
    }

    if (braces != 0)
    {
        printf("SYNTAX ERROR: MISSING BRACES\n");
    }
    if (brackets != 0)
    {
        printf("SYNTAX ERROR: MISSING BRACKETS\n");
    }
    if (parantheses != 0)
    {
        printf("SYNTAX ERROR: MISSING PARANTHESES\n");
    }
    if (d_quotes != 0)
    {
        printf("SYNTAX ERROR: UNBALANCED DOUBLE QUOTES\n");
    }
    if (s_quotes != 0)
    {
        printf("SYNTAX ERROR: UNBALANCED SINGLE QUOTES\n");
    }
}

int getline(char s[], int lim)
{
    int c, i;
    int in_comment = 0;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
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

