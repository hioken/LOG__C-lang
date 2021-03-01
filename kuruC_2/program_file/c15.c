#include <stdio.h>

void sum(int *i);

void main(void) {
  int *i;
  int j = 1;
  i = &j;
  sum(i);
  printf("%d\n", *i);
  
}

void sum(int *i) {
  *i += 2;
}
/*
  char str[256] = "abc";
  scanf("%s", &str[4]);
  printf("%s %s\n", str, &str[4]);
*/