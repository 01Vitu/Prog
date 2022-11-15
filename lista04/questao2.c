#include <stdio.h>

void troca(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    troca(&num1, &num2);
    printf("Num1: %d\tNum2: %d\n", num1, num2);

    return 0;
}