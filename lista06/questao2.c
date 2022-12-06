#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define carac 20
struct estoque {
char nomePeca[carac];
int  nmrPeca;
float preco;
int nmrPedido;
};

int main(void) {
  struct estoque e;
  puts("Digite o nome da peça: ");
  fgets(e.nomePeca, carac, stdin);
  puts("Digite o número de indentificação da peça: ");
  scanf("%d", &e.nmrPeca);
  puts("Digite o valor do preço da peça: ");
  scanf("%f", &e.preco);
  puts("Digite o número de identificação do pedido: ");
  scanf("%d", &e.nmrPedido);
  return 0;
}