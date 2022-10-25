#include <stdio.h>
#define MAXLINE 1000

int fgetline(char line[], int maxline);
int reverse(char line[], char rev[], int len);

main()
{
  int len;
  char line[MAXLINE];
  char rev[MAXLINE];

  while ((len = fgetline(line, MAXLINE)) != '\0')
  {
    printf("original line: %s\n", line);

    reverse(line, rev, len);

  }
}

int fgetline(char s[], int lim)
{
  int i;
  int c;

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


int reverse(char s[], char rev[], int len)
{
  int i = 0;
  int j = len-1;

  while (j >= 0)
  {
    rev[i] = s[j];
    j--;
    i++;
  }

  rev[len] = '\0';

  printf("reversed line: %s\n", rev);
}

