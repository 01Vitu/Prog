#include <stdio.h>
#include <string.h>
int main ()
{
  char str1[20];
  char str2[20];
  int ret;

  printf("Entre com a primeira string: ");
  scanf("%s", str1);

  printf("Entre com a segunda string: ");
  scanf("%s", str2);

  ret = strncmp(str1, str2, 6);

  if(ret > 0)
  {
    printf("str1 e maior");
  }
  else if(ret < 0)
  {
    printf("str2 e maior");
  }
  else
  {
    printf("As duas palavras são iguais");
  }

  return 0;
}