#include <stdio.h>

int main() {
    int alunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    int i, vetor[alunos], soma, media;

    for (i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / alunos;

    printf("A média das notas dos alunos é: %d\n", media);

    return 0;
}
