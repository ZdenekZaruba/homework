#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double diskriminant(int a, int b, int c){
	double d;
	
	d = (pow(b, 2)) - 4 * a * c;
	return d;
}

int main(){
	int a, b, c, x1, x2;
	double d = diskriminant(a, b, c);
	scanf("%d", &a);
	printf("a = %i\n", a);
	scanf("%d", &b);
	printf("a = %i\n", b);
	scanf("%d", &c);
	printf("a = %i\n", c);

	
	if (d == 0)
	{
		double x1 = -b / (2 * a);
		printf("Rovnice ma jedno reseni x = %.2f.\n", x1);
	}
	else if (d > 0)
	{
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);
		printf("Rovnice ma dve reseni x1 = %.2f a x2 = %.2f.\n", x1, x2);
	}
	else
	{
		printf("Rovnice nema v realnem oboru reseni.\n");
	}
}
