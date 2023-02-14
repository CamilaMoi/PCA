#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, n, i, faces[6] = {0};

    printf("Quantos lançamentos deseja realizar? ");
    scanf("%d", &n);

    srand(time(NULL));

    for (i = 0; i < n; i++) {
        num = rand() % 6 + 1;
        faces[num - 1]++;
    }

    printf("\nResultados:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d ocorrência(s)\n", i + 1, faces[i]);
    }

    return 0;
}
