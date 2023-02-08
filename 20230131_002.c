#include <stdio.h>
#include <string.h>

#define NUM_CARS 5
#define MAX_MODEL_LENGTH 20

int main(void) {
  char models[NUM_CARS][MAX_MODEL_LENGTH];
  float consumo[NUM_CARS];
  float min_consumo = 99999.0;
  int min_index = 0;

 
  for (int i = 0; i < NUM_CARS; i++) {
    printf("Digite o modelo do carro %d: ", i + 1);
    scanf("%s", models[i]);
  }

  for (int i = 0; i < NUM_CARS; i++) {
    printf("Digite o consumo (km/l) do carro %s: ", models[i]);
    scanf("%f", &consumo[i]);
    if (consumo[i] < min_consumo) {
      min_consumo = consumo[i];
      min_index = i;
    }
  }

  
  printf("O carro mais economico e o %s com %.2f km/l\n", models[min_index], min_consumo);

  for (int i = 0; i < NUM_CARS; i++) {
    printf("O carro %s consumira %.2f litros para percorrer 1000 km\n", models[i], 1000.0 / consumo[i]);
  }

  return 0;
}
