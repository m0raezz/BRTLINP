#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void inicio();
void meio();
void fim();
void aba();
void titulo(int n);

int main(void) {
    char *recebido = getenv("QUERY_STRING");  

    inicio();
    aba();
    meio();
    titulo(recebido);  
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


void titulo(int n) {
    printf("    <h1>Numero digitado: %d</h1>\n", n);
}
