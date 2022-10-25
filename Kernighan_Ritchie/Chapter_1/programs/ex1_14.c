#include <stdio.h>

main()
{
  int c;
  int charfreq[129];
  int i;
  int j;

  for (i = 0; i < 130; i++)
  {
    charfreq[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
      charfreq[c]++;
  }

  for (i = 0; i < 128; i++)
  {
    if (charfreq[i] != 0)
    {
      printf("%c = ", i);
      for (j = 0; j < charfreq[i]; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }

}


