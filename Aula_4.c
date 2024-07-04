#include <stdio.h>

int main() {
    int age = 27;
    char name[50] = "Alana Barbosa";
    float height = 1.60;
    double weight = 59.7;

    printf("Variável do tipo Inteiro: %d.\n", age);
    printf("Variável do tipo String: %s.\n", name);
    printf("Variável do tipo Ponto fluante: %.2f.\n", height);
    printf("Variável do tipo Double: %.2f.\n", weight);
    return 0;
}