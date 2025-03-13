#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota do aluno desejado: ");
    scanf("%f", &nota);
    
    if(nota>=9){
        printf("O resultado será A\n");
        return 0;  
    }
    if(nota>=8){
        printf("O resultado será B\n");
        return 0;
    }
    if(nota>=7){
        printf("O resultado será C\n");
        return 0;
    }
    if(nota>=6){
        printf("O resultado será D\n");
        return 0;
    }
    if(nota>=0){
        printf("O resultado será F\n");
        return 0;
    }
    return 0;
}
