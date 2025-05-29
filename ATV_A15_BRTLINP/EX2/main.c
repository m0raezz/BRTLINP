#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *pArquivo = NULL;


  char nome[50];
  printf("Qual o nome do arquivo?");
  scanf("%49s", nome);
  strcat(nome, ".svg");

  pArquivo = fopen(nome, "w");
 int x,y,wt,ht;
 printf("\nQual a cordenada x desejada?: ");
 scanf("%d", &x);

 printf("\nQual a cordenada y desejada?: ");
 scanf("%d", &y);

 printf("\nQual a altura desejada?: ");
 scanf("%d", &ht);

printf("\nQual a largura desejada?: ");
 scanf("%d", &wt);






  if (pArquivo == NULL) {
    printf("O arquivo não foi aberto!\n");
  } else {
    fprintf(pArquivo, "<svg version=\"1.1\" \n width=\"300\" height=\"200\"\n xmlns=\"http://www.w3.org/2000/svg\">\n<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />\n</svg>", x, y, wt, ht);
  }
  printf("Arquivo criado com sucesso!\n");
  fclose(pArquivo);
  return 0;
}
