#include <stdio.h>

int main() {
  float altura;
  char sexo;
  float peso;

  
  printf("Informe seu sexo: ");
  scanf("%c", &sexo);
  
  printf("Informe sua altura: ");
  scanf("%f", &altura);

  switch (sexo) {
    
    case 'm':
    peso= 72.7* altura - 58;
    printf("O seu peso ideal e %.1f", peso);
    break;

    case 'f':
    peso= 62.1* altura - 44.7;
    printf("O seu peso ideal e %.1f", peso);
    break;
    
  }
    
  
}
