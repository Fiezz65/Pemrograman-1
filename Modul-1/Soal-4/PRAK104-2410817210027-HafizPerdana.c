#include <stdio.h>

int main() {
    int harga_sepatu_A = 400000;
    int harga_sepatu_B = 350000;
    float diskon_A = 0.13;
    float diskon_B = 0.21;

    int harga_akhir_A = harga_sepatu_A - (harga_sepatu_A * diskon_A);
    int harga_akhir_B = harga_sepatu_B - (harga_sepatu_B * diskon_B);

    printf("Harga sepatu A adalah %d\n", harga_sepatu_A);
    printf("Harga sepatu B adalah %d\n", harga_sepatu_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_akhir_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", harga_akhir_B);

    return 0;
}