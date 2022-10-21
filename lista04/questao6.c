#include <stdio.h>

void copiarString (char *copiar, char *colar){
    while (*copiar !='\0'){
        *colar=*copiar;
        copiar++;
        colar++;
    }
    *colar='\0';
}

int main(){
    void copiarString (char *copiar, char *colar);

    char str1 [50];
    char str2 [50];

    printf("Digite a primeira string: ");
    scanf("%s\n", str1);

    printf("Digite a segunda string: ");
    scanf("%s\n", str2);

    copiarString(str1, str2);
    printf("String 2 trocada: %s\n", str2);
    

}