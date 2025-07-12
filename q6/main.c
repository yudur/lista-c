#include <stdio.h>
#include <stdlib.h>

int main()
{
  char fuel_type;
  float liters, price_liter, discount, total_value, final_value;

  printf("qual o tipo do combustivel (A - Alcool, G - Gasolina): ");
  scanf(" %c", &fuel_type);

  printf("quantos litros deseja: ");
  scanf("%f", &liters);

  switch (fuel_type) {
    case 'G':
      price_liter = 8;

      if (liters <= 20) {
        discount = 0.04;
      } else {
        discount = 0.06;
      }
      break;

    case 'A':
      price_liter = 6;

      if (liters <= 20) {
        discount = 0.03;
      } else {
        discount = 0.05;
      }
      break;

    default:
      printf("combustivel invalido");
      return 0;
  }

  total_value = liters * price_liter;
  final_value = total_value - (total_value * discount);

  printf("O total a pagar e: %.2f", final_value);
  return 0;
}
