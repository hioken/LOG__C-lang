# include <stdio.h>

int sum(int, int);

void main(void) {
  int i, y = 2;
  char z;
  printf("%d + %d = %d\n", i, y, sum(i, y));
  printf("%c\n", 0);
}

int sum(int i, int y) {
  return i + y;
}