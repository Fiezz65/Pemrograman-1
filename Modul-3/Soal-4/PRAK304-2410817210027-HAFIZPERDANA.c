#include <stdio.h>
int main() {
    int a;

    printf("");
    scanf("%d", &a);

    if (a < 0 || a >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (a == 0) {
        printf("Nol");
    } else if (a >= 1 && a <= 9) {
        printf("Satuan");
    } else if (a >= 11 && a <= 19) {
        printf("Belasan");
    } else if (a == 10) {
        printf("Puluhan");
    } else {
        printf("Puluhan");
    }

    return 0;
}