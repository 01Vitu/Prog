#include <stdio.h>

void conv (int n1) {
	
  printf("Hexa: %x \n" , n1);
  printf("Octal: %o", n1);
}
int main(){
  int n1;
  printf("Entre com o numero: ");
  scanf("%d", &n1);

  conv(n1);
  
}
