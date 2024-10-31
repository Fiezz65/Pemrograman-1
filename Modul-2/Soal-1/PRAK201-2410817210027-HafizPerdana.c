#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas[10], tempatTanggalLahir[50], alamat[100], hobby[50], noHP[20];

    printf("Nama: ");
    scanf(" %[^\n]", nama);
    printf("NIM: ");
    scanf(" %[^\n]", nim);
    printf("Kelas Paralel: ");
    scanf(" %[^\n]", kelas);
    printf("Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", tempatTanggalLahir);
    printf("Alamat: ");
    scanf(" %[^\n]", alamat);
    printf("Hobby: ");
    scanf(" %[^\n]", hobby);
    printf("No. HP: ");
    scanf(" %[^\n]", noHP);

    printf("\nOutput:\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Kelas Paralel: %s\n", kelas);
    printf("Tempat/Tanggal Lahir: %s\n", tempatTanggalLahir);
    printf("Alamat: %s\n", alamat);
    printf("Hobby: %s\n", hobby);
    printf("No. HP: %s\n", noHP);

    return 0;
}