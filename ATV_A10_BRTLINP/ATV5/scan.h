#include <stdio.h>

void scan(int *x){
    printf("Digite o numero: ");
    scanf("%d", &*x);

    *x = *x;

    printf("Numero digitado: %d\n\n", *x);

}
