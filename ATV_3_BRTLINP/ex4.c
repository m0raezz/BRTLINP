#include <stdio.h>

int main() {
    int n;
    printf("Digite o numero desejado: ");
    scanf("%d", &n);
    
    if(n%2==0)
        printf("O numero escolhido e par");
    if(n%2!=0)
        printf("O numero escolhido e impar");
    
    return 0;
}
