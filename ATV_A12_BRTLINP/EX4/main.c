#include <stdio.h>
#include <string.h>

int main() {
  char palavra[6];
  char * posicao;
  char letra;
  int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);


while( contador != 3){

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    posicao = strchr(palavra, letra);

        if( posicao != NULL ) {
                printf("A letra foi encontrada!\n");
                break;
            } else {
                contador++;
                printf("Nao encontrada! Tentativa: %d\n", contador);
                if (contador == 3) {
                printf("Tentativas esgotadas!\n");
                }
                
            }




}



  return 0;
}  