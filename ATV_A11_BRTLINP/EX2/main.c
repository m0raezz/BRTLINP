#include <stdio.h>

#define PI 3.14159

int main(void){

    float r;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    printf("\n A area do circulo e: %2.fm²\n", PI*r*r);

return 0;
};