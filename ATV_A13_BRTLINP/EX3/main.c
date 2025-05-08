#include <stdio.h>
#include <string.h>

#define TAMANHO 50

void an(char *palavra) { 
    int i, t, temp;
    int ta = strlen(palavra); 

    for (i = 0; i < ta - 1; i++) {
        for (t = 0; t < ta - 1 ; t++) {
            if (palavra[t] > palavra[t + 1]) {
                temp = palavra[t];
                palavra[t] = palavra[t + 1];
                palavra[t + 1] = temp;
            }
        }
    }
}

int main() {
    char palavra1[TAMANHO], palavra2[TAMANHO];

    printf("Digite a primeira palavra: ");
    scanf("%49s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%49s", palavra2);
    
    an(palavra1);
    an(palavra2);

        if(strlen(palavra1) ==  strlen(palavra2)) {
            
            if(strcmp(palavra1, palavra2) == 0){
                puts("========================================================");
                printf("As palavras são anagramas.");

                printf("\nPalavra 1: %s", palavra1);
                printf("\nPalavra 2: %s\n", palavra2);
                puts("========================================================");
            }
            else{printf("As palavras não são anagramas.");}
        
        }
        else{printf("As palavras não são anagramas.");}
    


    return 0;
}
