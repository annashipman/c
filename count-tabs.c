#include <stdio.h>

main ()
{

  int c, n1, t1;

  t1 = 0;
  n1 = 0;
  while  (n1 < 3) {
    c = getchar();
    if (c == '\n')
      ++n1;
    if (c == '\t')
      ++t1;
  }
  printf("\n");
  printf("%d\n", t1);
}
