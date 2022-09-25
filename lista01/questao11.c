#include <stdio.h>

int main(){
float valordolar, valorReal, valorConvert;

printf("Informe a cotacao do dolar: ");
scanf("%f", &valordolar);

printf("Informe o valor desejado para converter: ");
scanf("%f", &valorReal);

valorConvert=valorReal*valordolar;
printf("O valor convertido e %.1f: ", valorConvert);

}