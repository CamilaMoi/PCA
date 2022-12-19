#include <stdio.h>
int main()
{
    float altura, pesoideal;
    printf("altura em metros:");
    scanf("%f",&altura);

    pesoideal=(72.7*altura)-58;
    printf("o peso ideal eh %.1f", pesoideal);

    return 0;
}