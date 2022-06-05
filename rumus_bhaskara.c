#include <stdio.h>

int main() {
	float A, B, C; 
    float sementara = 0;
    float sem, akar;	
 
    scanf("%f %f %f", &A, &B, &C);

	sem = (B * B) - (4 * (A) * (C));

    akar = sem / 2;

    if(sem > 0 && A != 0) {
        while (akar != sementara) {
            sementara = akar;
            akar = (sem / sementara + sementara) / 2;
        }
		
		float a, b;

		a = (-B + akar) / (2 * A);
		b = (-B - akar) / (2 * A);

		printf("R1 = %0.5f\n", a);
		printf("R2 = %0.5f\n", b);
	} 

	else {
		printf("Perhitungan yang mustahil\n");
	}
	
	return 0;
}