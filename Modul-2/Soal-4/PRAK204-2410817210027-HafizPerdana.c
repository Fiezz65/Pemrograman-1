#include <stdio.h>

int main() {
    float jari_jari, tinggi, volume, luas_permukaan, keliling;

    printf("");
    scanf("%f", &jari_jari);

    printf("");
    scanf("%f", &tinggi);

    volume = 3.14 * jari_jari * jari_jari * tinggi;

    luas_permukaan = 2 * 3.14 * jari_jari * (jari_jari + tinggi);

    keliling = 2 * 3.14 * jari_jari;

    printf("\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas permukaan = %.2f\n", luas_permukaan);
    printf("Keliling alas = %.2f\n", keliling);

    return 0;
}