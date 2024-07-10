#include <stdio.h>

void calcKW(float val_sal, float qtde_kw, float *val_kw, float *val_pg, float *desconto) {     
    (*val_kw) = val_sal / 1000;
    (*val_pg) = (*val_kw) * qtde_kw;
    (*desconto) = (*val_pg) * 0.85;
}

float inputs(float *val_sal, float *qtde_kw) {
    printf("Insira o salario mínimo: ");
    scanf("%f", val_sal);
    printf("Insira a quantidade de KW gastos: ");
    scanf("%f", qtde_kw);
}

float screen(float val_kw, float val_pg, float desconto) {
    printf("Valor de 1 KW (em R$): %.2f\n", val_kw);
    printf("Valor a ser pago (em R$): %.2f\n", val_pg);
    printf("Valor com desconto de 15 (em R$): %.2f\n", desconto);
}


int main() {    
    float val_sal, qtde_kw, val_kw, val_pg, desconto;

    inputs(&val_sal, &qtde_kw);
    calcKW(val_sal, qtde_kw, &val_kw, &val_pg, &desconto);
    screen(val_kw, val_pg, desconto);

    return 0;
}
