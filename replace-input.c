#include <stdio.h>

main ()
{

  int c, n1;

  n1 = 0;
  while  (c = getchar() != '\n') {
    c = getchar();
    if (c == ' ') {
      printf("blank!");
    }
  }

  printf("\n");
}
