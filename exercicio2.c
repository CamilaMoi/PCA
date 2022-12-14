#include <stdio.h>

int main()
{
    float salario, novosalario;

    printf("Salario: \n");
    scanf("%f", &salario);

    novosalario = salario * (1+0.1);
    printf("O novo salario sera: %.2f\n", novosalario);

    return 0;
}
