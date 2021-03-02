#include <stdio.h>

void main(void) {
  // int buf[] = {10,100,1000,10000};
  // FILE *file;
  // file = fopen("test.dat", "wb");
  // fwrite(&buf, sizeof(buf), 1, file);
  // fclose(file);
  
  int buf[4];
  FILE *file;
  
  file = fopen("test.dat", "rb");
  fread(&buf, sizeof(buf), 4, file);
  fclose(file);
  
  for (int i = 0; i < sizeof(buf) / sizeof(buf[0]); i++) {
    printf("%d\n", buf[i]);
  }
}