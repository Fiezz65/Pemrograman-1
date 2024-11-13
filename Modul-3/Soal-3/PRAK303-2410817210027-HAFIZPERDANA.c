#include <stdio.h>
int main () {
    double N;

    scanf("%lf", &N);

    if (N == 0) {
        printf("Nol");
    } else if (N < 0) {
        printf("Negatif");
    } else {
        printf("Positif");
    }

    return 0;
}