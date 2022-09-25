#include <stdio.h>

int main (){
    int i;

    printf("Entre com o dia da semana: ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Hoje e domingo");
        break;
    
    case 2:
    printf("Hoje e segunda");
        break;

    case 3:
    printf("Hoje e terca");
        break;

    case 4:
    printf("Hoje e quarta");
        break;

    case 5:
    printf("Hoje e quinta");
        break;

    case 6:
    printf("Hoje e sexta");
        break;

    case 7:
    printf("Hoje e sabado");
        break;

    default:
        printf("Valor invalido");
        break;
    }






}