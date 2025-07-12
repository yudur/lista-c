#include <stdio.h>
#include <stdlib.h>

int main()
{
  float l1, l2, l3;

  printf("digite o primeiro lado do triangulo: ");
  scanf("%f", &l1);

  printf("digite o segundo lado do triangulo: ");
  scanf("%f", &l2);

  printf("digite o terceiro lado do triangulo: ");
  scanf("%f", &l3);

  if (l1 == l2 && l2 == l3) {
    printf("tringulo equilatero");
  } else if (l1 == l2 || l1 == l3 || l2 == l3) {
    printf("triangulo isosceles");
  } else {
    printf("tringulo escaleno");
  }

  return 0;
}
