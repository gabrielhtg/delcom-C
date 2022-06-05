#include <stdio.h>

int main () {
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("%d yang terbesar\n", a);
    }

    else if (b > a && b > c) {
        printf("%d yang terbesar\n", b);
    }

    else {
    printf("%d yang terbesar\n", c);
    }

    return 0;
}