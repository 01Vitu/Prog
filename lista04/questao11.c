
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void sorteiaVetor(int*, int, int);
void contaOcorrencias(int*, int*, int*, int, int);
void imprimindoVetor(int*, int);
void imprimindoMatriz(int*, int);

int main(void){
    int x[TAM], y[TAM], *m, n;
    srand(time(NULL));

    printf("Digite o limite dos valores sorteados: ");
    scanf("%d", &n);

    m = calloc(n*n, sizeof(int));
    sorteiaVetor(x, n, TAM);
    sorteiaVetor(y, n, TAM);
    contaOcorrencias(x, y, m, n, TAM);

    printf("\nVetor X\n");
    imprimindoVetor(x, TAM);
    
    printf("\nVetor Y\n");
    imprimindoVetor(y, TAM);

    printf("\nContador de ocorrências\n");
    imprimindoMatriz(m, n);

    free(m);
    
    return 0;
}

void sorteiaVetor(int *pv, int max, int tam){
    for(int i = 0; i < tam; i++){
        *(pv + i) = rand() % max;
    }
}

void contaOcorrencias(int *px, int *py, int *m, int n, int tam){
    int x, y;
    for(int i = 0; i < tam; i++){
        x = *(px + i);
        y = *(py + i);
        *(m + n * x + y) += 1;
    }
}

void imprimindoVetor(int *pv, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(pv + i));
    }
    printf("]\n");
}

void imprimindoMatriz(int *m, int n){
    printf("|");
    for(int i = 0; i < n*n; i++){
        printf(" %2d ", *(m + i));
        if(!((i + 1) % n)){
            if(i == n*n-1){
                printf("|\n");
            }else{
                printf("|\n|");
            }
        }
    }
}