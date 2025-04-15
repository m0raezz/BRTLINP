// Online C compiler to run C program online
#include <stdio.h>


int scan(int *n1, int *n2){
    printf("Digite um numero: ");
    scanf("%d", &*n1);
    printf("Digite outro numero: ");
    scanf("%d", &*n2);
    
    *n1 = *n1;
    *n2 = *n2;
    
    return printf("Primeiro: %d Segundo: %d \n", *n1, *n2);
    
}

int somar(int n1, int n2){
    
    return n1 + n2;
    
}

void imprime(int soma){
    printf("A soma dos valores é: %d", soma);
}

int main() {
    int n1 = 0;
    int n2 = 0;
    int soma;
    
    
    scan(&n1, &n2);
    soma = somar(n1, n2);
    imprime(soma);
    
    
    
    return 0;
}