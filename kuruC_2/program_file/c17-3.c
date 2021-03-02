#include <stdio.h>

void main(void) {
  int b = 97;
  char buf;
  FILE *file;
  
  file = fopen("a.dat", "wb");
  fwrite(&b, sizeof(b), 1, file);
  fclose(file);
  
  file = fopen("a.dat", "rb");
  fread(&buf, sizeof(buf), 1, file);
  fclose(file);
  
  printf("%c\n", buf);
}