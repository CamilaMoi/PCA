#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, cont=1;
    int arr[8];
    int *vetor=&arr;
    
    for(i=0; i<8; i++)
    {
        printf("valor em %d \n", i);
        scanf("%d", arr+i);
    }
    
    for(i=0; i<8; i++)
    {
        *(vetor+i)*=2;
        printf("%d \n", *vetor+i);
    }
    printf("\n");
    
    for(i=0; i<8; i++)
    {
        if(*(vetor+i)%2==0)
        {
            printf("%d \n", *(vetor+i));
        }
        printf("\n");
    }
    
    
}