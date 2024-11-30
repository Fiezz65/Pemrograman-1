#include <stdio.h>

int main() {
    int batas, i;

    scanf("%d", &batas);

    for (i=1; i<=batas; i++) {
        if (i % 2 !=0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    for (i=batas; i>=2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
