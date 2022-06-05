#include <stdio.h>

int main () {
    double x1, x2, y1, y2, hasil, akar;
    double sementara = 0;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    hasil = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    akar = hasil / 2;

    while (akar != sementara) {
        sementara = akar;
        akar = (hasil / sementara + sementara) / 2;
    }
    printf("%0.4lf\n", akar);

    return 0;
}