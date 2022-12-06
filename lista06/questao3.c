#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100
#define INI 0

void preencherVetor(int *, int , int , int );
void imprimirVetor(int *, int );

struct vetmedia {
int *matriz;
int qtd;
int media;

};

int main(void) {
  int soma = 0;
  struct vetmedia v;
  puts("Insira a quantidade de elementros na matriz: ");
  scanf("%d", &v.qtd);

  v.matriz = (int *)malloc(v.qtd * sizeof(int));
  preencherVetor(v.matriz, v.qtd, INI, MX);
  imprimirVetor(v.matriz, v.qtd);

  for(int i = 0; i < v.qtd; i++){
    soma += *(v.matriz + i);
  }
  v.media = soma/v.qtd;
  
  printf("%d", v.media);
  return 0;
}

void preencherVetor(int *pd, int qtd, int inicial, int qtdFaixa){
    srand(time(NULL));
    for (int k=0; k<qtd; k++){
        *(pd+k) = inicial + rand() % qtdFaixa;
    }
}

void imprimirVetor(int *pd, int qtd){
    for (int k=0; k<qtd; k++){
        printf("[%p] %d\n",pd+k,*(pd+k));
    }
}