#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 100

int main(){
    int i, j, copia, vetor[TAM];

    srand(time(NULL));

    for (i = 0; i < TAM; i++){
    
        vetor[i] = rand() %100;
    }

    printf("Antes da ordenacao: \n");
    for (i = 0; i < TAM; i++){
        printf("%3d", vetor[i]);
    }
    
    for (j = 1; j < TAM; j++){
         for ( i = 0; i < TAM-1; i++){
            if (vetor[i]>vetor[i+1]){
                copia=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=copia;
            }  
        }
    }
    printf("\nApos da ordenacao: \n");
    for (i = 0; i < TAM; i++){
    
        printf("%3d", vetor[i]);
    }

return 0;

}