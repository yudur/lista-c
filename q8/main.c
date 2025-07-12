#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[80];
  float math_grade, portuguese_grade, gk_grade;

  printf("digite o nome do candidato: ");
  fgets(name, sizeof(name), stdin);

  printf("digite a nota da prova de matematica: ");
  scanf("%f", &math_grade);

  printf("digite a nota da prova de portugues: ");
  scanf("%f", &portuguese_grade);

  printf("digite a nota da prova de conhecimentos gerais: ");
  scanf("%f", &gk_grade);

  float media = (math_grade + portuguese_grade + gk_grade) / 3;

  printf("\no candidato de nome: %s\n", name);
  printf("\tmatematica: %.1f\n", math_grade);
  printf("\tportugues: %.1f\n", portuguese_grade);
  printf("\tconhecimentos gerais: %.1f\n\n", gk_grade);

  printf("obteve a nota %1.f e esta ", media);

  if (media > 7 && math_grade >= 5 && portuguese_grade >= 5 && gk_grade >= 5) {
    printf("aprovado");
  } else {
    printf("reprovado");
  }

  return 0;
}
