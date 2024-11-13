#include <stdio.h>

int main() {
    float jarijari, tinggi, volume, luas, keliling;

    printf("");
    scanf("%f", &jarijari);

    printf("");
    scanf("%f", &tinggi);

    volume = 22 * jarijari * jarijari * tinggi / 7;

    luas = 2 * 22 * jarijari * (jarijari + tinggi) / 7;

    keliling = 2 * 22  * jarijari / 7;

    printf("\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}