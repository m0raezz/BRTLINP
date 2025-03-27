#include <stdio.h>

int main(void) {
    char tamanho;

  printf("Digite a operação desejada (S |SECAR  E| ENXUGAR  L| LAVAR || F para encerrar):");
  scanf("%c", &tamanho);
  getchar();

while( tamanho != 'F'){
  
    switch (tamanho) {
      case 'L':
    	printf("\nSua roupa foi LAVADA, ENXAGUADA e SECADA\n");
    	break;
      case 'E': 
    	printf("\nSua roupa foi ENXAGUADA e SECADA\n");
    	break;
      case 'S':
    	printf("\nSua roupa foi apenas SECADA\n");
	    break;
	  default:
	    printf("Opcao nao encontrada!");
	    break;
    }
    
     
      
  printf("Digite a operação desejada (S |SECAR  E| ENXUGAR  L| LAVAR || F para encerrar):");
  scanf("%c", &tamanho);
  getchar();
    
}
printf("\nProcesso encerrado!");
  return 0;
}
