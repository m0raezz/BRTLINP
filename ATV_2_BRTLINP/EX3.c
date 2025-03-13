#include <stdio.h>

int main(void) {
  
  float altura;
  float peso;
 
  printf("Qual sua altura?(em metros) ");
  scanf("%f", &altura);
  
  printf("Qual seu peso em quilos? ");
  scanf("%f", &peso);
  
  float imc = peso / (altura * altura);
  printf("Sua altura é de %.2f e seu peso é de %.2f \n", altura, peso);
  printf("Seu IMC é %.2f", imc);
  
  

  return 0;
}