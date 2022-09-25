#include <stdio.h>
#include <string.h>

int main(){
    char texto [25];
    char c;
    int i, l;

    printf("Informe a string: ");
    gets(texto);

    printf("Informe o caractere: ");
    scanf("%c", &c);

    l=strlen(texto);
    for ( i = 0; i < l; i++)
    {
        if (texto[i] == c){
            printf("O caractere %c esta na string.", c);  
        }        
    }

return 0;

}