#include <stdio.h>

int main () {
	int c;
	while (1) {	
		c = getchar();
		if (c == EOF) {
			printf("EOF VAL is %d\n", c);
			return 0;
		
		}
	}

}
