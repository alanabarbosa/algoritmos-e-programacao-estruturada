#include <stdio.h>

int main() {
    int i, maior = 10, menor = 50, vetor[5] = {10, 20, 30, 40, 50};

    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("Maior número %d\n", maior);
    printf("Menor número %d\n", menor);

    return 0;
}
