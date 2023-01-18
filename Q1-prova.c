#include<stdio.h>
int main()
{
    int nota, count=0, soma=0, maior, menor;
    float media=0;
    
    while(nota>=0)
    {
        printf("digite a nota: ");
        scanf("%d", &nota);
        if(nota>=0)
        {
            count++;
            soma+=nota;
        
        if(count==1)
        {
            maior=nota;
            menor=nota;
        }
        else if(nota>maior)
        {
            maior=nota;
        }
        else if(nota<menor)
        {
            menor=nota;
        }
        }
        
    }
    media=soma/count;
    printf("A media e %.1f, o maior e %d e o menor e %d", media, maior, menor);
    return 0;
}
