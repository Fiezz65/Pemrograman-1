#include <stdio.h>

int main() {
   int a = 9, b = 6, x =  10, y = 7;
   float hasil;

   printf("Variabel a bernilai %d\n", a);
   printf("Variabel b bernilai %d\n", b);
   printf("Variabel x bernilai %d\n", x);
   printf("Variabel y bernilai %d\n", y);

   hasil = (float) (a + b) * x / y;

   printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", hasil);
   return 0;
}