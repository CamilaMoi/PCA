#include <stdio.h>

void somarMatrizes(int n, int matrizA[][n], int matrizB[][n], int resultado[][n]) {
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            resultado[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }
}

void imprimirMatriz(int n, int matriz[][n]) {
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

int main() {
    int n = 3;
    int matrizA[3][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};
    int matrizB[3][3] = {{10, 11, 12}, 
                        {13, 14, 15}, 
                        {16, 17, 18}};
    int resultado[3][3];

    somarMatrizes(n, matrizA, matrizB, resultado);
    printf("A soma das matrizes é:\n");
    imprimirMatriz(n, resultado);

    return 0;
}
