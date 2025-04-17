#include <stdio.h>
#include "igualdade.h"
#include "scan.h"

int main() {

    int x, y, z;

    scan(&x, &y, &z);
    printf("O maior numero e: %d \n", maior(x, maior(y, z)));

    



    
    return 0;
}
