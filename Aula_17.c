#include <stdio.h>

int calcSalario(int num_hora, int sal_min) {
    int hr_trabalhadas, sal_bruto, imposto, sal_rec;
    hr_trabalhadas = sal_min / 2;
    sal_bruto = num_hora * hr_trabalhadas;
    imposto = sal_bruto * 3 / 100;
    sal_rec = sal_bruto - imposto;
    return sal_rec;
}

int inputs(int *hr_trab, int *salario) {
    printf("Insira as horas trabalhadas: ");
    scanf("%d", hr_trab);
    printf("Insira o valor do salario mínimo: ");
    scanf("%d", salario);
}

int screen(int salario_receber) {
    printf("O valor a receber é: %d\n", salario_receber);
}


int main() {    
    int hr_trab, salario, salario_receber;

    inputs(&hr_trab, &salario);
    salario_receber = calcSalario(hr_trab, salario);
    screen(salario_receber);

    return 0;
}
