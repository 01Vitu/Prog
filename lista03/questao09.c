#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

int main()
{
int mat [LIN] [COL], i, j;

for (i = 0; i < LIN; i++){

    for (j = 0; j < COL; j++){

        printf("Digite o valor da posicao %d, %d: \n", i, j);
        scanf ("%d", &mat [i] [j]);
    }
}
printf("\n\n\n");
printf("Diagonal Principal: \n");

for (i = 0; i < LIN; i++)
{
   printf("%d  ", mat [i] [i]);
}
          printf("\n\n\n");
        
 system("pause");
 }