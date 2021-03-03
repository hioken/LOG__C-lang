#include <stdio.h>

void fun(int data[]);

void main(void) {
  int data[] = {1,2,3,4};
  printf("mainのアドレス: %p\n", data);
  printf("mainのsize: %ld\n", sizeof(data) );
  printf("渡す前の先頭要素: %d\n", data[0]);
  fun(data);
  printf("渡した後の先頭要素: %d\n", data[0]);
}

void fun(int data[]) {
  printf("fun_1のアドレス: %p\n", data);
  printf("fun_1のsize: %ld\n", sizeof(*data));
  data[0] = 10;
}