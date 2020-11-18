#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Napiš první hodnotu:");
	scanf("%d", &a);
	printf("Napiš druhou hodnotu:");
	scanf("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}
