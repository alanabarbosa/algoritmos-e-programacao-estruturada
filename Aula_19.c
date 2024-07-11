#include <stdio.h>
#include <locale.h>
#include <stdbool.h> 
#include <math.h>
#define n 9


bool isPrimo(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
           return false; 
        } 
    }
    return true;
}

void inputs(int *vetor) {
    for (int i = 0; i < n; i++) {
        printf("Insira elementos da posição %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }    
}

void screen(int *vetor) {
    for (int i = 0; i < n; i++) {
        if (isPrimo(vetor[i])) {
            printf("Número primo: %d, Posição: %d\n", vetor[i], i+1);
        }
    }    
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[n], i;
    inputs(vetor);
    screen(vetor);

    return 0;
}
