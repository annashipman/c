#include <stdio.h>

main ()
{

  int c, n1;

  n1 = 0;
  while  (n1 < 3) {
    c = getchar();
    if (c == '\n')
      ++n1;
  }
  printf("\n");
  printf("%d\n", n1);
}
