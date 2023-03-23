#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int inteiro=8, i;
    float real=4.5;
    char palavra='a';
    
    printf("Antes:");
    
    printf("%d \n", inteiro);
    printf("%.2f \n", real);
    printf("%c \n", palavra);
    
    int *inteiro2=&inteiro;
    float *real2=&real;
    char *palavra2=&palavra;
    
    *inteiro2=0;
    *real2=9.8;
    *palavra2='B';
    
    printf("Depois:");
    
    printf("%d \n", *inteiro2);
    printf("%.2f \n", *real2);
    printf("%c \n", *palavra2);
    
    return 0;
}