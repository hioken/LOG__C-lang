#include <stdio.h>

void main(int argc, char *arg[]) {
  FILE *file;
  char buf[256];
  
  if (argc > 1) {
    switch (arg[1][1]) {
      case 'w':
        file = fopen("b.txt", "a");
        fprintf(file, "%s\n", arg[2]);
        fclose(file);
        fflush(stdin);
        getchar();
        break;
      case 'r':
        file = fopen("b.txt", "r");
        fscanf(file, "%s", buf);
        fclose(file);
        printf("%s\n", buf);
        break;
    }
  }
}