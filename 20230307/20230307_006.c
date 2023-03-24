#include<stdio.h>
#include<stdlib.h>

int soma(int *arr1, int *arr2, int *result, int tam) {
    if (tam != sizeof(arr1) / sizeof(int) || tam != sizeof(arr2) / sizeof(int)) {
        return 0;
    }
    
    for (int i = 0; i < tam; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }
    
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    int result[5];
    int tam = sizeof(arr1) / sizeof(int);
    
    if (soma(&arr1, &arr2, result, tam)) {
        printf("Soma dos arrays:\n");
        for (int i = 0; i < tam; i++) {
            printf("%d ", *(result + i));
        }
        printf("\n");
    } else {
        printf("Os arrays sao diferentes\n");
    }
    
    return 0;
}

}
