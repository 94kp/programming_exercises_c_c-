#include <stdio.h>

main()
{
  int c;
  char longest[99];
  int i = 0;
  int length = 0;
  int maxlength;

  for (i = 0; i < 99; i++)
  {
    longest[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    length++;
    if (c == '\n')
    {
      if (maxlength > length)
      {
        maxlength = length;

      }
    }
  }
}
