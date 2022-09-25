#include <stdio.h>

int main() {
  float x;
  float taxa;

  printf("Qual o valor da conta: ");
  scanf("%f", &x);

  taxa = x * 0.1;
  printf("O valor da taxa a pagar e de %.1f", taxa);

  return 0;
}