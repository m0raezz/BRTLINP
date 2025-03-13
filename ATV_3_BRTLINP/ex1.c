#include <stdio.h>

int main() {
    
    int nota;
    
    printf("Digite a nota do aluno desejado: ");
    scanf("%d", &nota);
    
    if(nota >= 6){
        printf("O aluno foi aprovado");
    }
    
    if(nota<6){
        printf("O aluno foi reprovado");
    }
    
    return 0;
}
