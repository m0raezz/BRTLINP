#include <stdio.h>
#include <string.h>

int main() {
  char nome[20];
  char sobrenome[20];
  char nomeCompleto[50];

    printf("Digite seu nome: ");
    scanf(" %19s", nome);

    printf("Digite seu sobrenome: ");
    scanf(" %19s", sobrenome);

    strcpy(nomeCompleto, nome);
    strcpy(nome, " ");
    strcat(nomeCompleto, sobrenome);

    printf("%s\n", nomeCompleto);

  return 0;
}