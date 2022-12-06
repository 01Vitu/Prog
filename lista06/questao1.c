#include <stdio.h>

struct notas{
float n1,n2;
float media;
};
 

int main(void) {
  struct notas aluno1;
  printf("Digite a n1: ");
  scanf("%f", &aluno1.n1);
  printf("Digite a n2: ");
  scanf("%f", &aluno1.n2);

  aluno1.media=(aluno1.n1+aluno1.n2)/2;
  printf("A media e: %.1f", aluno1.media);
  
  return 0;
}