#include <stdio.h>

int main() {
    int matriz[3][3], int num, linha, coluna;

    printf("matriz 3 x 3: \n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("num: \n");
    scanf("%d", &num);

    printf("Matriz original: \n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz multiplicada pelo num: ");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matriz[linha][coluna] = matriz[linha][coluna] * num;
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
