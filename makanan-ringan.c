#include <stdio.h>

int main () {
    int X, Y;

    scanf("%d %d", &X, &Y);

    double a;

    switch (X) {
        case 1:
            a = 4;
        break;

        case 2:
            a = 4.5;
        break;

        case 3:
            a = 5;
        break;

        case 4:
            a = 2;
        break;

        case 5:
            a = 1.5;
        break;
    }

    printf("Total Harga: Rp%0.2lf\n", a * Y);

    return 0;
}