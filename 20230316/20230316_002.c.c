#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **mat, i, j;
    
    mat = (int**) malloc(2*sizeof(int*));
    
    for(i=0; i<3; i++)
    {
        *(mat+i)=(int*) malloc(sizeof(int)); //vai gerar espaço 3x em cada linha formando os espaços das colunas
    }
    
    //for pra preencher a matriz
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("valor na posição %d%d \n", i+1, j+1);
            scanf("%d \n ", (*(mat+i)+j));
        }
        printf("\n");
    }
    
    
    printf("Printando a matriz por index: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Printando a matriz por aritmetica: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", *(*(mat+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}
