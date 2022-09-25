#include <stdio.h>

int main (void){

    int tamanhoString (char string[]);
    char stringUsuario[20];

    printf("Digite uma palavra: \n");
    scanf("%s",stringUsuario);

    int num =tamanhoString(stringUsuario);
    printf("A string %s possui %d caracteres.\n", stringUsuario, num);

    system("pause");
    return 0;

}

int tamanhoString(char string[]){
    int numCaracteres=0;

    while (string[numCaracteres]!= '\0')
    {
        numCaracteres++;
    }
        numCaracteres++;
        return numCaracteres;
}