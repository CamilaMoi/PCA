#include<stdio.h>
#include<stdlib.h>

double **alocar(int m, int n) {
    double **matriz = (double **) malloc(sizeof(double *) * m);
    for (int i = 0; i < m; i++) {
        matriz[i] = (double *) malloc(sizeof(double) * n);
    }
    return matriz;
}

void preencher(double **matriz, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o elemento (%d,%d): ", i+1, j+1);
            scanf("%lf", *(matriz+i)+j);
        }
    }
}

void imprimir(double **matriz, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", *(*(matriz+i)+j));
        }
        printf("\n");
    }
}

void somar(double **matriz1, double **matriz2, double **matriz_soma, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(*(matriz_soma+i)+j) = *(*(matriz1+i)+j) + *(*(matriz2+i)+j);
        }
    }
}

void desalocar(double **matriz, int m) {
    for (int i = 0; i < m; i++) {
        free(*(matriz+i));
    }
    free(matriz);
}


int main() {
    int m, n;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);
    
    double **matriz1 = alocar(m, n);
    double **matriz2 = alocar(m, n);
    double **matriz_soma = alocar(m, n);
    
    printf("primeira matriz:\n");
    preencher(matriz1, m, n);
    printf("segunda matriz:\n");
    preencher(matriz2, m, n);
    
    somar(matriz1, matriz2, matriz_soma, m, n);
    
    printf("Matriz resultante:\n");
    imprimir(matriz_soma, m, n);
    
    desalocar(matriz1, m);
    desalocar(matriz2, m);
    desalocar(matriz_soma, m);
    
    return 0;
}
