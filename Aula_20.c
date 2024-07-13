#include <stdio.h>
#include <locale.h>
#define x 3
#define y 3



void inputs(int matriz[x][y]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("\nInsira o dado da posição %d, %d: ", i + 1, j + 1);      
            scanf("%d", &matriz[i][j]);
        }
    }
}

void screen(int matriz[x][y]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {      
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }    
}

void search(int number, int matriz[x][y]) {
    printf("\nDigite o número inteiro que deseja procurar dentro da matriz: ");
    scanf("%d", &number);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {      
            if (matriz[i][j] == number) {
                printf("O número %d foi encontrado dentro da matriz: [%d], [%d]\n", number, i, j);
            } else {
                break;
            }
        }
        printf("\n");
    }     
}


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int matriz[x][y], number;

    inputs(matriz);
    screen(matriz);
    search(number, matriz);

    return 0;
}
