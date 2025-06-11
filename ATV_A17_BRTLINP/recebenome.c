#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void inicio();
void meio();
void fim();
void aba();
void titulo(char *palavra);

int main(void) {
    char *recebido = getenv("QUERY_STRING");  
    char *valor = NULL;

    if (recebido != NULL) {
        
        valor = strchr(recebido, '=');
        if (valor != NULL) {
            valor++;  
        }
    }

    inicio();
    aba();
    meio();
    titulo(valor ? valor : "Sem título");  
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


void titulo(char *palavra) {
    printf("    <h1>%s</h1>\n", palavra);
}
