#include <stdio.h>
 
int main()
{
    float lado, area;
 
    printf("LARGURA     = "); 
    scanf("%f", &lado);
 
    area = 2*lado*lado;
 
    printf("AREA = %.2f m2 \n", area);

 
    return 0;
}