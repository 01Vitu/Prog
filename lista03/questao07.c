#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20

int main() {

    int i;
    int num[20];
    int contador=0;
    float media;

    srand(time(NULL));

    for(i = 0; i < TAM; i++)
        num[i] = rand()%20;

    for(i = 0; i < TAM; i++)
        printf("%d ", num[i]);
    printf("\n\n");

    for ( i = 0; i < TAM; i++)
    {
       contador+=num[i];
    }
    media=contador/20;

    printf("A media dos valores e: %.2f", media);
    
    return 0;
}