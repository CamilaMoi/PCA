#include <stdio.h>

void ordenar(int tamvetor){
	int vetor[tamvetor], i, j, menor, a;
	for(i=0;i<tamvetor;i+=1){
		printf("valor %d no vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i = 0 ; i < (tamvetor-1); i += 1){
        menor = i;
		for (j = i+1 ; j < tamvetor ; j += 1){
		    if(vetor[j]<vetor[menor]){
                menor = j;
		    }
		}
			if (i != menor){
				a = vetor[i];
				vetor[i] = vetor[menor];
				vetor[menor] = a;
			}
		}
		printf("Do menor para o maior: ");
		for (i = 0; i < tamvetor-1; i++){;
            printf("%d-", vetor[i]);
		}
		printf("%d", vetor[tamvetor-1]);
	}
int main(){
	int tamvetor;
	printf("tamanho do vetor\n");
	scanf("%d", &tamvetor);
	ordenar(tamvetor);
}
