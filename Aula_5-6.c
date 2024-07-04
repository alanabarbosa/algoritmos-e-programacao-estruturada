#include <stdio.h>

int main() {
    int a = 0, b = 1, next, user_number;

    printf("Quantos números da sequência você quer gerar? ");
    scanf("%d", &user_number);
    
    for (int i = 0; i < user_number; i++) {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }
        
    return 0;
}