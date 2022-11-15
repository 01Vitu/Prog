#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 11

void sorteiaVetorX(int*, int, int);
void sorteiaVetorY(int*, int*, int, int);
void novoValor(int*, int);
void contaOcorrencias(int*, int*, int*, int, int);
void imprimeVetor(int*, int);
void imprimeMatriz(int*, int);

int main(void){
    int x[TAM], y[TAM], *m, n;
    srand(time(NULL));

    printf("Limite dos valores sorteados: ");
    scanf("%d", &n);

    m = calloc(n*n, sizeof(int));
    sorteiaVetorX(x, n, TAM);
    sorteiaVetorY(x, y, n, TAM);
    contaOcorrencias(x, y, m, n, TAM);

    printf("\nVetor X\n");
    imprimeVetor(x, TAM);

    printf("\nVetor Y\n");
    imprimeVetor(y, TAM);

    printf("\nContador de ocorrências\n");
    imprimeMatriz(m, n);

    free(m);
    
    return 0;
}

void sorteiaVetorX(int *pv, int max, int tam){
    for(int i = 0; i < tam; i++){
        *(pv + i) = rand() % max;
    }
}

void sorteiaVetorY(int *pvx, int *pvy, int n, int tam){
    int r;
    for(int i = 0; i < tam; i++){
        r = rand() % MAX;
        novoValor(&r, *(pvx + i));
        *(pvy + i) = (r >= 0 && r < n)? r : rand() % n;
    }
}

void novoValor(int *pr, int xi){
    if(*pr <= 3){
        *pr = xi;
    }else if(*pr <= 5){
        *pr = xi - 1;
    }else if(*pr <= 7){
        *pr = xi + 1;
    }else if(*pr <= 9){
        *pr = xi - 2;
    }else if(*pr <= 10){
        *pr = xi + 2;
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

void imprimeVetor(int *vet, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(vet + i));
    }
    printf("]\n");
}

void imprimeMatriz(int *m, int n){
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