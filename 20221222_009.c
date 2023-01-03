#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, x, y, o, p, exp1, maior=0;
    printf("m");
    scanf("%d", &m);
    printf("n");
    scanf("%d", &n);
    
    for (x = 0; x <= m; x++){
        for (y = 0; y <= n; y++){
            exp1 = x*y - x*x + y;
            if(exp1 >= maior)
            {
            maior = exp1;
            o = x;
            p = y;
            }
        }
    }
    printf("x e y maximos sao %d e % d com resultado %d",o , p, maior);
}
