#include <stdio.h>

struct filme {
  char nome[20];
  int data;
  float tempo;
};

int main(void) {
  struct filme unico;

  printf("Digite o nome do filme: ");
  scanf("%19s", unico.nome);

  printf("Digite a data de lançamento: ");
  scanf("%d", &unico.data);

  printf("Digite o tempo de duracao em minutos: ");
  scanf("%f", &unico.tempo);

  FILE *pArquivo;
  pArquivo = fopen("filme.txt", "wb");

  fwrite(&unico, sizeof(struct filme), 1, pArquivo);

  fclose(pArquivo);

  return 0;
}