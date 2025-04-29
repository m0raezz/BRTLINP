#include <stdio.h>

#define TAMANHO 4

int main(void){

double nota[TAMANHO];
double total;

for(int i = 0; i < TAMANHO; i++){
    printf("Digite a nota do aluno: ");
    scanf("%lf", &nota[i]);
    total += nota[i];
    
};


printf("A soma total das suas notas e: %2.f \n", total );



return 0;
};