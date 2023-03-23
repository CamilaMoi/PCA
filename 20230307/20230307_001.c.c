#include<stdio.h>
void print(float *posinicial, float *posfinal, float vetorA[], float vetorB[])
{
    int i;
    
    for(i=*posinicial; i<*posfinal; i++)
    {
        printf("%.1f ", vetorA[i]);
    }
    
    printf("\n");
    
    for(i=*posinicial; i<*posfinal; i++)
    {
        printf("%.1f ", vetorB[i]);
    }
    
}

int main()
{
    float vetor1[5]={1.4, 2.5, 3.6, 4.7, 5.8};
    float vetor2[5]={6.9, 7.3, 8.5, 9.1, 10.4};
    float vetor3[5]={11.6, 12.2, 13.3, 14.9, 15.2};
    
    int inicialmain, finalmain;
    
    printf("Posição inicial:");
    scanf("%f", &inicialmain);
    
    printf("Posição final:");
    scanf("%f", &finalmain);
    
    
    
    print(&inicialmain, &finalmain, vetor1, vetor2);
}