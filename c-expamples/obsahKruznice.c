#include <stdio.h>
#include <math.h>

double obsahKruznice(double r) {
	double pi = 3.14;
	double S;
	
	return S = pi*pow(r, 2);
}

double obvodKruznice(double r) {
		double pi = 3.14;
		double o;
		
		return o = 2 * pi * r;
}

double kvadratickaRovnice(double a, double b, double c, double d, double x1, double x2){
		return ;
}

int main() {
	int r;
	scanf("%d", &r);
	printf("Obsah kružnice o poloměru %i se rovná %.2f", r, obsahKruznice(r));
	printf("\n");
	printf("Obvod kružnice o polomeru %i se rovná %.2f", r, obvodKruznice(r));
}