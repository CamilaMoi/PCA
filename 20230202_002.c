#include <stdio.h>
#include <string.h>
#include <ctype.h>

char nomes[20][120];

void pessoas(){
	int i;
	printf("relacao de pessoas:\n");
	for(i=0 ; i<=strlen(nomes) ; i+=1){
		printf("%s;\n", nomes[i]);
	}
}

void eliminar(int len){
	char ache[120];
	int i, a, T = 1, j=0;
	printf("qual pessoa quer tirar da lista?\n");
	scanf(" %[^\n]", ache);
	for(i = 0; i <= len ; i+=1){
		if (strcmp(ache , nomes[i]) == 0){
			i+=1;
		}
		strncpy(nomes[j],nomes[i],120);
		j+=1;
	}
	printf("A nova lista:\n");
	for(i = 0; i <= len-1; i+=1){
		printf("%s;\n", nomes[i]);
			
	}
}


int main(){         
	int i;
	for(i = 0; i < 5 ; i+=1){
			printf("Defina a %d pressoa: ", i+1);
			scanf(" %[^\n]", nomes[i]);			
	}
	pessoas();       
	eliminar(strlen(nomes));
	
}
