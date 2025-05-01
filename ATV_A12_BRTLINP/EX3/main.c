#include <stdio.h>

int main(void){

    char senha[6]="azimo";
    int t = 0;
    char ts[50];

    while (t != 3) {
    printf("Digite a senha: ");
    scanf("%50s", ts);

            if (ts[0] == senha[0] && ts[1] == senha[1] && ts[2] == senha[2] && ts[3] == senha[3] && ts[4] == senha[4] && ts[5] == senha[5] ){
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