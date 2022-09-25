#include <stdio.h>

void op (int n1 , int n2){
printf("A soma e: %d\n", n1+n2);
printf("A subtracao e: %d\n", n1-n2);
printf("A multiplicacao e: %d\n", n1*n2);
printf("A divisao e: %d\n", n1/n2);
printf("o resto e: %d\n", n1%n2);
}

int main(){
int n1,n2;
printf("Qual o primeiro numero: ");
scanf("%d", &n1);

printf("Qual o segundo numero: ");
scanf("%d", &n2);

op(n1,n2);




}