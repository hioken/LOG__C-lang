# include <stdio.h>

int sum(void);

void main(void) {
  for (int i = 0; i < 5; i++) {
    sum();
  }
}

int sum(void) {
  static int count;
  count++;
  if (count == 3) count = 0;
  printf("%d\n", count);
}