// Online C compiler to run C program online
#include <stdio.h>

int main() {
        for(int a = 0; a < 2; a++){
            for(int b = 0; b < 2; b++){
                printf("%d", a);
                printf("%d ", b);
                printf("%d && %d == %d\n", a, b, a && b);
            }
        }
        
        
        

    return 0;
}