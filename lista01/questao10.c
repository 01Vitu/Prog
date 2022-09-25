#include <stdio.h>

int main(){
float largura, altura, comprimento, volume;
printf("Informe a largura: ");
scanf("%f", &largura);

printf("Informe a altura: ");
scanf("%f", &altura);

printf("Informe o comprimento: ");
scanf("%f", &comprimento);

volume=largura*altura*comprimento;
printf("O volume e: %.1f ", volume);

}