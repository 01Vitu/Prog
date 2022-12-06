#include <stdio.h>
int mediaAlunos (float , float , float );

struct alunos {
float notas[2];
float media;
};

int main(void) {
  struct alunos a1, a2, a3;
  float mediaTotal;

  puts("Digite as notas do primeiro aluno: ");
  for(int i = 0; i < 2; i++){
    printf("Digite a %dª nota: ", i + 1);
    scanf("%f", &a1.notas[i]);
  }
  
  puts("\nDigite as notas do segundo aluno: ");
  for(int i = 0; i < 2; i++){
    printf("Digite a %dª nota: ", i + 1);
    scanf("%f", &a2.notas[i]);
  }
  puts("\nDigite as notas do terceiro aluno: ");
  for(int i = 0; i < 2; i++){
    printf("Digite a %dª nota: ", i + 1);
    scanf("%f", &a3.notas[i]);
  }
  
  a1.media = (a1.notas[0] + a1.notas[1])/2;
  a2.media = (a2.notas[0] + a2.notas[1])/2;
  a3.media = (a3.notas[0] + a3.notas[1])/2;
  
  puts("\n--------- Primeiro Aluno ---------");
  printf("A 1ª nota é: %.2f \nA 2ª nota é %.2f \nA média é %.2f", a1.notas[0], a1.notas[1], a1.media);
  puts("\n----------------------------------\n");

  puts("--------- Segundo Aluno ---------");
  printf("A 1ª nota é: %.2f \nA 2ª nota é %.2f \nA média é %.2f", a2.notas[0], a2.notas[1], a2.media);
  puts("\n--------------------------------\n");
  
  puts("--------- Terceiro Aluno ---------");
  printf("A 1ª nota é: %.2f \nA 2ª nota é %.2f \nA média é %.2f",
a3.notas[0], a3.notas[1], a3.media);
  puts("\n---------------------------------\n");
  
  mediaTotal = mediaAlunos(a1.media, a2.media, a3.media);

  printf("A media dos alunos e %.2f", mediaTotal);
  return 0;
}

int mediaAlunos (float media1, float media2, float media3) {
  int media;
  media = (media1 + media2 + media3)/3;
  return media;
}