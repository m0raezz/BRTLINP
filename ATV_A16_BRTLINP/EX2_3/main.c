#include <stdio.h>
#include <string.h>

int main(){

char nome[50];
    FILE *pArquivo = NULL;

        printf("Qual o nome do livro?");
        scanf("%49s", nome);
        strcat(nome, ".txt");

    pArquivo = fopen(nome, "w");

    int cont = 1;

    while(cont != 0){

        char persona[50];

        printf("Digite o nome de um personagem: ");
        scanf("%49s", persona);

        fprintf(pArquivo, "%s\n", persona);

        printf("Deseja ir novamente?[ 0|NAO 1|SIM]");
        scanf("%d", &cont);
    }
}
