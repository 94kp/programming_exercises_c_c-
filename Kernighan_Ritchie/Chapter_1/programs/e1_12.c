#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c != ' ' && c != '\t') // it does not work with OR because ' ' || '\t' evaluates to true, since one of them is true
    {
      putchar(c);  
    }
    else
    {
      putchar('\n');
    }
  }
}


