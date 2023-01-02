#include<stdio.h>
int main()
{
    int num;
    int divresto;
    int cont=0;
    int contwhile=1;


    printf("numero: ");
    scanf("%d", &num);

    do
    {
        divresto=num%contwhile;
        if (divresto>0)
        {
            cont+=1;
        }
        else
        {
            cont=0;
        }

        contwhile+=1;
    } while(contwhile<=10);
    if (cont>2)
    {
        printf("O numero e primo");
    }
    else
    {
        printf("O numero nao e primo");
    }

    return 0;
}
