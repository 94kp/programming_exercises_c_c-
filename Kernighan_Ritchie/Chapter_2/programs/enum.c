#include <stdio.h>

main()
{
  enum x {BELL = '\a', BACKSPACE = '\b'};
  enum y {JAN = 1, FEB, MAR};


  printf("Helllo, %d", BELL);

}

