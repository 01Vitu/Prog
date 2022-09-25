#include <stdio.h>
void op(float n1) {
  printf("Triplo: %f\n", n1 * 3);
  printf("Quadrado: %f\n", n1*n1);
  printf ("Meio: %.1f\n", n1/2);
}

int main() {
  float n1;
  printf("Entre com o numero: ");
  scanf("%fc", &n1);
  op(n1);
}