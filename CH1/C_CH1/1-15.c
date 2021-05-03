#include <stdio.h>


void fatoc();

int main () {
	fatoc();	
}

void fatoc() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower; // fahr is 0
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%3d %6d\n", fahr, celsius);
    fahr = fahr + step; // increment by 20
  }

}
