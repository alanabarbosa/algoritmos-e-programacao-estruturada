#include <stdio.h>

int main() {
    int n1, n2, n3, n4, soma;

    printf("Digite quatro números em sequência:\n");
    scanf("%d", &n1);
    fflush(stdin);
    scanf("%d", &n2);
    fflush(stdin);
    scanf("%d", &n3);
    fflush(stdin);
    scanf("%d", &n4);
    fflush(stdin);

    soma = n1 + n2 + n3 + n4;
    printf("Soma de todos os números: %d\n", soma);

    return 0;
}
