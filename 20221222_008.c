#include <stdio.h>
int main() {
    int a=1, b=1, c, ct=1;
    printf("hipotenusa ");
    scanf("%d", &c);

    for(a=1; a <= c; a+=1){
        for(b=1; b <=a; b+=1 ){
            for(ct=1; ct<=c; ct+=1){
                if ((b*b) + (a*a) == c*c){
                    printf("os catetos da hipotenusa %d sao %d e %d \n", c, a, b);
                }
            }
        }
    }
}
