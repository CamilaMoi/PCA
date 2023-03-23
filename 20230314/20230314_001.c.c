#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void mediadesvio(float *notasF, int qtdalunosF, float *mediaF, float *desvioF)
{
    float soma=0, somadesv=0;
    int j;
    
    for(j=0; j<qtdalunosF; j++)
    {
        soma+=notasF[j];
    }
    *mediaF=soma/qtdalunosF;
    printf("%.2f \n", *mediaF);
    
    for(j=0; j<qtdalunosF; j++)
    {
        somadesv+=pow((notasF[j]-(*mediaF)), 2);
    }
    *desvioF=sqrt(somadesv/qtdalunosF);
    printf("\n %.2f", *desvioF);
}

int main()
{
    int qtdalunos, i;
    float *notas, media, desvio;
    
    printf("qual a quantidade de alunos?");
    scanf("%d", &qtdalunos);
    
    notas = (float*) malloc(qtdalunos * sizeof(float));
    
    for(i=0; i<qtdalunos; i++)
    {
        printf("nota %d", i+1);
        scanf("%f", &notas[i]);
    }
    
    mediadesvio(notas, qtdalunos, &media, &desvio);
    
}