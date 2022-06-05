#include <stdio.h>

int main () {
    int A, B, C, D, genapA;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    genapA = 0;

    if ((A % 2) == 0) {
        genapA = 1;
    }

    else {
        genapA = 0;
    }

    if (B > C && D > A && (C + D) > (A + B) && ((C && D) >= 0) && genapA == 1) {
        printf("Nilai diterima\n");
    }

    else {
        printf("Nilai tidak diterima\n");
    }
    return 0;
}