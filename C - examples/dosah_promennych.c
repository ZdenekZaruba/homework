#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int fce(int a) {
	a++;
	printf("a in fce\t%i\n", a);
	return a;
}

int main() {
	int a = 1;
	a = fce(a);
	printf("a out of fce\t%i\n", a);

	printf("a out of fce\t%i\n", a);
	
	return 0;
}