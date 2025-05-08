#include <stdio.h>
#include <string.h>

#define TAMANHO 5 

void bubbleSort(int n[], int tamanho);

int main() {
    int n[TAMANHO] = {9, 7, 3, 6, 8};

    printf("Vetor antes da ordenacao: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    bubbleSort(n, TAMANHO);

    printf("Vetor depois da ordenacao: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    return 0;
}


void bubbleSort(int n[], int tamanho) { 
    int i, t, temp;
    for (i = 0; i < tamanho - 1; i++) { 
        for (t = 0; t < tamanho - i - 1; t++) { 
            if (n[t] > n[t + 1]) {
                temp = n[t];
                n[t] = n[t + 1];
                n[t + 1] = temp;
            }else{
                continue;
            }
        }
    }
}
