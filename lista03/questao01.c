#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 15
#define MX 10

int main(void) {
  float x[TAMANHO], menor, maior;
  srand(time(NULL));

  for (int i = 0; i < TAMANHO; i++) {
    x[i] = rand() % MX;
  }
  menor = x[0];
  maior = x[0];

  for (int i = 1; i < TAMANHO; i++) {
    menor = (menor > x[i]) ? x[i] : menor;
    maior = (maior < x[i]) ? x[i] : maior;
  }

  for (int i = 0; i < TAMANHO; i++) {
    printf("%.2f", x[i]);
  }
  printf("Menor: %.2f\n Maior %.2f\n", menor, maior);

  return 0;
}