#include <stdio.h>


int main() {
	int a = 5;
	int* b = &a;
	int** c = &b;
	int d = 18;
	int* e = &d;
	int** f = &e;
	
	printf("this is a, without pointer dereferencing: %d\n", a);
	printf("this is a via pointer dereferencing: %d\n", *b);
	printf("this is the address of a (the contents of b): %p\n", b);
	printf("this is the contents of c, where c is a pointer to b which is a pointer to a. That is, int** c = &b: %p\n", c);
	printf("this is the contents of *c, where c is a pointer to b, which is a pointer to a. That is, int** c = &b: %p\n", *c);
	printf("this is the contents of **c, where c is int **c = &b: %d\n", **c);
	printf("this is the contents of d, without pointer dereferencing: %d\n", d);
	printf("this is the contents of d, with pointer dereferencing: %d\n", *e);
	printf("this is the contents of e, a pointer to d: %p\n", e);
	printf("this is the contents of f, a pointer to e: %p\n", f);
	printf("this is the result of running *f: %p\n", *f);
	printf("this is the result of running **f, which should be 18: %d\n", **f);
}

