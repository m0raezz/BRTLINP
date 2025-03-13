
#include<stdio.h>
int main(void){

int idade;

printf("Qual a idade do paciente?");
scanf("%d", &idade);

puts((idade >= 60) ? "paciente pode ser atendido" : "Paciente não pode ser atendido");

return 0;


}