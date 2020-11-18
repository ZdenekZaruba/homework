#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int p1[3];
	p1[0] = 1;
	p1[1] = 3;
	p1[2] = p1[0] + p1[1];
	printf("p1[%i] = %i\n", 2, p1[2]);
	
	int p2[] = {2, 4, 6};
	for (int i = 0; i < 3; i++){
		printf("%s%i", i > 0 ? " " : "", p2[i]);
	}
	printf("\n");
	
	return 0;
	
}
