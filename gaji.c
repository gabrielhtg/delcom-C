#include <stdio.h>

int main () {
    int a,b;
    double c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);

    printf("NOMOR = %d\n", a);
    printf("GAJI = Rp %0.2lf\n", b * c);

    return 0;
}