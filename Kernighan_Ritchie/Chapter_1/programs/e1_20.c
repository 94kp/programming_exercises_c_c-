#include <stdio.h>
#define MAXSIZE 100
#define TABSTOP 4

main()
{
  int i = 0;
  int c;
  char s[MAXSIZE];
  

  i = 0;
  while((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      if (i > TABSTOP)
      {
        int rem = TABSTOP - ((i - 1) % TABSTOP);

        while (rem > 0)
        {
          putchar('#');
          rem--;
        }
      }
    }
    else if (c == '\n')
    {
      putchar(c);
      i = 1;
    }
    else
    {
      putchar(c);
      i++;
    }
  }
  
  printf("%s\n", s);

}


