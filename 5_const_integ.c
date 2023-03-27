#include <stdio.h>

int main() {
  static int a = 100;
  int *pt;

//  printf("Pointer Example Program : Change the value of constant integer\n");

  pt = &a;
  *pt = 200;

  printf("Value of a = %d", a);

  return 0;
}
