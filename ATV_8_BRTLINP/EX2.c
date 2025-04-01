// Online C compiler to run C program online
#include <stdio.h>

int main() {
        int contador = 1;
        int soma = 0;
        int n1;
        do{
            printf("Jogue um d6 e diga o numero que caiu: ");
            scanf("%d", &n1);
            
            if((n1 % 2) == 0){
                soma = soma + n1;
            }else{
                break;
            }
            
        }while(contador != 0);
        
        printf("O total da soma dos numeros pares e %d", soma);

    return 0;
}