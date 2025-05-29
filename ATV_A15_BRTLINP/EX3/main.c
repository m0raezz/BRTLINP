#include <stdio.h>
#include <string.h>


int abertura(FILE * arquivo);
int fechamento( FILE *pArquivo);
int retangulo( FILE *pArquivo);
int circulo( FILE *pArquivo);
int texto( FILE *pArquivo);
int linha( FILE *pArquivo);

int main(void) {
  FILE *pArquivo = NULL;
  char nome [50];
  int op;
  int i;

  printf("Qual o nome do arquivo?");
  scanf("%49s", nome);
  strcat(nome, ".svg");
  pArquivo = fopen(nome, "w");  
  abertura(pArquivo);


  do{
    printf("Quais figuras voce deseja adicionar?[ 1| RETANGULO  2|CIRCULO  3|TEXTO  4|LINHA  0|SAIR]: ");
    scanf("%d",&op);

     switch (op) {
      case 1:
        retangulo(pArquivo);
        break;
      case 2:
        circulo(pArquivo);
        break;
      case 3:
        texto(pArquivo);
        break;
      case 4:
        linha(pArquivo);
        break;
      case 0:
        printf("Saindo...\n");
        break;
      default:
        printf("Opcao invalida. Tente novamente.\n");
    }


  
    printf("Deseja ir novamente?[ 1|SIM  0|NAO]:");
    scanf("%d",&i);
  }while( i != 0);

  fechamento(pArquivo);

return 0; 
}





/*FORMAS*/

/*LINHA*/
int linha( FILE *pArquivo){
    int x1,y1,x2,y2;

    printf("Qaul a cordenada x1 desejada?: ");
    scanf("%d", &x1);

    printf("Qaul a cordenada y1 desejada?: ");
    scanf("%d", &y1);   

    printf("Qaul a cordenada x2 desejada?: ");
    scanf("%d", &x2);

    printf("Qaul a cordenada y2 desejada?: ");
    scanf("%d", &y2);

    fprintf(pArquivo, "\n<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />", x1, y1, x2, y2);

    puts("Linha adicionada!");
    return 1;

};


/*RETANGULO*/
int retangulo( FILE *pArquivo) {


 int x,y,wt,ht;
 printf("\nQual a cordenada x desejada?: ");
 scanf("%d", &x);

 printf("\nQual a cordenada y desejada?: ");
 scanf("%d", &y);

 printf("\nQual a altura desejada?: ");
 scanf("%d", &ht);

 printf("\nQual a largura desejada?: ");
 scanf("%d", &wt);


 fprintf(pArquivo, "\n<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />\n", x, y, wt, ht);

 puts("Retangulo adicionado!");
 return 1;
};


/*CIRCULO*/
int circulo( FILE *pArquivo) {

    int cx, cy, r;

    printf("\nQual a cordenada x desejada?: ");
    scanf("%d", &cx);
    
    printf("\nQual a cordenada y desejada?: ");
    scanf("%d", &cy);
    
    printf("\nQual o raio desejado?: ");
    scanf("%d", &r);

    fprintf( pArquivo,"\n<circle cx=\"%d\" cy=\"%d\" r=\"%d\"/>\n", cx, cy, r);

    puts("Circulo adicionado!");
    return 1;
};

/*TEXTO*/
int texto( FILE *pArquivo) {

    int x,y,op;
    char class[20];
    char texto[100];
    printf("Qual a frase desejada?: ");
    scanf("%s", texto);


    printf("\nQual a cordenada x desejada?: ");
    scanf("%d", &x);
    
    printf("\nQual a cordenada y desejada?: ");
    scanf("%d", &y);

    printf("Qual a classe desejada? [ 1|small  2|heavy  3|Rrrrr]");
    scanf("%d", &op);

    switch (op) {
        
        case 1:
            strcpy(class, "small");
            break;
        case 2:
            strcpy(class, "heavy");
            break;
        case 3:
            strcpy(class, "Rrrrr");
            break;
        default:
            printf("Opcao invalida. Formatação padrão(small) aplicada.\n");
            strcpy(class, "small");
            break;

    };
    puts("Texto adicionado");
    fprintf(pArquivo, "<text x=\"%d\" y=\"%d\" class=\"%s\">%s</text>",x, y, class, texto);
    return 1;
};










/*FECHAMENTO E ABETURA*/
int abertura(FILE * arquivo) {
    int retorno = fprintf(arquivo, "<svg version=\"1.1\" ");

    if (retorno < 0) {
      return 0;
    }

    retorno = fprintf(arquivo, "width=\"900\" height=\"1000\" ");

    if (retorno < 0) {
      return 0;
    }

    retorno = fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">");

    if (retorno < 0) {
      return 0;
    }
    puts("Arquivo aberto!");
    return 1;
  }

  int fechamento(FILE * arquivo) {
  int retorno = fprintf(arquivo, "\n</svg>");

  if (retorno < 0) {
    puts("Erro ao fechar o arquivo.");
    return 0;
  }
  puts("Arquivo fechado!");
  return 1;
} 






