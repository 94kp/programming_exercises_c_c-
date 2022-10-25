#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float cel2fahr(float);

main()
{
  int i = 0;

  for (i = LOWER; i <= UPPER; i = i + STEP)
  {
    printf("%3d %6.1f\n", i, cel2fahr(i));
  }
  
}

float cel2fahr(float f)
{
  return (5.0/9.0) * (f - 32.0);
}


