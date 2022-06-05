#include <stdio.h>

int main () {
    int N, mm;

    scanf("%d", &N);

    mm = ((N % 3600) - ((N % 3600) % 60)) / 60;
    printf("%d:%d:%d\n", (N - (N % 3600)) / 3600, mm, (N % 3600) % 60);

    return 0;
}