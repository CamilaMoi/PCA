
#include<stdio.h>
int num;
int funscan()
{
    int num;
    do{
        printf("valor inteiro positivo: ");
        scanf ("%d",&num);
    }while(num < 0);
    return num;
}

int hiperfatorial(int num)
{
    int countseq=1, countiter=0, countmult=1, counttotal=1;
    for(countseq=1; countseq<=num; countseq++)
    {
        for(countiter=1; countiter<=countseq; countiter++)
        {
            countmult*=countseq;
        }
    }
    return countmult;
}

int main()
{
    int varfunscan, varhiperfatorial;
    varfunscan=funscan(num);
    varhiperfatorial=hiperfatorial(varfunscan);
    printf("%d \n", varfunscan);
    printf("%d", varhiperfatorial);
}
