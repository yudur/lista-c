#include <stdio.h>
#include <stdlib.h>

int main()
{
  float score_1, score_2, score_3, final_score;
  int media_option;

  printf("digite a primeira nota: ");
  scanf("%f", &score_1);

  printf("digite a segunda nota: ");
  scanf("%f", &score_2);

  printf("digite a terceira nota: ");
  scanf("%f", &score_3);

  printf("\nescolha entre as opcoes a baixo:\n");
  printf("\t1 - aritmetica\n");
  printf("\t2 - ponderada\n");

  printf("digite o metodo: ");
  scanf("%d", &media_option);

  switch (media_option) {
    case 1:
      final_score = (score_1 + score_2 + score_3) / 3;
      printf("media aritmetica: %.1f", final_score);
      break;
    case 2:
      final_score = (score_1 * 3 + score_2 * 3 + score_3 * 4) / 10;
      printf("media aritmetica: %.1f", final_score);
      break;
    default:
      printf("Opcao invalida");
  }

  return 0;
}
