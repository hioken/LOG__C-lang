#include <stdio.h>

// void main(void) {
//   printf("%d\n", 1 == 3);
//   if ('a') printf("%s\n", "結果: 真");
//   if (NULL) printf("%s\n", "結果2: 真"); /* 偽 */
//   if (NULL == 0) printf("%s\n", "結果3: 真"); /* 偽 */
//   printf("%p\n", NULL);
// }

void main(void) {
  printf("%d\n", 1 || 2);
  printf("%d\n", 1 && 2);
  printf("%d\n", 2 || 3);
  printf("%d\n", 2 && 3);
  printf("%d\n", 0 || 2);
  printf("%d\n", 0 && 2);
  printf("%d\n", 1 || 0);
  printf("%d\n", 1 && 0);
}