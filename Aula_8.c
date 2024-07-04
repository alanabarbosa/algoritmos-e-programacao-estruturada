#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct Pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct Pessoa Pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");

    Pessoa p;
    
    printf("Digite seu nome: ");
    scanf("%s", p.nome);
    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    fflush(stdin);
    
    printf("Digite seu peso: ");
    scanf("%f", &p.peso); 
    fflush(stdin);
    
   // strcpy(p.nome, "Alana");
    printf("\n Pessoa 1 \n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Peso: %.2f\n", p.peso);

    

    Pessoa p2;
    
    printf("\nDigite seu nome: ");
    scanf("%s", p2.nome);
    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &p2.idade);
    fflush(stdin);

    printf("Digite seu peso: ");
    scanf("%f", &p2.peso); 
    fflush(stdin);

   // strcpy(p.nome, "Alana");
    printf("\n Pessoa 2 \n");
    printf("Nome: %s\n", p2.nome);
    printf("Idade: %d\n", p2.idade);
    printf("Peso: %.2f\n", p2.peso);
}
