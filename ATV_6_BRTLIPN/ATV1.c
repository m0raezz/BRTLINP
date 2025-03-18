// Online C compiler to run C program online
#include <stdio.h>

int main() {
        
        float soma = 0, nota, contador = 1, fim = 3;
        
        while( contador <= fim ){
            printf("Qual a nota %.0f ?:", contador);
            scanf("%f \n", &nota);
            soma = (soma + nota);
            contador = (contador + 1);
            
        };
        
        float med = soma/3;
        printf("A média entre elas é %.2f", med);
        

    return 0;
}