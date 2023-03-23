#include<stdio.h>
#include<stdlib.h>
void encontrar(int *endinicial, int *endfinal, int valorencontrado)
{
    int i;
    
    for(endinicial; endinicial<=endfinal; endinicial++)
    {
        if(*endinicial==valorencontrado)
        {
            printf("A primeira ocorrencia do valor %d e no endereco %d \n", valorencontrado, endinicial);
            break;
        }
        
        if(*endinicial!=valorencontrado && endinicial==endfinal)
        {
            printf("O valor pedido não existe no vetor \n");
        }
    }
    
    for(endinicial; endinicial<=endfinal; endinicial++)
    {
        if(*endinicial==2)
        {
            printf("ocorrencias do valor %d no vetor: ", valorencontrado);
            printf("%d \n", endinicial);
        }
    }
    
    
}


int main()
{
    int vetor[10]={1, 2, 3, 2, 5, 6, 7, 2, 9, 10};
    int valor=2;
    
    
    encontrar(&vetor[0], &vetor[10], valor);
    
}