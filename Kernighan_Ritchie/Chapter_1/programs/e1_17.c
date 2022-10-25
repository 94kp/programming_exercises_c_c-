#include <stdio.h>
#define MAXLINE 1000

int fgetline(char line[], int maxline);

main()
{
  int len = 0;
  char line[MAXLINE];

  while ((len = fgetline(line, MAXLINE)) != '\n')
  {
    if (len > 80)
    {
      printf("Line entered: %s\n", line);
    }
  }
}

int fgetline(char s[], int lim)
{
  int i, c;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
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


