#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  int user_age;

  printf("digite sua idade: ");
  scanf("%d", &user_age);

  if (user_age < 16) {
    printf("Não eleitor");
  } else if (user_age >= 18 && user_age <= 65) {
    printf("Eleitor obrigatório");
  } else {
    printf("Eleitor facultativo");
  }

  return 0;
}
