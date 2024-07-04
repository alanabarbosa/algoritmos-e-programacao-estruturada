#include <stdio.h>

int main() {
    int choice, number1, number2, result;
    
    while (1)
    {
        printf("\nQual calculadora você quer?\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");

        scanf("%d", &choice);

        if (choice == 5) {
            printf("Saindo...\n");
            break;
        }

        printf("\nEscolha um número: \n");
        scanf("%d", &number1);
        printf("\nEscolha outro número: \n");
        scanf("%d", &number2);

        switch (choice)
        {
            case 1:
                result = number1 + number2;
                printf("\n%d + %d = %d\n", number1, number2, result);
                break;
            case 2:
                result = number1 - number2;
                printf("\n%d - %d = %d\n", number1, number2, result);
                break;
            case 3:
                result = number1 * number2;
                printf("\n%d * %d = %d\n", number1, number2, result);
                break;
            case 4:
                result = number1 / number2;
                printf("\n%d / %d = %d\n", number1, number2, result);
                break;                                                   
            default:
                printf("Opção inválida\n\n");
        }
    }
    
        
    return 0;
}