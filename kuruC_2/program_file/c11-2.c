# include <stdio.h>

void sum(int &i);

void main(void) {
  int i = 1;
  printf("%p\n", &i);
  sum(*i);
}

void sum(int &i) {
  printf("%p\n", &i);
}