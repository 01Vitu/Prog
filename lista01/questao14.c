#include <stdio.h>

int main(){
float c, f;

printf("Informe a temperatura em Celsius: ");
scanf("%f", &c);

f = (9*c+160)/5;
printf("A temperatura em Farenheit e: %.1f", f);



}