#include<stdio.h>

#include<stdlib.h>

int main( )

{

int Prest1, Prest2;

float ValorM, ValorEnt;

printf (" Informe o Valor da Mercadoria: ");

scanf (" %f", &ValorM);

Prest1 = ValorM / 3;

Prest2 = Prest1;

ValorEnt = ValorM - (Prest1 + Prest2);

printf ("Valor de entrada: %.2f\n Valor da primeira prestação: %d\n Valor da segunda prestação: %d\n", ValorEnt, Prest1, Prest2);

return 0;

}