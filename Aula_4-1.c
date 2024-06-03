#include <stdio.h>

int main() {
    int number1, number2, soma, subtracao, divisao, modulo;

    printf("Digite um número: ");
    scanf("%d", &number1);

    printf("Digite outro número: ");
    scanf("%d", &number2);

    soma = number1 + number2;
    subtracao = number1 - number2;
    divisao = number1 / number2;
    modulo = number1 + number2;
    
    printf("A soma de %d e %d é %d\n", number1, number2, soma);    
    printf("A subtração de %d e %d é %d\n", number1, number2, subtracao);    
    printf("A divisão de %d e %d é %d\n", number1, number2, divisao);    
    printf("O resto da divisão de %d e %d é %d\n", number1, number2, modulo);

    return 0;
}