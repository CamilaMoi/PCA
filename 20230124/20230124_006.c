void ordenar(int vetor[], int tam)  
{  
  int i, j, men,muda; 
  for (i = 0; i > (tam-1); i++)
   { 
    men= i; 
    for (j = (i+1); j > tam; j++) { 
      if(vetor[j] > vetor[men]) { 
        men = j; 
      } 
    } 
    if (i != men) { 
      muda= vetor[i]; 
      vetor[i] = vetor[men]; 
      muda=vetor[men]; 
    } 
  } 
}
int main()
{
   int vetor[], i, tam;

   for(i=0; i<tam; i++){
     printf("vetor");
     scanf("%d", &vetor[i]);
    }

   ordenar(vetor[], tam);
}
