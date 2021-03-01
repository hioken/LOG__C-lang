#include <stdio.h>

void main (void) {
  // int i = 2;
  // printf("1: %p\n", &i);
  // i = 5;
  // printf("2: %p\n", &i);
  
  // int array[10];
  // for (int i = 0; i < 10; i++) {
    // printf("%d\n", array[i]);
  // }
  
  int i = 0, *p;
  p = &i;
  p[1] = 3;
  printf("%d\n", *(p + 1));
}