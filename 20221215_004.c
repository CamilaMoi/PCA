#include<stdio.h>
int main(){
    
    float raio=0, pi=3.14, area=0;
    
    printf(" raio: ");
    scanf("%f", &raio);
    
    area=pi*raio*raio;
    
    printf(" area: %0.2f", &area);
    
    return 0;
    
}