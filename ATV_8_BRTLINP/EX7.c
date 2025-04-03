// Online C compiler to run C program online
#include <stdio.h>

int estrela(int n1){
    for(int i = 0; i < n1; i++){
        printf("*");
    }
    puts("");
}


int main() {
    int n1, n2, n3, n4;
    
    printf("Digite um numero: ");
    scanf("%d", &n1);
    getchar();
    
    printf("Digite um numero: ");
    scanf("%d", &n2);
    getchar();
    
    printf("Digite um numero: ");
    scanf("%d", &n3);
    getchar();
    
    printf("Digite um numero: ");
    scanf("%d", &n4);
    getchar();
    
    
    estrela(n1);
    estrela(n2);
    estrela(n3);
    estrela(n4);
    
        
        
        

    return 0;
}
