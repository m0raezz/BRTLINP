#include <stdio.h>
#include <string.h>

int main(void){

    char senha[6]="azimo";
    int t = 0;
    char ts[50];

    while (t != 3) {
    printf("Digite a senha: ");
    scanf("%50s", ts);

            if (strcmp(senha, ts) == 0){
                printf("Acesso permitido \n");
                break;
                }else {
                    t = t + 1;
                    printf("Tentativa invalida, tentativa numero: %d\n", t);
                    if ( t >= 3) {
                        printf("Numero limite de tentativas acabou, tente novamente mais tarde!\n");
                        break;
                    }
            
                }   

            }       

    

    return 0;
}