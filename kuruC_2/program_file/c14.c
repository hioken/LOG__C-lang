# include <stdio.h>
# include <string.h>

void main(void) {
  char str[] = "first\0second";
  printf("%s %s\n", str, &str[6]);
  
  
  // char first[10] = "Dark";
  // char title[20];
  // sprintf(title, "%s %s %d\n", first, "Souls", 3);
  // printf("%s", title);
  
  /*
  char first[256];
  char last[256];
  printf("苗字を入力してください\n");
  scanf("%s", last);
  printf("名前を入力してください\n");
  scanf("%s", first);
  
  strcat(first, last);
  printf("フルネーム\n");
  printf("%s 様\n", first);
  */
}

