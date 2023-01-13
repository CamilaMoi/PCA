

int numdigitos(int n, int d) {

  int num=0, resto;

 while (n != 0) {
    resto = n % 10;
    n = n/10;
    if (resto == d)
      num++;
  }

  return num;
}


int main() {
  int n, m, d, permut ;
 

  printf("numeros ");
  scanf("%d %d",&n,&m);
  permut= 1;

  for (d = 1; d <= 9; d++)
    if (numdigitos(n,d) != numdigitos(m,d))
      permut = 0;

  if (perm == 1)
    printf("%d e permutacao de %d\n",n,m);
  else
    printf("%d nao e permutacao de %d\n",n,m);

  return 0;
}
