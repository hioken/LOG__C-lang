#include <stdio.h>

void main(void) {
  // for (int i = 1;; printf("%d\n", i)) {
  //   i++;
  //   if (i == 6) break;
  // }
  int i = 0;
  while (1) {
    printf("%d\n", i);
    i++;
    if (i > 6) break;
  }
}