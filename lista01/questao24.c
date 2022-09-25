
#include <stdio.h>

int main() {
  int x, n, i;        

  printf("\n\tCalculo de potencias\n");
  printf("Digite a base: ");
  scanf("%d", &x);
  printf("Digite o expoente: ");
  scanf("%d", &n);
  i = 0;
  
  while (i < n) {
    x = x * x;
    i = i + 1;
  }
  
  printf("\nO valor de %d elevado a %d= %d\n", x, n, x);
  return 0;
}


