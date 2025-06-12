#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void inicio();
void meio();
void fim();
void aba();
void titulo(int n, int tempo);

int main(void) {
    char *recebido = getenv("QUERY_STRING");  
    char *posicao = NULL;
    char letra = '=';

    posicao = strchr(recebido, letra);

    char *valor_recebido = posicao+1;

    int numero = atoi(valor_recebido);

    int tempo = 2025 - numero;

    inicio();
    aba();
    meio();
    titulo(numero, tempo);  
    fim();

    return 0;
}


void inicio() {
    printf("Content-type: text/html\n\n"
           "<html>\n"
           "<head>\n"
           "   <meta charset='UTF-8'>\n");
}


void meio() {
    printf("</head>\n"
           "<body>\n");
}


void fim() {
    printf("</body>\n"
           "</html>\n");
}


void aba() {
    printf("<title>Segunda pagina</title>\n");
}


void titulo(int n, int tempo) {
    printf("    <h1>Data de nascimento digitada: %d\n Tempo passado: %d</h1>\n", n, tempo);
}
