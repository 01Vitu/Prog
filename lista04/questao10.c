#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void sorteiaValores(int*, int, int);
void contaValores(int*, int*, int, int);
void imprimindoVetor(int*, int);

int main(void){
    int x[TAM], *f, n;
    srand(time(NULL));

    printf("Informe o limite dos valores sorteados: ");
    scanf("%d", &n);

    f = malloc(n * sizeof(int));
    sorteiaValores(x, TAM, n);
    contaValores(x, f, TAM, n);

    printf("\nVetor sorteado\n");
    imprimindoVetor(x, TAM);
    
    printf("\nFrequência dos números\n");
    imprimindoVetor(f, n);

    free(f);

    return 0;
}

void sorteiaValores(int *vet, int tam, int n){
    for(int i = 0; i < tam; i++){
        *(vet + i) = rand() % n;
    }
}

void contaValores(int *vet, int *f, int tam, int n){
    int cont, termoAtual = 0;
    for(int i = 0; i < n; i++){
        cont = 0;
        for(int j = 0; j < tam; j++){
            if(vet[j] == termoAtual){
                cont++;
            }
        }
        f[i] = cont;
        termoAtual++;
    }
}

void imprimindoVetor(int *vet, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(vet + i));
    }
    printf("]\n");
}