#include <stdio.h>
 
 int sub3(int *y) {
     *y = *y - 3;
   return *y;
 }
 
 int main(void) {
   int x;
   
   printf("Digite um numero: ");
   scanf("%d", &x);
   
   printf("X antes: %d\n", x);
 
   sub3(&x);
   printf("Resultado: %d\n", x);
 
   printf("X depois: %d\n", x);
   return 0;
 }
