#include<stdio.h>
int main()
{
    int num;
    int somapares=0;
    int somaimpares=0;
    float resto;

    do
    {
        printf("numero: ");
        scanf("%d", &num);
        if (num%2==0 && num<=1000)
        {
            num+=somapares;

        }
        else if (num%2!=0 && num<=1000)
        {
            num+=somaimpares;
        }
    } while (num<=1000)

    printf("a soma dos pares e %d e a soma dos impares e %d", somapares, somaimpares);
    return 0;
}
