#include <stdio.h>

int main(){
    int numero, cifra;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero>=0){
        do{
            cifra=numero%10;
            printf("%d", cifra);
            numero /=10;
        } while (numero!=0);
        
           printf("\n");
        }
        
    return 0;
    }


