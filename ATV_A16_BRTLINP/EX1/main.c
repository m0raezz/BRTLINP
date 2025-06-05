#include <stdio.h>
#include <string.h>

int main(){

  FILE *pArquivo = NULL;
  pArquivo = fopen("txt.txt", "r");

  if (pArquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
  }

  char destino[300];
  puts("Conteúdo do arquivo:\n");
  while (fgets(destino, sizeof(destino), pArquivo) != NULL) {
    printf("%s", destino);
  }
    puts("\n");
  fclose(pArquivo);
  return 0;
}
