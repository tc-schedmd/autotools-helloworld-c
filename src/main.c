#include <stdio.h>

extern int foo(int);

int main (void) {
	printf("%d\n", foo(1));
	return 0;
}

