#include <stdio.h>

int main() {
    char nome[35];
    char sobrenome[35];
    int idade;
    char profissao[35];
    
    printf("Digite seu nome completo: ");
    scanf("%s %s", nome, sobrenome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua profissão: ");
    scanf("%s", profissao);        
    printf("Nome: %s %s.\n", nome, sobrenome);
    printf("Idade: %d.\n", idade);
    printf("Profissão: %s.\n", profissao);
    return 0;
}