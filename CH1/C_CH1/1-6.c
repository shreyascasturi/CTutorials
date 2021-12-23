#include <stdio.h>

#define ZERO 0
#define ONE 1

int main () {
  int c;
  c = (getchar() != EOF);
  printf("c is: %d\n", c);
}
