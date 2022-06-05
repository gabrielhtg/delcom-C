#include <stdio.h>

int main () {
    int N, h100, h50, h20, h10, h5, h2, h1;

    scanf("%d", &N);

    if (0 < N && N < 1000000) {
        printf("%d\n", N);
        h100 = N % 100;
        printf("%d lembar uang Rp.100,00\n", (N - h100) / 100);

        h50 = h100 % 50;
        printf("%d lembar uang Rp.50,00\n", (h100 - h50) / 50);

        h20 = h50 % 20;
        printf("%d lembar uang Rp.20,00\n", (h50 - h20) / 20);

        h10 = h20 % 10;
        printf("%d lembar uang Rp.10,00\n", (h20 - h10) / 10);

        h5 = h10 % 5;
        printf("%d lembar uang Rp.5,00\n", (h10 - h5) / 5);

        h2 = h5 % 2;
        printf("%d lembar uang Rp.2,00\n", (h5 - h2) / 2);

        h1 = h2 % 1;
        printf("%d lembar uang Rp.1,00\n", (h2 - h1) / 1);
    }

    else {
        printf("Invalid\n");
    }
    
    return 0;
}