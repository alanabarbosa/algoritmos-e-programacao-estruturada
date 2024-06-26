#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
#define NLIN 10
#define NCOL 10

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, j, Matriz[NLIN][NCOL];

    for (i = 0; i < NLIN; i++) {
        for (j = 0; j < NCOL; j++) {
            printf("%d\t", Matriz[i][j] = i*j);
        }
        printf("\n");
    }
    
    return 0;
}
 