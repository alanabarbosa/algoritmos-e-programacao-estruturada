#include <stdio.h>

int main() {
    int i, vetor[5];

    for (i = 0; i < 5; i++) {
        vetor[i] += i * 30;
        printf("Resultado do vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}
