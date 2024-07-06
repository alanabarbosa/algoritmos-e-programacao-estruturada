#include <stdio.h>

int soma(float med) {
    if(med >= 8.0 && med <= 10) {
        printf("Conceito A\n");
    } else if (med >= 7.0 && med < 8.0) {
        printf("Conceito B\n");
    } else if (med >= 6.0 && med < 7.0) {
        printf("Conceito C\n");
    } else if (med >= 5.0 && med < 6.0) {
        printf("Conceito D\n");
    } else if (med >= 0.0 && med < 5.0) {
        printf("Conceito E\n");
    }
}

int insert(float *trab, float *aval, float *exam) {
    printf("Insira a nota do trabalho: ");
    scanf("%f", trab);
    printf("Insira a nota da avaliação: ");
    scanf("%f", aval);
    printf("Insira a nota do exame: ");
    scanf("%f", exam);
}

int main() {
    float trab, aval, exam, med;

    insert(&trab, &aval, &exam);

    med = (trab*2 + aval*3 + exam*5)/10;
    printf("Média: %.2f.\n", med);

    soma(med);    

    return 0;
}
