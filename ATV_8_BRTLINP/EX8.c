// Online C compiler to run C program online
#include <stdio.h>
#include <locale.h>

char* test( int n1){
    if(n1 % 2 == 0){
        return "Seu numero é par";
    }else{
        return "Seu numero é impar";
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");
        int n1;
        
        
        printf("Digite um numero: ");
        scanf("%d", &n1);
        
        char* resultado = test(n1);
        printf("%s", resultado);
        
        
        
        

    return 0;
}
