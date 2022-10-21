#include <stdio.h>

int main(){
    int x;
    int y;
    int *px=&x;
    int *py=&y;

    printf("Entre com o primeiro valor: ");
    scanf("%d", &x);

    printf("Entre com o segundo valor: ");
    scanf("%d", &y);

    int soma=*px+*py;
    printf("A soma e: %d", soma);

}