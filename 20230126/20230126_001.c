#include <stdio.h>

int main() {

    int soma[3][5];

    int matrizA[3][5] = {{1, 2, 3, 3, 5},
                        {6, 9, 8, 8, 10},
                        {11, 12, 13, 14, 15}};
    int matrizB[3][5] = {{16, 17, 18, 19, 25},
                        {1, 22, 3, 24, 25},
                        {26, 27, 18, 29, 30}};

    for (int linha= 0; linha< 3; linha++) {
        for (int coluna= 0; coluna< 5; coluna++) {
            soma[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }

    printf("a soma das matrizes e:\n");
    for (int linha= 0; linha< 3; linha++) {
        for (int coluna= 0; coluna< 5; coluna++) {
            printf("%d ", soma[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
