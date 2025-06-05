#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    FILE *pArquivo = NULL;
    int cont = 1;

    while (cont != 0) {
        printf("Qual o nome do livro? ");
        scanf("%49s", nome);
        strcat(nome, ".txt");

        pArquivo = fopen(nome, "r");
        if (pArquivo == NULL) {
            puts("O Nome do arquivo está errado! TENTE NOVAMENTE");
        } else {
            cont = 0;
        }
    }

    char persona[300];
    char escolha;

    printf("\nPersonagens do livro:\n");

    while (fgets(persona, sizeof(persona), pArquivo) != NULL) {
        printf("%s", persona);

        printf("Deseja imprimir o proximo? (F|NAO P|SIM) ");
        scanf(" %c", &escolha);

        if (escolha == 'f' || escolha == 'F') {
            break;
        } else if (escolha == 'p' || escolha == 'P') {
        } else {
            printf("Opcao invalida. Imprimindo o proximo personagem.\n");
        }
    }

    fclose(pArquivo);
    return 0;
}
