#include <stdio.h>

// void main(void) {
  // int num;
  // scanf("%d", &num);
  // switch (num) {
    // case 1:
      // printf("first\n");
      // break;
    // case 2:
      // printf("second\n");
      // break;
    // default: 
      // printf("else\n");
      // break;
  // }
// }

void main(void) {
  int num = 1;
  switch (num) {
    case 1:
      printf("first\n");
    case 2:
      printf("second\n");
      break;
    default: 
      printf("else\n");
      break;
  }
}