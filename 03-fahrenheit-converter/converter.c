#include <stdio.h>

int main(void) {

  int option;
  printf("which converter do you want to use?\n");
  printf("1 - (c -> f), 2 - (f -> c)\n");

  scanf("%d", &option);
  int degree;

  if (option > 2 || option < 0 || option == 0) {
    printf("invalid  operator, please enter either 1 or 2.\n");
  }

  else if (option == 1) {
    printf("enter your degree in c: \n");
    scanf("%d", &degree);

    float fahrenheit = (degree * 9.0) / 5.0 + 32;
    printf("your degree in f: %.2f\n", fahrenheit);
  }

  else if (option == 2) {
    printf("enter your degree in f: \n");
    scanf("%d", &degree);

    float celsius = (degree - 32) * 5.0 / 9.0;
    printf("your degree in c: %.2f\n", celsius);
  }

  return 0;
}
