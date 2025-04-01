// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for(int i = 0; i <= 20; i++){
        
        if((i % 3) == 0){
            continue;
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}