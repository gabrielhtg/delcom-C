#include <stdio.h>

int main () {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%0.3f\n", (a * b) / 12.0);

    return 0;
}