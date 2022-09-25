#include <stdio.h>

int main (){
    float valordiastrab,gratificacao,sal,valorbruto,dias,desconto;
  
    printf("Quantos dias foram trabalhados: ");
    scanf("%f", &dias);

    if (dias<=10)
    { 
        valorbruto=dias*50.25;
        desconto=valorbruto*0.1;
        sal=valorbruto-desconto;

        printf("O valor bruto a ser pago e de: %.1f\n", valorbruto);
        printf("O salario a ser pago e de: %.1f", sal);
    }

    else if (10<dias<=20)
    {
        valordiastrab=dias*50.25;
        gratificacao=valordiastrab*0.2;
        valorbruto=valordiastrab+gratificacao;
        desconto=valorbruto*0.1;
        sal=valorbruto-desconto;
        
        printf("O valor bruto com gratificacao a ser pago e de: %.1f\n", valorbruto);
        printf("O salario a ser pago e de: %.1f", sal);
    }
    
     else if (20<dias)
    {
        valordiastrab=dias*50.25;
        gratificacao=valordiastrab*0.3;
        valorbruto=valordiastrab+gratificacao;
        desconto=valorbruto*0.1;
        sal=valorbruto-desconto;
        
        printf("O valor bruto com gratificacao a ser pago e de: %.1f\n", valorbruto);
        printf("O salario a ser pago e de: %.1f", sal);
    }
    
    


}