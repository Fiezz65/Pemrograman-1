#include <stdio.h>

int main() {
    int sisi1 = 4, sisi2 = 5, sisi3 = 7;
    int harga_per_meter = 85000;
    int keliling, biaya_total;

    keliling = sisi1 + sisi2 + sisi3;
    biaya_total = keliling * harga_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah Rp %d\n", harga_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", biaya_total);

    return 0;
}