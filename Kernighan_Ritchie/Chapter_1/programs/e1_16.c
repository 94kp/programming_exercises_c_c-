#include <stdio.h>
#define MAXLINE 1000

int fgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
  int len;
  char line[MAXLINE];

  while((len = fgetline(line, MAXLINE)) > 0)
    printf("Line length : %d\nLine entered: %s\n", len, line);

  return 0;
}

/* getline: read a line into s, return length */
int fgetline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
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

