#include<stdio.h>
#include<stdlib.h>
int *alocarvetor(int qtdelementos)
{
    int i, *vetorF1;
    
    vetorF1=(int*) malloc(qtdelementos*(sizeof(int)));
    
    for(i=0; i<qtdelementos; i++)
    {
        printf("elemento %d", i+1);
        scanf("%d", &vetorF1[i]);
    }
    
    return vetorF1;
}

void maiormenor(int *vetorF2, int qtdelementos, int *maiorF2, int *menorF2)
{
    int j;
    *maiorF2=vetorF2[0];
    *menorF2=vetorF2[0];
    
    for(j=0; j<qtdelementos; j++)
    {
        if(vetorF2[j]>*maiorF2)
        {
            *maiorF2=vetorF2[j];
        }
        
        if(vetorF2[j]<*menorF2)
        {
            *menorF2=vetorF2[j];
        }
    }
    
}

int main()
{
    int maior, menor, qtdelementos;
    
    printf("Qual a quantidade de elementos no vetor?");
    scanf("%d", &qtdelementos);
    
    int *vetor=alocarvetor(qtdelementos);
    
    maiormenor(vetor, qtdelementos, &maior, &menor);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}