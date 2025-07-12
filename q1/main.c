// I made this code simple and didn"t embellish it much just to cover the subject that was taught
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float score_1, score_2, score_3, final_score;

  printf("digite sua primeira nota: ");
  scanf("%f", &score_1);

  printf("digite sua segunda nota: ");
  scanf("%f", &score_2);

  printf("digite sua terceira nota: ");
  scanf("%f", &score_3);

  final_score = (score_1 + score_2 + score_3) / 3;

  if (final_score >= 7) {
    printf("aprovado");
  } else if (final_score < 3) {
    printf("reprovado");
  } else {
    printf("prova final");
  }
  return 0;
}
