#include <stdio.h>

int main() {
    
    int num1, num2;
    
    printf("Digite o primeiro numero escolhido: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero escolhido: ");
    scanf("%d", &num2);
    
    if(num1>num2)
        printf("Maior numero: %d\nMenor numero: %d", num1, num2);
    if(num1<num2)
        printf("Maior numero: %d\nMenor numero: %d", num2, num1);
    if(num1==num2)
        printf("Os numeros sã iguais");
    
    return 0;
}
