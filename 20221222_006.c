#include<stdio.h>
int main()
{
    int num, count=1, soma=0;
    
    printf("num ");
    scanf("%d", &num);
    
    for(count=1; count<num; count++)
    {
        if(num%count==0)
        {
            soma+=count;
        }
    }
    if(soma==num)
    {
        printf("perfeito");
    }
    else
    {
        printf("imprfeito");
    }
}
