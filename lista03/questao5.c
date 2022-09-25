#include <stdio.h>
#include <string.h>

int main (){
    char str1[25];
    char str2[25];

    printf("Entre com a primeira string: ");
    scanf("%s", str1);

    printf("Entre com a segunda string: ");
    scanf("%s", str2);

    strncat(str1,str2,50);
    printf("str concatenada= %s \n", str1);

}

