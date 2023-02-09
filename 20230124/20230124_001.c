#include<stdio.h>
#define MAX 101

int main() {
    int n, i;
    int numeros[MAX];

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    printf("entre com %d elementos", n);
    for (i = 0; i<n; i++){
        printf("\n%d:", i);
        scanf("%d", &numeros[i]);
    }
    printf("Ordem inversa: ");
    for ( i = n-1; i >= 0; i--){
      printf("%d", numeros[i])  ;
    }
    printf("\n");
    return 0;
}
