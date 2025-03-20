// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    char *frase = "Seu triangulo retangulo e possivel";
    int contador = 1;
    
    while (contador != -1) {
        puts("Digite um lado (-1 para sair): ");
        scanf("%f", &lado1);  
        
        if (lado1 == -1) { 
            contador = -1;
        }else{

        if (lado1 != -1) {  
            printf("Digite outro lado: ");
            scanf("%f", &lado2);  
            
            printf("Digite outro lado: ");
            scanf("%f", &lado3);  


            if (lado1 >= lado2) {
                if (lado1 >= lado3) {

                    if ((lado2 * lado2) + (lado3 * lado3) == (lado1 * lado1)) {
                        printf("%s\n", frase);  
                        contador = -1;
                    }else{
                        puts("Triangulo retangulo invalido");
                    }
                }
            }


            if (lado2 >= lado1) {
                if (lado2 >= lado3) {

                    if ((lado1 * lado1) + (lado3 * lado3) == (lado2 * lado2)) {
                        printf("%s\n", frase);  
                        contador = -1;
                    }else{
                        puts("Triangulo retangulo invalido");
                    }
                }
            }

            
            if (lado3 >= lado1) {
                if (lado3 >= lado2) {
                    
                    if ((lado1 * lado1) + (lado2 * lado2) == (lado3 * lado3)) {
                        printf("%s\n", frase);  // Adiciona uma nova linha após a frase
                        contador = -1;
                    }else{
                        puts("Triangulo retangulo invalido");
                    }
                }
            }
            
        
        }
    
    }            
}

    return 0;
}
