#include <stdio.h>
#include <memory.h>

void main(void) {
  // char a[] = "a";
  // printf("%ld\n", sizeof(a));
  
  // int a[5];
  // for (int i = 1; i <= 5; i++) {
    // a[i-1] = i;
  // }
  // 
  // int sum = 0;
  // for (int i = 0; i < 5; i++) {
    // sum += a[i];
  // }
  // 
  // printf("%d\n", sum);
  
  int a[] = {1,2,3};
  int b[] = {10,20,30};
  
  memcpy(b,a,9);
  
  for (int i = 0; i < sizeof(b) / sizeof(b[0]);i++) {
    printf("%d\n", b[i]);
  }
}