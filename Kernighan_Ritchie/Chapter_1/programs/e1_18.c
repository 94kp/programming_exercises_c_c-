#include <stdio.h>
#define MAXLINE 1000

int fgetline(char line[], int maxline);


main()
{
  char line[MAXLINE];
  int len = 0;

  while ((len = fgetline(line, MAXLINE)) != 0)
  {
    int i = len-1;

    while (line[i] == ' ' || line[i] == '\n' || line[i] == '\0' || line[i] == '\t')
      i--;
    
    line[i+1] = '\0';

    printf("%d", i+1);
    printf("%s\n", line);
  }

}

int fgetline(char s[], int lim)
{
  int i, j;
  int c;
  int len = 0;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    if (c == ' ')
    {   
        s[i] = c;
    }
    else
    {
      s[i] = c;
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


