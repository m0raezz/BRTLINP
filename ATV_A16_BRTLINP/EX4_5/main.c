#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo = fopen("remedio.txt", "w");

    if (pArquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int cont = 1;

    while (cont != 0) {
        char data[50];
        char hora[50];

        printf("Digite a Data (DD/MM/AAAA): ");
        scanf("%49s", data);

        printf("Digite a Hora (HH:MM): ");
        scanf("%49s", hora);

        fprintf(pArquivo, "%s %s\n", data, hora);

        printf("Deseja ir novamente? [0|NAO 1|SIM] ");
        scanf("%d", &cont);
    }

    fclose(pArquivo);
    return 0;
}
