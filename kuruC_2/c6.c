#include <stdio.h>

void main(void) {
  int data;
  int data_2;
  scanf("%d %d", &data, &data_2);
  printf("%d %p\n", data, &data_2);
  
  int data_3, data_4;
  scanf("%d,%d ", &data_3, &data_4);
  printf("%d %d\n", data_3, data_4);
}