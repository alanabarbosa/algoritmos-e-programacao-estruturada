#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char palavra1[N], palavra2[N];
    int result;

    printf("Digite uma palavra: \n");
    fgets(palavra1, N, stdin);

    printf("Digite outra palavra: \n");
    fgets(palavra2, N, stdin);

    result = strcmp(palavra1, palavra2);

    if (result < 0) {
        printf("'%s' é menor que '%s'", palavra1, palavra2);
    } else if (result > 0) {
        printf("'%s' é maior que '%s'", palavra1, palavra2);
    } else {
        printf("'%s' é igual que '%s'", palavra1, palavra2);
    }
    
    return 0;
}
 