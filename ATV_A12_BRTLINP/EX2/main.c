#include <stdio.h>

int main(void){

int n;
int soma = 0;

printf("digite um numero inteiro: ");
scanf("%d", &n);

for(int i = 0; i < n; i++){

    if ( i % 3 == 0 || i % 5 == 0) {
    soma = soma + i;
    }else{
        continue;
    }
}


printf("A soma dos numeros multiplos de 5 ou 3 abaixo do numero selecionado e: %d ", soma);

    return 0;
}