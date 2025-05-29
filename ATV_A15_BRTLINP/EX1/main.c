#include <stdio.h>
#include <string.h>


int main(void) {
  FILE *pArquivo = NULL;

  pArquivo = fopen("quadrado.svg", "w");

  if( pArquivo == NULL ) {
     printf("O arquivo não foi aberto!");
  } else {

     char nome[270] = "<svg version=\"1.1\" \n width=\"300\" height=\"200\"\n xmlns=\"http://www.w3.org/2000/svg\">\n<rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" />\n</svg>";

    fprintf(pArquivo, "%s", nome);
  }
  printf("Arquivo criado com sucesso!\n");
  fclose(pArquivo);
  return 0;
}