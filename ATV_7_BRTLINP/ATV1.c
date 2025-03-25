// Online C compiler to run C program online
#include <stdio.h>
int main(){


int contador;
int soma = 0;

printf("Quantos numeros vc deseja? ");
scanf("%d", &contador);



for(int i = 1; i <= contador; i++ ){
    
        if((i % 2) == 1){
            soma += i;
            printf("Sequencia de soma dos numeros impare: %d \n", soma);
        }

    }
}
