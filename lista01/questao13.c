#include <stdio.h>

int main(){
    int x, y, aux;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o valor do segundo numero: ");
    scanf("%d", &y);

    aux=x;
    x=y;
    y=aux;

    printf("O valor de X e: %d", x);
    printf("O valor de Y e: %d", y);
}