#include <stdio.h>

int main() {
    int soma, i;

    soma = 0;
    i = 1;
    while (i<=10) {
        soma = soma += i;
        i = i+1;
    }

    printf("Soma de todos os inteiros entre 1 e 10: %d\n", soma);

    return 0;
}
