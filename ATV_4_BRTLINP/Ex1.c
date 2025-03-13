#include <stdio.h>

int main() {
        
        float imc;
        puts("Digite seu IMC:");
        scanf("%f", &imc);
        
        if (imc >= 18.5){
            if(imc <= 24.9){
                
            puts("Seu imc está dentro do intervalo normal");
        
            }
            else{
                puts("Seu imc está acima do intervalo normal");
            }
        }
            
        else{
            puts("Seu imc é a baixo do intervalo normal");
        }

    

    return 0;
}