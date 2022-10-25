#include <stdio.h>

main()
{
  int c;
  int len = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      len++;
      while ((c = getchar()) == ' ')
      {
        len++;
      }

      int rem = len % 4;
      int quo = len / 4;


      while (rem > 0)
      {
        putchar('@');
        rem--;
      }

      while (quo > 0)
      {
        putchar('#');
        quo--;
      }
      putchar(c);
    }
    else if (c == '\n')
    {
      len = 0;
    }
    else
    {
      putchar(c);
    }
  }
}


