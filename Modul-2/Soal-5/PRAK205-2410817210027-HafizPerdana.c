#include <stdio.h>
#include <math.h>

int main() {
    float sisi_a, sisi_b, alas, tinggi, keliling, luas;

    printf("");
    scanf("%f", &sisi_a);
    printf("");
    scanf("%f", &sisi_b);

    alas = sqrt(sisi_b * sisi_b - sisi_a * sisi_a);

    tinggi = sisi_a;

    keliling = sisi_a + sisi_b + alas;

    luas = 0.5 * alas * sisi_a;

    printf("\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}