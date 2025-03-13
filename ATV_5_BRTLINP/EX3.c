#include <stdio.h>

int main(void) {
  int contador = 1;

  while( contador <= 10 ) {
    printf("Seu numero é o %d... \n ", contador);
    contador = contador + 1;
  }

  return 0;
}