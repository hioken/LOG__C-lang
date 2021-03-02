#include <stdio.h>

void main(int argc, char *arg[]) {
  if (argc > 1) {
    printf("%c\n", arg[2][1]);
  }
  
  fflush(stdin);
  getchar();
}