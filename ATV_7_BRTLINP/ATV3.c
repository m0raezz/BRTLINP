#include <stdio.h>

int main(void) {
    char tamanho;
    int estado = 0;

  printf("Digite a operação desejada (S |SECAR  E| ENXUGAR  L| LAVAR || F para encerrar):");
  scanf("%c", &tamanho);


  
    switch (tamanho) {
      case 'L':
    	estado++;
      case 'E': 
    	estado++;
      case 'S':
    	estado++;
	    break;
    }

  if(estado == 1){
      printf("Sua roupa foi apenas SECADA");
  }
  if(estado == 2){
      printf("Sua roupa foi ENXAGUADA e SECADA");
  }
  if(estado == 3){
      printf("Sua roupa foi LAVADA, ENXAGUADA e SECADA");
  }
  return 0;
}