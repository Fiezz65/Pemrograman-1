#include <stdio.h>
int main() {
    int nilai;

    printf("");
    scanf("%d", &nilai);
    
    if (nilai > 100) {
        printf("Error");
    } else if (nilai >= 80) {
        printf("A");
    } else if (nilai >= 70) {
        printf("B");
    } else if (nilai >= 60) {
        printf("C");
    } else if (nilai >= 50) {
        printf("D");
    } else {
        printf("E");
    }
    
    return 0;
}