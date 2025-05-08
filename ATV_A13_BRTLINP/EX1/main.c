#include <stdio.h>
#include <string.h>

int main(void){

    char nome[11];
    int t;
    int tamanho = strlen(nome);

    printf("Digite uma palavra: ");
    scanf(" %10s", nome); 
    


    for(int i = 0; i < tamanho; i++){
        if (nome[i] == nome[(tamanho- 1 - i)]) {
            t++;
        }else{

            t = 0;
            break;
        }
    }

    if(t > 0){
        printf("E um palindromo! \n");
    }else(printf("Nao e um palindromo! \n"));

    return 0;
}