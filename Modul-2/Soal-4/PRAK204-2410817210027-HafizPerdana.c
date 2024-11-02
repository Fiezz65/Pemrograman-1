#include <stdio.h>

int main() {
    float radius, tinggi, volume, luas_permukaan, keliling;

    printf("");
    scanf("%f", &radius);

    printf("");
    scanf("%f", &tinggi);

    volume = 3.14 * radius * radius * tinggi;

    luas_permukaan = 2 * 3.14 * radius * (radius + tinggi);

    keliling = 2 * 3.14 * radius;

    printf("\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas permukaan = %.2f\n", luas_permukaan);
    printf("Keliling alas = %.2f\n", keliling);

    return 0;
}