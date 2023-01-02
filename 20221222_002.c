#include <stdio.h>
int main()
{
    float num;
    float maior;
    float menor;
    int cont;

    for(cont=1; cont<15; cont++){
        printf("numero:");
        scanf("%f", &num);

        if (cont==1)
        {
            maior=num;
            menor=num;
        }
        else if (num<menor)
        {
            menor=num;
        }
        else if (num>maior)
        {
            maior=num;
        }

    }
    printf("%.1f /n", menor);
    printf("o maior e %.1f", maior);
    return 0;
}
