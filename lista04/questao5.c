#include <stdio.h>
#include <string.h>

#define TAM 20

void contaCaracteres(char*, int*);

int main(void){
    char str[TAM];
    int contador = 0;

    printf("Digite a string: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    contaCaracteres(str, &contador);

    printf("String informada: '%s'\n", str);
    printf("Quantidade de caracteres = %d\n", contador);
    
    return 0;
}

void contaCaracteres(char *pstr, int *pcont){
    int i = 0;
    while(*(pstr + i) != '\0'){
        i++;
        *pcont += 1;
    }
}