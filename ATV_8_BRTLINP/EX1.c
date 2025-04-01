// Online C compiler to run C program online
#include <stdio.h>

int main(void) {
        int contador = 1;
        int fim = 3;
        int n1;
        do{
            printf("Tente adivinhar o numero: ");
            scanf("%d", &n1);
            
            if(n1 == 7){
                printf("Voce acertou!");
                contador = 4;
            }else{
                if(fim - contador != 0){
                    printf("Numero errado, tentativas restantes: %d \n", fim - contador);
                }else{
                    printf("Tentativas esgotadas");
                    
                }
            }
            contador++;
        }while( contador <= fim);

    return 0;
}
