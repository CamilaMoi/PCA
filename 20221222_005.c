#include<stdio.h>
int main()
{
    float cd=1, cn=1;
    float soma;

    while(cd<51)
    {
        soma+=(cn/cd);
        cn+=2;
        cd++;
    }
    printf("soma %f", soma);
}
