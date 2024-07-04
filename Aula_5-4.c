#include <stdio.h>

int main() {
    int number;

    printf("Qual tabuada você quer ver? ");
    scanf("%d", &number);

    for (int i = 0; i < 10; i++) {
        printf("%d * %d = %d\n", i, number, i * number);
    }
    
    return 0;
}