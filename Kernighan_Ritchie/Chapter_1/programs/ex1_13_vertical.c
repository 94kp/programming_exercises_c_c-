#include <stdio.h>

main()
{
  int c;
  int length = -1;
  int lengtharr[10];
  int word = 0;
  int maxlength = 0;
  int i, j;

  for (i = 0; i < 10; i++)
    lengtharr[i] = 0;

  while ((c = getchar()) != EOF)
  {
    ++length;

    if (c == '\n' || c == ' ' || c == '\t')
    {
      lengtharr[word] = length;
      word++;
      if (length > maxlength)
      {
        maxlength = length;
      }
      length = -1;
    }
  }

  printf("maxlength: %d", maxlength);
  
  for(i = 0; i < 10; i++)
  {
    printf("lengtharr: %d\n", lengtharr[i]);
  }


  j = 0;

  for (i = maxlength; i >= 0; i--)
  {
      for (j = 0; j <= word; j++)
      {
        if (lengtharr[j] > i)
        {
          printf("*");
        }
      }
      printf("\n");
  }

}

