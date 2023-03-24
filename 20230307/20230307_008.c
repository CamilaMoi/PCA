#include<stdio.h>
#include<stdlib.h>
void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    float x = 3.14, y = 2.71;
    
    printf("Valores originais: x = %f, y = %f\n", x, y);
    
    troca(&x, &y);
    
    printf("Valores trocados: x = %f, y = %f\n", x, y);
    
    return 0;
}
