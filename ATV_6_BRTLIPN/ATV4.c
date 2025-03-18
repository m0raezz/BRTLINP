// Online C compiler to run C program online
#include <stdio.h>

int main() {
        
        float raio;
        float pi = 3.14;
        
        printf("Qual o reio do circulo?: ");
        scanf("%f", &raio);
        
        
        float dia = raio *2;
        float circ = (pi * 2 ) * raio;
        float area = pi * (raio * raio);
        
        printf("O raio do circulo e %2.f, o diametro %2.f, a circunferencia %.2f e a area %.2fm²", raio, dia, circ, area);
        

    return 0;
}