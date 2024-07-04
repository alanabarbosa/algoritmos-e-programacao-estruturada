#include <stdio.h>

int main() {
    int choice;

    printf("\tEscolha um sabor:\n");
    printf("\t1. Chocolate\n");
    printf("\t2. Morango\n");
    printf("\t3. Flocos\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Você escolheu sorvete de chocolate!\n");
            break;
        case 2:
            printf("Você escolheu sorvete de morando!\n");
            break;
        case 3:
            printf("Você escolheu sorvete de flocos!\n");
            break;
        default:
            printf("Opção inválida");
    }

    return 0;
}