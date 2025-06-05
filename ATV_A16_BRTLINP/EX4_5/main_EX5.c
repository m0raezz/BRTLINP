#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo = fopen("remedio.txt", "r");

    if (pArquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char ultimaLinha[100] = ""; 
    char linhaAtual[100];

    
    while (fgets(linhaAtual, sizeof(linhaAtual), pArquivo) != NULL) {
        strcpy(ultimaLinha, linhaAtual);
    }

    fclose(pArquivo);

    if (strlen(ultimaLinha) > 0) {
        printf("Ultima linha do arquivo: %s", ultimaLinha);
    } else {
        printf("O arquivo está vazio.\n");
    }

    return 0;
}
