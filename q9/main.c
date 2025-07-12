#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name1[50], name2[50];
  float height1, height2, weight1, weight2;

  printf("Digite o nome da primeira pessoa: ");
  fgets(name1, sizeof(name1), stdin);

  printf("Digite a altura da primeira pessoa (em metros): ");
  scanf("%f", &height1);

  printf("Digite o peso da primeira pessoa (em kg): ");
  scanf("%f", &weight1);

  getchar();  // Clears dangling '\n' from previous scanf

  printf("\nDigite o nome da segunda pessoa: ");
  fgets(name2, sizeof(name2), stdin);

  printf("Digite a altura da segunda pessoa (em metros): ");
  scanf("%f", &height2);

  printf("Digite o peso da segunda pessoa (em kg): ");
  scanf("%f", &weight2);

  // Check who is heavier
  if (weight1 > weight2) {
    printf("\nA pessoa mais pesada e: %s", name1);
  } else if (weight2 > weight1) {
    printf("\nA pessoa mais pesada e: %s", name2);
  } else {
    printf("\nAs duas pessoas têm o mesmo peso.\n");
  }

  // Check who is taller
  if (height1 > height2) {
    printf("A pessoa mais alta e: %s", name1);
  } else if (height2 > height1) {
    printf("A pessoa mais alta e: %s", name2);
  } else {
    printf("As duas pessoas têm a mesma altura.\n");
  }

  return 0;
}
