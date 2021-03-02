#include <stdio.h>
#include <string.h>

void main(void) {
  // struct student {
    // int clas;
    // char name[64];
  // };
  
  typedef struct {
    int clas;
    char name[64];
  } student;
  
  student data, data_2;
  student *p;
  p = &data_2;
  
  data.clas = 1;
  strcpy(data.name, "kenta");
  
  data_2 = data;
  printf("%d\n", (*p).clas);
  printf("%s\n", p->name);
  
  typedef int plus;
  plus variable;
  
  variable = 3;
  printf("%d\n", variable);
}