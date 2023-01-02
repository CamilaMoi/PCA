#include <stdio.h>
int main()
{
    float y;
    float x1;
    float x2;
    float delta;

    printf("numero: ");
    scanf("%f", &y);

    x1=y/2;

    do
    {
        x2= x1-(x1*x1-y)/(2*x1);
        delta=x2-x1;

        if (delta<0){
                delta=delta*(-1);
            }
        x1=x2;
        } while (delta>0.1);

    printf("raiz %.2f", x1 );
    return 0;

}
