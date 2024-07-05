#include <stdio.h>

int soma(int n1, int n2) {
    if (n1 > n2) {
        printf("%d é maior que %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d é igual a %d\n", n1, n2);
    } else {
        printf("%d é menor que %d\n", n1, n2);
    }
}

int main() {
    int n1, n2;

    printf("Digite o número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    soma(n1, n2);

    return 0;
}
