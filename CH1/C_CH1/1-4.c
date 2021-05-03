#include <stdio.h>

// EXERCISE 1-4 IN K&R
// WRITE A PROGRAM FOR C TO F. USE FLOATS.

main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower; // celsius is 0
  printf("CELSIUS TO FAHRENHEIT CONVERSION TABLE\n");
  printf("---------------------------------------\n");
  while (celsius <= upper) {
    fahr = ((9.0/5.0) * (celsius)) + 32;
    printf("%3f %6f\n", celsius, fahr);
    celsius = celsius + step; // increment by 20
  }
}
