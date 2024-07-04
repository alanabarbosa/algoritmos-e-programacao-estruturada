#include <stdio.h>

int main() {
    int user_number, fatorial = 1, number;

    printf("Qual número você quer calcular o fatorial? ");
    scanf("%d", &user_number);

    for (int i = 1; i < user_number; i++) {
        fatorial = fatorial * i;
    }

    printf("%d\n", fatorial); 
        
    return 0;
}