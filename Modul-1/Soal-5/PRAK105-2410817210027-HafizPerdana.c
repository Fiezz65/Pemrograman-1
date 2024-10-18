#include <stdio.h>

int main() {
    int a = 9, b = 5, x = 8, y = 8;

    int sisa_bagi_a = a % b;
    int sisa_bagi_x = x % y;

    int total_sisa_bagi = sisa_bagi_a + sisa_bagi_x;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", total_sisa_bagi);

    return 0;
}