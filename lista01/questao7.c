#include <stdio.h>

int main(){
    float horas, minutos, segundos, seguntostotais;
    
    printf("Escreva a quantidade de horas: ");
    scanf("%f", &horas);
    printf("Escreva a quantidade de minutos: ");
    scanf("%f", &minutos);
    printf("Escreva a quantidade de segundos: ");
    scanf("%f", &segundos);

    seguntostotais = (horas*3600)+(minutos*60)+segundos;
    printf("A quantidade totais de segundos e: %.1f s", seguntostotais);


}