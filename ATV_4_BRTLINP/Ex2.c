#include <stdio.h>

int main() {
        
        float nota;
        
        puts("Digite a nota do aluno(a) [0-10]: ");
        scanf("%f", &nota);
        
        if(nota < 9){
            if(nota < 8){
                if(nota < 7){
                    if(nota < 6){
                        puts("Nota F");
                    }
                    else{puts("Nota D");}
                }
                else{puts("Nota C");}
                    
            }
            else{puts("Nota B");}
        }
        else{puts("Nota A");}

    

    return 0;
}