#include <stdio.h>

int main() {
    int n, k, i, j, jumlah, totalJumlah = 0;

    scanf("%d %d", &n, &k);

    for (i=1; i<=n; i++) {
        jumlah = 0;
        for (j=i; j>=1; j--) {
            printf("(%d * %d)", j, k);
            jumlah += j * k;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah);
        totalJumlah += jumlah;
    }

    printf("%d\n", totalJumlah);

    return 0;
}