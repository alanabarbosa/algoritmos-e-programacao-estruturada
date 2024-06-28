#include <stdio.h>
#include <string.h>
#include <locale.h>

int soma(int x, int y) {
    return x + y;
}

int insertNumber(int *x, int *y) {
    printf("Digite um número: ");
    scanf("%d", x);
    fflush(stdin);

    printf("Digite outro número: ");
    scanf("%d", y);
    fflush(stdin);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;
    int y;

    insertNumber(&x, &y);

    int resultado = soma(x, y);

    printf("Resultado da adição: %d\n", resultado);

    return 0;    
}
