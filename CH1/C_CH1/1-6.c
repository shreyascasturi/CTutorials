#include <stdio.h>

#define ZERO 0
#define ONE 1

int main () {
	int c;
	while (1) {
		c = getchar();
			printf("print 0 or 1 depending on if c != EOF or c == EOF: %d\n", c != EOF);
		if (c == EOF) {
			break;
		}
	}
}
