
#include<stdio.h>

int main (void)
{
float pedro;
float joao;
int contador;

pedro = 110;
joao = 150;
contador = 0;

do
{
joao = joao + 2;
pedro = pedro +3;
contador = contador + 1;
}while (joao > pedro);


printf("%d anos \n",contador);
}