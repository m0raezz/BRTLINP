#include <stdio.h>

void scan(int *x, int *y, int *z){
    printf("Digite o primeiro numero: ");
    scanf("%d", &*x);
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &*y);

    printf("Digite o primeiro numero: ");
    scanf("%d", &*z);

    *x = *x;
    *y = *y;
    *z = *z;


    printf("Primeiro numero: %d\n", *x);
    printf("Segundo numero: %d\n", *y);
    printf("Terceiro numero: %d\n", *z);



}