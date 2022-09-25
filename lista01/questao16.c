#include <stdio.h>
 
int main()
{
    float HT,  VH,  PD,  TD,  SB, SL;  
 
    printf("Horas trabalhadas: "); scanf("%f", &HT);
    printf("Valor da hora: "); scanf("%f", &VH);
    printf("Percentual de desconto: "); scanf("%f", &PD);
 
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
 
    system("cls");
 
    printf("Salario bruto: %.1f\n", SB);
    printf("Desconto: %.1f\n", TD);
    printf("Salario Liquido: %.1f\n", SL);
    
    system("pause");
 
    return(0);
}