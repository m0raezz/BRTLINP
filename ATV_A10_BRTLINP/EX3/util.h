#include <stdio.h>


int diametro(double *r, double *d){

    printf("Digite o raio:");
    scanf("%lf", &*r);
    *r = *r;
    *d = *r * *r;

    return printf("\n Seu diametro é %.2lf", *d);
    

}


int circunferencia(double r){

    double pi = 3.14;
    return printf("\n Sua circunferencia e : %2.lf", 2 * pi * r);

}


int area(double r){
    
    double pi = 3.14;
    return printf("\n Sua area e: %2.lf", pi * r * r);

}



