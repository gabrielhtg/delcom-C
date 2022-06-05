#include <stdio.h>

int main () {
    int h100, h50, h20, h10, h5, h2, h1, k05, k025, k01, k005, k001, n;
    float N;

    scanf("%f", &N);

    printf("Uang Kertas:\n");

    n = N * 100;

    h100 = n % 10000;
    printf("%d lembar uang Rp.100.00\n", (n - h100) / 10000);

    h50 = h100 % 5000;
    printf("%d lembar uang Rp.50.00\n", (h100 - h50) / 5000);

    h20 = h50 % 2000; 
    printf("%d lembar uang Rp.20.00\n", (h50 - h20) / 2000);

    h10 = h20 % 1000;
    printf("%d lembar uang Rp.10.00\n", (h20 - h10) / 1000);

    h5 = h10 % 500;
    printf("%d lembar uang Rp.5.00\n", (h10 - h5) / 500);

    h2 = h5 % 200;
    printf("%d lembar uang Rp.2.00\n", (h5 - h2) / 200);

    printf("Koin:\n");

    h1 = h2 % 100;
    printf("%d koin Rp.1.00\n", (h2 - h1) / 100);

    k05 = h1 % 50;
    printf("%d koin Rp.0.50\n", (h1 - k05) / 50);

    k025 = k05 % 25;
    printf("%d koin Rp.0.25\n", (k05 - k025) / 25);

    k01 = k025 % 10;
    printf("%d koin Rp.0.10\n", (k025 - k01) / 10);

    k005 = k01 % 5;
    printf("%d koin Rp.0.05\n", (k01 - k005) / 5);

    printf("%d koin Rp.0.01\n", k005);

    return 0;
}