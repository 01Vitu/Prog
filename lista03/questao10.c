#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int mat[3][3], i, j, numAleatorios, x;

    srand(time(NULL));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            numAleatorios = (rand() % 100);
            mat[i][j] = numAleatorios;
            printf("%3d", mat[i][j]); 
        }
        printf("\n");
    }
    printf("Insira o valor desejado: ");
    scanf("%d", &x);
    if (x==numAleatorios);
    {
        printf("O numero %d se repete",x);
    }
    
    return 0;
}