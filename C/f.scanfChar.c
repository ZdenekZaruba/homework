#include <stdio.h>
int main()
{
	char firstname[15];
	printf("Jaké je tvé křestní jméno?: ");
	scanf("%s",firstname);
	printf("Rád tě poznávám, %s.\n",firstname);
	return(0);
}