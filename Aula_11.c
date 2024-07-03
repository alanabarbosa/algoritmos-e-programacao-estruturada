#include <stdio.h>

int main() {
    float salario, percentual, aumento;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = (salario * percentual) / 100;
    
    printf("O novo valor do aumento será de: R$ %.2f\n", aumento);
    printf("O novo salário do funcionário será de: R$ %.2f\n", salario+aumento);

    return 0;
}
