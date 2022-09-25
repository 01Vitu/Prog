#include <stdio.h>

int main(void) {
  int x;
  
  printf("Entre com um numero: ");
  scanf("%d", &x);

  (x%2 == 0) ? printf(" %d E par", x) :  printf(" %d E impar", x);
  
  
}