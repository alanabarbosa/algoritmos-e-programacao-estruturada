#include <stdio.h>

int main() {
    int number1;
    char palavra[50] = " ";

    printf("Digite um número inteiro: ");
    scanf("%d", &number1);

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("O número %d tem %lu bytes\n", number1, sizeof(number1));
    printf("A palavra %s tem %lu bytes\n", palavra, sizeof(palavra));
    
    return 0;
}