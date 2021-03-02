#include <stdio.h>

// void main(void) {
  // FILE *file;
  // file = fopen("text.txt", "w");
  // fprintf(file, "test");
  // fclose(file);
// }

void main(void) {
  FILE *file;
  file = fopen("text.txt", "r");
  char a, b;
  fscanf(file, "%c%c", &a, &b);
  printf("%c%c\n", a, b);
}