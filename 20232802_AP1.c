#include<stdio.h>
#include<string.h>
void ponto(int parnota[], char parsexo[] )
{
    
    int l;
    
    for(l=6; l<12; l++)
    {
        if(parsexo[l]=='f')
        {
            parnota[l]=parnota[l]+1;
        }
    }
    
    for(l=0; l<12; l++)
    {
        printf("%d \n", parnota[l]);
    }
}


int main()
{
    char eqp1[6][20]={"bia", "paulo", "palmon", "gabriel", "nina", "fernanda"};
    char eqp2[6][20]={"paula", "ana", "vania", "maria", "uriel", "rodolfo"};
    int nota[12]={9, 8, 7, 5, 3, 10, 7, 9, 9, 8, 10, 5};
    char sexo[12]={'f','m', 'm', 'm', 'f', 'f', 'f', 'f', 'f', 'f', 'm', 'm'};
    char nomeprojeto[13][20];
    
    int i, k=0, j=0, countmulher1=0, countmulher2=0;
    
    for(i=0; i<6; i++)
    {
        if(sexo[i]=='f')
        {
            countmulher1++;
        }
    }
    
    for(i=6; i<12; i++)
    {
        if(sexo[i]=='f')
        {
            countmulher2++;
        }
    }
    
    
    
    if(countmulher1>countmulher2)
    {
        printf("A equipe 1 tem mais mulheres \n");
    }
    else if(countmulher2>countmulher1)
    {
        printf("A equpe 2 tem mais mulheres \n");
    }
    
    

    for(i=0; i<6; i++)
    {
        if(nota[i]>=8 && sexo[i]=='f')
        {
            strcpy(nomeprojeto[j], eqp1[i]);
            j++;
        }
    }
    
    
    
    for(i=6; i<12; i++)
    {
        if(nota[i]>=8 && sexo[i]=='f')
        {
            strcpy(nomeprojeto[j], eqp2[k]);
            j++;
            k++;
        }
    }
        
    
    for(i=0; i<12; i++)
    {
        printf("%s \n", nomeprojeto[i]);
    }
    
    ponto(nota, sexo);
    
}
