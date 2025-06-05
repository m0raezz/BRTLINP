#include <stdio.h>

struct filme {
  char nome[20];
  int data;
  float tempo;
};


int main(void) {
  struct filme retorno;

  FILE *pArquivo;
  pArquivo = fopen("filme.txt", "rb");

    if(pArquivo == NULL){
        puts("Arquivo nao encontrado");
    }else{

        fread(&retorno, sizeof(struct filme), 1, pArquivo);

                printf("Nome do filme: %s\n", retorno.nome);
                printf("Data de lancamento: %d\n", retorno.data);
                printf("Tempo de duracao em minutos: %.2f\n", retorno.tempo);

        fclose(pArquivo);
    }
  
  return 0;
} 
