#include <stdio.h>

#define TAMANHO 2

// Chamando funções
void scan(float n[]);
void maior(float numeros[]);
float media(float numeros[]);
float dobro(float numeros[]);


int main(void) {
    float numeros[TAMANHO];

    scan(numeros);

    puts("\n=========================================================================================");
    printf("|| A ordem dada para o vetor foi numeros[0] = %.2f, numeros[1] = %.2f \n", numeros[0], numeros[1]);

    maior(numeros);
    printf("|| A ordem depois de arrumar do maior para o menor e: numeros[0] = %.2f, numeros[1] = %.2f \n", numeros[0], numeros[1]);
    puts("_________________________________________________________________________________________");

    printf("|| Vetores antes da media( ): numeros[0] = %.2f, numeros[1] = %.2f \n", numeros[0], numeros[1]);
    printf("|| Media entre os numeros dos vetores: %.2f \n", media(numeros));
    printf("|| Media entre o dobro dos numeros dos vetores: %.2f \n", dobro(numeros));
    printf("|| Vetores depois de usar o dobro( ): numeros[0] = %.2f, numeros[1] = %.2f \n", numeros[0], numeros[1]);
    puts("=========================================================================================\n");

    return 0;
}

// Funções

void scan(float n[]) {
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite um numero: ");
        scanf("%f", &n[i]);
    }
}

void maior(float numeros[]) {
    if (numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

float media(float numeros[]) {
    float soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma += numeros[i];
    }
    return soma / TAMANHO;
}

float dobro(float numeros[]) {
    float soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        numeros[i] *= 2;
        soma += numeros[i];
    }
    return soma / TAMANHO;
}
