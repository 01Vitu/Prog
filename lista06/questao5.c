#include <stdio.h>
#include <stdlib.h>

struct professor {
  char *nome;
  int semestre;
};

struct disciplina {
  char *disciplinanome;
  struct professor info;
}dados2;

int main() {
  dados2.info.nome = malloc(1 * sizeof(char));
  dados2.disciplinanome = malloc(1 * sizeof(char));
  scanf("%s", dados2.disciplinanome);
  scanf("%s", dados2.info.nome);
  scanf("%d",&dados2.info.semestre);

  printf("Disciplina: %s\n",dados2.disciplinanome);
  printf("Nome professor: %s\n",dados2.info.nome);
  printf("Semestre: %d\n",dados2.info.semestre);

  return 0;
}