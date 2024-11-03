#include <stdio.h>

int main() {
    float jarijari, tinggi, volume, luas, keliling;

    printf("");
    scanf("%f", &jarijari);

    printf("");
    scanf("%f", &tinggi);

    volume = 3.14 * jarijari * jarijari * tinggi;

    luas = 2 * 3.14 * jarijari * (jarijari + tinggi);

    keliling = 2 * 3.14 * jarijari;

    printf("\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}