#include <stdio.h>
#include <string.h>

#define TAM 20

void limpandoBuffer();
void encontraCaractere(char*, char, int, int*);

int main(void){
    char c, str[TAM];
    int cont = 0;

    printf("Digite a string: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0';
    if(strlen(str) >= TAM-1) limpaBuffer();

    printf("Digite o caractere que deseja encontrar: ");
    scanf(" %c", &c);
    
    encontrarCaractere(str, c, TAM, &cont);

    printf("String digitada: '%s'\n", str);
    if(cont){
        printf("O caractere '%c' foi encontrado %dx\n", c, cont);
    }else{
        printf("O caractere '%c' NÃO foi encontrado\n", c);
    }
    
    return 0;
}

void limpandoBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

void encontrarCaractere(char *str, char c, int tam, int *cont){
    int i = 0;
    while(*(str + i) != '\0' && i < tam){
        *cont += (*(str + i) == c)? 1 : 0;
        i++;
    }
}