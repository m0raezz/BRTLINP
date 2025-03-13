#include<stdio.h>
int main(void){

float n1, n2;

printf("Digite um numero: ");
scanf("%f", &n1);

printf("Digite outro numero: ");
scanf("%f", &n2);

printf("O maior numero entre eles é o %.2f e o menor %.2f", (n1 > n2) ? n1, n2 : n2, n1);

return 0;


}