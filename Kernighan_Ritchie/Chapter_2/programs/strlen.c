#include <stdio.h>

int gstrlen(char s[]);

main()
{
  char str[10] = "hello";

  printf("length of string: %d\n", gstrlen(str));
}

int gstrlen(char s[])
{
  int i;

  i = 0;
  while (s[i] != '\0')
    ++i;

  return i;
}


