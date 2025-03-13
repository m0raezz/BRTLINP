#include <stdio.h>

int main(void) {
  int peso = 60;
  float altura = 1.70;
  float imc = peso / (altura * altura);
  
  printf("Sua altura é de %.2f e seu peso é de %d \n", altura, peso);
  printf("Seu IMC e %.2f", imc);

  return 0;
}