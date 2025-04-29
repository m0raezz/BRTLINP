#include <stdio.h>
#define TAMANHO 3

float scan(float n[], float *soma){

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite um numero: ");
        scanf("%f", &n[i]);
        *soma = *soma + n[i];
        
    }
    
}

int main(void){

float n[TAMANHO];
float soma = 0;
scan(n, &soma);
printf("Soma total: %2.f \n", soma);


    return 0;
}