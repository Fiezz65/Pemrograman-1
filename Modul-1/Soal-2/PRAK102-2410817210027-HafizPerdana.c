#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 3;
    float hasil;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    hasil = (float) (a * b) / c;

    printf("Hasil dari a dikali b dibagi c adalah %.6f", hasil);
    return 0;
}