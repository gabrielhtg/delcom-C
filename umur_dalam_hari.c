#include <stdio.h>

int main () {
    int a, sem;

    scanf("%d", &a);

    sem = ((a % 365) - ((a % 365) % 30)) / 30;
    printf("%d tahun\n", (a - (a % 365)) / 365);
    printf("%d bulan\n", sem);
    printf("%d hari\n", (a % 365) % 30);

    return 0;
}