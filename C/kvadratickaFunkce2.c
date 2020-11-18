#include <stdio.h>

#include <math.h>



int main()

{

 int a, b, c;

 double dis, x1, x2;

 

 printf("Zadejte cleny kvadraticke rovnice \"a\", \"b\" a \"c\".\n\n");

 scanf("%i%i%i",&a,&b,&c);

 printf("%i %i %i\n",a,b,c);

 dis=(pow(b,2))-4*a*c;

 x1=(-b+sqrt(dis))/(2*a);

 x2=(-b-sqrt(dis))/(2*a);

 printf("Diskriminant je %lf \nx1 je %f \nx2 je %f \n", dis, x1, x2);


 return 0;

}
