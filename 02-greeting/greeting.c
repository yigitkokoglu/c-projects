#include <stdio.h>

int main(void) {

  printf("enter your name: \n");

  char name[50];
  fgets(name, sizeof(name), stdin);

  printf("hi, %s\n", name);

  return 0;
}
