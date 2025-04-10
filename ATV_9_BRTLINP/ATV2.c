#include <stdio.h>

int sub3(int y) {
  return y - 3;
}

int main(void) {
  int x;
  
  printf("Digite um numero: ");
  scanf("%d", &x);
  
  printf("X antes: %d\n", x);

  int resultado = sub3(x);
  printf("Resultado: %d\n", resultado);

  printf("X depois: %d\n", x);
  return 0;
}

