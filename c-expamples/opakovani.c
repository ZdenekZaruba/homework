#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fce(int a[]) {
	a[0] = 4;
	printf("%i\n", a[0]);
}

int main() {
	int a[] = {2};
	printf("%i\n", a[0]);
	fce(a);
	printf("%i\n", a[0]);
	return 0;
}