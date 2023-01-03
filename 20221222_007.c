#include<stdio.h>
int main()
{
    float massa, massa2, seg, min, hora;
    int count;
    
    printf("massa ");
    scanf("%f", &massa);
    
    do
    {
        massa2=massa/2;
        massa=massa2;
        count++;
    } while(massa2>0.5);
    
    seg=50*count;
    min=seg/60;
    hora=seg/3600;
    printf("demoraria %.1f segundos, %.1f minutos e %.1f horas", seg, min, hora);
}
