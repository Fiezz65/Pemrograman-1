#include <stdio.h>

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    do {
        printf("Pilih program:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &angka1);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &angka2);
                hasil = angka1 + angka2;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                break;
            case 2:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &angka1);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &angka2);
                hasil = angka1 - angka2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                break;
            case 3:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &angka1);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &angka2);
                hasil = angka1 * angka2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                break;
            case 4:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &angka1);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &angka2);
                hasil = angka1 / angka2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                break;
            case 5:
                printf("Terimakasih, telah menggunakan kalkulator Hafiz Perdana\n");
                break;
            default:
                printf("Input anda salah, silakan coba lagi\n");
        }
    } while (pilihan != 5);

    return 0;
}