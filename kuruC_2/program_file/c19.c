#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *arg[]) {
  FILE *file;
  char *buf;
  
  if (argc > 1) {
    buf = malloc(sizeof(arg[1]));
    strcpy(buf, arg[1]);
    if (buf == NULL) exit(0);
    printf("\n%s\n", buf);
    
  }
}