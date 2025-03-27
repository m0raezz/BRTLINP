#include <stdio.h>

int main(void) {
  char pedido;

  printf("\nDigite a venda(uma por vez) [B|BATATA  H|HUMBURGUER  S|SUCO  C|COMBO || F - Encerrar Turno]: ");
  scanf("%c", &pedido);
  getchar();

  int quantidadeB = 0;
  int quantidadeH = 0;
  int quantidadeS = 0;
  int quantidadeC = 0;

  while( pedido != 'F' ) {
    switch (pedido) {
      case 'C':
        	quantidadeC++;
        	break;
      case 'S': 
        	quantidadeS++;
        	break;
      case 'H':
        	quantidadeH++;
        	break;
	  case 'B':
    	    quantidadeB++;
    	    break;
      default:
            printf("Opcao nao encontrada!\n");
            break;

    }
    
      printf("\nDigite a venda(uma por vez) [B|BATATA  H|HUMBURGUER  S|SUCO  C|COMBO || F - Encerrar Turno]: ");
  scanf("%c", &pedido);
  getchar();
    

  }

    int valorB = quantidadeB * 10;
    int valorS = quantidadeS * 9;
    int valorH = quantidadeH * 15;
    int valorC = quantidadeC * 30;
    int total =  valorB + valorS + valorH + valorC;
                
    
  printf("Quantidades vendidas e valores totais \n  Humburguer: %d | R$ %d\n  Batata: %d | R$ %d\n  Suco: %d | R$ %d\n  Combo: %d | R$ %d\n", quantidadeH, valorH, quantidadeB, valorB, quantidadeS, valorS, quantidadeC, valorC );
  puts("----------------------");
  printf("Valor total: R$ %d", total);
  return 0;
}
