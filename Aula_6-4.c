#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[N];
    char sobrenome[N];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Concatenação de nome e sobrenome: %s\n", nome);

    return 0;
}
 