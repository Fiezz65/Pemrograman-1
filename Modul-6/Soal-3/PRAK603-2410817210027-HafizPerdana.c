#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    int arr1[n1], arr2[n2];
    
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i] * arr2[i]);
    }

    return 0;
}