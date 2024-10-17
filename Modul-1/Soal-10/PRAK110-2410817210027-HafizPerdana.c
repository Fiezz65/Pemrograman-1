#include <stdio.h>
#include <math.h>

int main() {
    float alas = 5, tinggi = 12, sisi_miring, keliling, luas;

    sisi_miring = sqrt(alas*alas + tinggi*tinggi);
    keliling = alas + tinggi + sisi_miring;
    luas = 0.5 * alas * tinggi;

    printf("Diketahui:\n");
    printf("Alas = %.f\n", alas);
    printf("Tinggi = %.f\n", tinggi);

    printf("\nJawab:\n");
    printf("Sisi A = %.f cm\n", tinggi);
    printf("Sisi B = %.f cm\n", sisi_miring);
    printf("Sisi C = %.f cm\n", alas);
    printf("Keliling = %.f cm\n", keliling);
    printf("Luas = %.f cm", luas);

    return 0;
}