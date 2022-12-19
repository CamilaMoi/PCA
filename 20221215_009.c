#include <stdio.h>

int main()
{
    int n1;
    int n2;
    float n3;
    float eq1, eq2, eq3;
    
 
    
    printf("número 1 (inteiro):");
    scanf("%d",&n1);
    
    printf("número 2 (inteiro):");
    scanf("%d",&n2);
    
    printf("número 3 (real):");
    scanf("%f",&n3);
    
    eq1 = n1*n2;
    eq2 = (3*n1) + n3;
    eq3 = n3*n3*n3;
    
    
     printf("\n o produto do dobro do primeiro com metade do segundo é = %.1f", eq1);
     printf("\n a soma do triplo do primeiro com o terceiro = %.1f", eq2);
     printf("\n o terceiro elevado ao cubo = %.1f", eq3);
    
    return 0;
}