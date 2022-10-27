#include <stdio.h>

int main(void) {
  double a;
  double b;
  double c;
  printf("hipotenuse calculator\n");
  printf("enter side a");
  scanf("%lf", &a);
  printf("enter side b");
  scanf("%lf", &b);
  c = sqrt(a * a + b * b);
  printf("side c=%lf", c);

  return 0;
}