#include <stdio.h>
#include <math.h>

int main() {
    int putaran = 5;
    float jarak_tempuh = 14;
    const float phi = 3.14;
    float keliling_satu_putaran, jari_jari;

    keliling_satu_putaran = jarak_tempuh / putaran;
    jari_jari = keliling_satu_putaran / (2 * phi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", jarak_tempuh);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);

    return 0;
}