#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice, user_number, random;

    srand(time(NULL));

    random = rand() % 100;
    
    do 
    {
        printf("Qual número premiado?\n");
        scanf("%d", &user_number);
        printf("Você errou! Tente novamente\n");

        if (user_number == random) {
            printf("Parabéns, você acertou\n");
            printf("Saindo...\n");
            break;
        }
    } while(user_number != random);
    
        
    return 0;
}