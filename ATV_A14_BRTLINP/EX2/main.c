#include <stdio.h>
#include <string.h>

int palindromo(const char *str);
void inverter_palavra(char *str);

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (palindromo(palavra)) {
        printf("\n A palavra  \"%s\" é um palíndromo.\n", palavra);
    } else {
        printf("\n A palavra  \"%s\" não é um palíndromo.\n", palavra);
    }

    inverter_palavra(palavra);
    printf("Palavra invertida: %s\n\n", palavra);

    return 0;
}


//FUNÇÕES

void inverter_palavra(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}


int palindromo(const char *str) {
    const char *inicio = str;
    const char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        if (*inicio != *fim) {
            return 0; 
        }
        inicio++;
        fim--;
    }
    return 1; 
}

