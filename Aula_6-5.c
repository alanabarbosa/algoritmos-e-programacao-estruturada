#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char palavra[N];
    size_t comprimento;
    int i;

    printf("Digite qualquer coisa: ");
    fgets(palavra, N, stdin);

    comprimento = strlen(palavra);

    printf("Tamanho do texto digitado: %zu\n\n", comprimento);

    printf("Impressão de posição a posição do texto digitado: \n");
    for (i = 0; i < comprimento; i++) {
        printf("%c", palavra[i]);
    }

    
    return 0;
}
 