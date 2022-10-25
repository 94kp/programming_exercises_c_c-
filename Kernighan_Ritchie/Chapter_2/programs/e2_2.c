#include <stdio.h>

main()
{
  int lim;
  int i;
  int c;

  for (i=0; i<lim-1; i++)
  {
    if ((c=getchar()) != '\n')
    {
      if (c != EOF)
      {
        printf("%c", c);
      }
    }
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
