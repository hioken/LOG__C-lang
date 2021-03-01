#include <stdio.h>

void main(void) {
  int *p, array[] = {1,2,3};
  
  for (p = array; p != &array[3]; p++) {
    printf("%d\n", *p);
  }
}