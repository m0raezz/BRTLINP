#include <stdio.h>

int main() {
        
        int peso;
        float altura;
        
        printf("Digite sua altura em metros (Exemplo; 1.80) : ");
        scanf("%f", &altura);
        
        printf("\n Digite seu peso em kilos: ");
        scanf("%d", &peso);

        float imc = peso / (altura * altura);
        
        if(imc < 40){
            if(imc < 35){
                if( imc <30){
                    if(imc <25){
                        if(imc < 18.5){
                            puts("A baixo do peso");
                        }
                        else{puts("Intervalo normal");}        
                    }
                    else{puts("Sobrepeso");}
                }
                else{puts("Obesidade grau I");}
            }
            else{puts("Obesidade grau II");}
        }
        else{puts("Obesidade grau III");}

    

    return 0;
}