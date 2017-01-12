#include <stdio.h>

int main() {
  int fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;   //step size

  fahr = lower;
  while (fahr <= upper) {
    celcius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celcius);
    fahr = fahr + step;
  }
}
