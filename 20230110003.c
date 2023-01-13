#include<stdio.h>
int digitosy(int y)
{
    int count=1;
    
    while(y>0)
    {
        y=y/10;
        count*=10;
    }
    return count;
}

int digitosx(int count, int x)
{
    int restox;
    restox=x%count;
    return restox;
}
int main()
{
    int x, y, vardigitosx, vardigitosy;
    
    printf("numero x: ");
    scanf("%d", &x);
    printf("numero y: ");
    scanf("%d", &y);
    
    vardigitosy=digitosy(y);
    vardigitosx=digitosx(vardigitosy, x);
    
    if(y==vardigitosx)
    {
        printf("o numero %d corresponde a parte do numero %d", y, x);
    }
    else
    {
        printf("O numero %d nao correspojde ao %d", y, x);
    }
}
