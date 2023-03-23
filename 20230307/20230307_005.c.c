#include<stdio.h>
int ordenar(int v1, int v2, int v3, int *maior, int *menor, int *meio)
{
    *maior=v1;
    *menor=v1;
    *meio=v1;
    
    int vetor[3]={v1, v2, v3};
    int i;
    
    if(v1==v2==v3)
    {
        return 1;
    }
    else
    {
        for(i=0; i<3; i++)
        {
            if(vetor[i]>*maior)
            {
                *maior=vetor[i];
            }
            
            
            if(vetor[i]<*menor)
            {
                *menor=vetor[i];
            }
            
            if(*menor<vetor[i] && vetor[i]<*maior)
            {
                *meio=vetor[i];
            }
            
        }
        return 0;
    }
}

int main()
{
    int valor1=2, valor2=8, valor3=1;
    int maiorM, menorM, meioM;
    
    ordenar(valor1, valor2, valor3, &maiorM, &menorM, &meioM);
    printf("maior %d menor %d meio %d", maiorM, menorM, meioM);
}