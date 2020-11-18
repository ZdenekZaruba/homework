#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int myAbs(int x)
{
	return x < 0 ? x * -1 : x;
}

/*
avgAbs vraci prumer absolutnich hodnot
*/

double avgAbs(int x, int y)
{
	return (myAbs(x) + myAbs(y)) / 2.0;    
}

double velVek(int x, int y, int z)
{
	return sqrt((x*x)+(y*y)+(z*z)) ;
}

int main() 
{
	printf("\n%.2f\n\n", avgAbs(2, 3));
	return 0;
}
