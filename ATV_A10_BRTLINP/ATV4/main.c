#include <stdio.h>
#include "igualdade.h"

int main() {

    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("\nOs numeros sao iguais?(1 SIM 0 NAO) %d", igual(x, y));
    printf("\nO maior numero e: %d", maior(x, y));
    printf("\nO menor numero e: %d \n", menor(x, y));





    
    return 0;
}