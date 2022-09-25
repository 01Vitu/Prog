#include <stdio.h>
#include <string.h>

int main(){
  char string[25], stringInv[25];

  printf("Digite a palavra: ");
  scanf("%s", string);

  int i,j,n;

  n=strlen(string);
  j=n-1;

  for ( i = 0; i < n; i++)
  {
    stringInv[i] = string[j];
    j=j-1;
  }

  stringInv[i]= '\0';

  printf("Palavra normal: %s\n", string);
  printf("Palavra invertida: %s\n", stringInv);
  
}