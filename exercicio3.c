#include <stdio.h>

int main()
{
    float conta, garcom;
    printf("Valor total da conta: \n");
    scanf("%f", &conta);

    garcom = conta*0.1;

    printf("Porcentagem do garçom: %.2f", garcom);

    return 0;
}
