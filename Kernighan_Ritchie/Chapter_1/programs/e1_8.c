#include <stdio.h>

main()
{
  int b = 0;
  int t = 0;
  int nl = 0;
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      nl++;
    }
    else if (c == '\t')
    {
      t++;
    }
    else if (c == ' ')
    {
      b++;
    }
  }

  printf("the number of lines is: %d\nThe number of tabs is: %d\nThe number of blanks is : %d\n", nl, t, b);


}


