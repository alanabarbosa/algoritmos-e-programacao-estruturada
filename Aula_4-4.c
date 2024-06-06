#include <stdio.h>

int main() {
    int number1, number2, maior;

    printf("Digite um número inteiro: ");
    scanf("%d", &number1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &number2);

    maior = (number1 > number2) ? number1 : number2;

    printf("O maior número entre %d e %d é %d\n", number1, number2, maior);
}