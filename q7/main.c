#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;

  printf("digite um numero: ");
  scanf("%d", &n);

  if (n <= 10) {
    printf("f1");
  } else if (n > 10 && n <= 100) {
    printf("f2");
  } else {
    printf("f3");
  }

  return 0;
}