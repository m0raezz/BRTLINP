// Online C compiler to run C program online
#include <stdio.h>

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
    
    
    for(int i = 0; i < n1; i++){
        printf("*");
    }
    puts(" ");
    
    for(int i = 0; i < n2; i++){
        printf("*");        
    }
    puts(" ");    
    
    for(int i = 0; i < n3; i++){
        printf("*");    
    }
    puts(" ");    
    
    for(int i = 0; i < n4; i++){
        printf("*");    
    }
    puts(" ");
    
        
        
        

    return 0;
}
