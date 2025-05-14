#include <stdio.h>

int main() {
    int altura;
    char rsp;

    do{
        printf("Digite a altura desejada: "); 
        scanf(" %d", &altura);

        if(altura < 1||rsp=='F') break;

        printf("Desenhar à esquerda(A) ou direita(D)? (F para sair): ");
        scanf(" %c", &rsp);

        if(rsp == 'F') break;

        if (rsp == 'D') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else if (rsp == 'A') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= altura - i; j++) {
                    printf(" ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            printf("Opção inválida. Escolha A ou D.\n");
        }
    }while(rsp != 'F');

    return 0;
}
