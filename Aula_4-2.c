#include <stdio.h>

int main() {
    int number1, number2, igual, diferente, maiorQue, menorQue, maiorIgual, menorIgual;

    printf("Digite um número: ");
    scanf("%d", &number1);

    printf("Digite outro número: ");
    scanf("%d", &number2);

    igual = number1 == number2;
    diferente = number1 != number2;
    maiorQue = number1 > number2;
    menorQue = number1 < number2;
    maiorIgual = number1 >= number2;
    menorIgual = number1 <= number2;

    printf("%d é igual a %d: %d\n", number1, number2, igual);
    printf("%d é diferente de %d: %d\n", number1, number2, diferente);  
    printf("%d é maior que %d: %d\n", number1, number2, maiorQue);
    printf("%d é menor que %d: %d\n", number1, number2, menorQue);
    printf("%d é maior ou igual que %d: %d\n", number1, number2, maiorIgual);
    printf("%d é menor ou igual que %d: %d\n", number1, number2, menorIgual);

    
}