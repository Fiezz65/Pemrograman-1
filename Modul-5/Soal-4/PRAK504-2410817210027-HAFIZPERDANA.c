#include <stdio.h>

int reverse(int num){
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

    int main(){
        int A, B;
        scanf("%d %d", &A, &B);
        A = reverse(A);
        B = reverse(B);
        int C = A + B;
        printf("%d", reverse(C));
}