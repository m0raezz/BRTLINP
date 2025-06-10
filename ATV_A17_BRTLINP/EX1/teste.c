#include <stdio.h>

void inicio();
void meio();
void fim();
void aba();
void titulo(char palavra[100]);



int main(void) {



    inicio();
    aba();
    meio();
    titulo("TEXTO INSANO");
    fim();

  

  return 0;
}



void inicio(){
 printf("Content-type: text/html\n\n"
        "<html>\n"
        "<head>\n"
        "   <meta charset='UTF-8'>\n"
 );

 
}

void meio(){
 printf("</head>\n"
        "<body>\n"
 );
 
}


void fim(){
    printf("</body>\n"
            "</html>\n"
 );
 
}

void aba(){
    printf("<title>Segunda pagina</title>");

    

}

void titulo(char palavra[100]){
    printf("    <h1>%s</h1>", palavra);

    
}