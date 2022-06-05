#include <stdio.h>

int main () {
	double a,b,c;
	
	scanf("%lf", &a);
  	scanf("%lf", &b);
 	scanf("%lf", &c);

  	printf("SEGITIGA: %0.3lf\n", (a * c) / 2);
  	printf("LINGKARAN: %0.3lf\n", (3.14159 * c) *c);
 	printf("TRAPEZIUM: %0.3lf\n", ((a + b) * c) / 2);
  	printf("PERSEGI: %0.3lf\n", b * b);
	printf("PERSEGI PANJANG: %0.3lf\n", a * b);
	
	return 0;
}
