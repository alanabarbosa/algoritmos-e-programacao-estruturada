#include <stdio.h>

int lucro(int preco_fabrica, int porcentagem_dist) {
    return (preco_fabrica * porcentagem_dist) / 100;
}

int impostos(int preco_fabrica, int percentual_impostos) {
    return (preco_fabrica * percentual_impostos) / 100;
}

int precoFinal(int preco_fabrica, int v_dist, int v_imp) {
    return preco_fabrica + v_dist + v_imp;
}

int insert(int *preco_fabrica, int *porcentagem_dist, int *percentual_impostos) {
    printf("Insira o preço de fabrica: ");
    scanf("%d", preco_fabrica);
    printf("Insira o lucro do distribuidor: ");
    scanf("%d", porcentagem_dist);
    printf("Insira o percentual de impostos: ");
    scanf("%d", percentual_impostos);        
}

int printScreen(int percentual_lucro, int imp, int vlr_final) {
    printf("Lucro distribuidor: %d\n", percentual_lucro);
    printf("Valor do imposto: %d\n", imp);
    printf("Valor final: %d\n", vlr_final);
}

int main() {
    int preco_fabrica, porcentagem_dist, percentual_lucro, percentual_impostos, imp, vlr_final;

    insert(&preco_fabrica, &porcentagem_dist, &percentual_impostos);

    percentual_lucro = lucro(preco_fabrica, porcentagem_dist);
    imp = impostos(preco_fabrica, percentual_impostos);
    vlr_final = precoFinal(preco_fabrica, percentual_lucro, imp);

    printScreen(percentual_lucro, imp, vlr_final);

    return 0;
}
