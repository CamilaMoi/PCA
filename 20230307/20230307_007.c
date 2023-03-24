#include<stdio.h>
#include<stdlib.h>
void min_max(int v[], int n, int *min, int *max) {
    *min = *max = *v;
    
    for (int i = 1; i < n; i++) {
        if (*(v+i) < *min) {
            *min = *(v+i);
        }
        if (*(v+i) > *max) {
            *max = *(v+i);
        }
    }
}

void min_max(int v[], int n, int *min, int *max);

int main() {
    int v[] = {10, 5, 20, 15, 30};
    int n = sizeof(v) / sizeof(int);
    int min, max;
    
    min_max(v, n, &min, &max);
    
    printf("minimo: %d\n", min);
    printf("maximo: %d\n", max);
    
    return 0;
}
