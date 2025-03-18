#include <stdio.h>

int main(void) {
  int soma = 0;
  int numero;
  int contador = -1;

  while(numero != -5) {
    soma = soma + numero;
    printf("Digite uma nota (-5 para calcular a media): ");
    scanf("%d", &numero);
    
    contador = contador + 1 ;
  }
  
  float med = soma/contador;
  printf("A quantidade de notas foi %d \n", contador);
  printf("Resultado da media: %.2f", med);

  return 0;
}