// I just copied it from my previous list
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int huguinho_age, zezinho_age, luizinho_age;

  printf("digite a idade de Huguinho: ");
  scanf("%d", &huguinho_age);

  printf("digite a idade de Zezinho: ");
  scanf("%d", &zezinho_age);

  printf("digite a idade de Luizinho: ");
  scanf("%d", &luizinho_age);

  // looking for the youngest
  if (huguinho_age < zezinho_age && huguinho_age < luizinho_age) {
    printf("Huguinho e o cacula\n");
  } else if (zezinho_age < huguinho_age && zezinho_age < luizinho_age) {
    printf("Zezinho e o cacula\n");
  } else {
    printf("Luizinho e o cacula\n");
  }

  return 0;
}
