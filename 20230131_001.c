#include <stdio.h>
#include <string.h>
#include <ctype.h>

void inverter_string(char string[]) {
  int length, i;
  length = strlen(string);
  printf("A string invertida e: ");
  for (i = length - 1; i >= 0; i--) {
    printf("%c", string[i]);
  }
  printf("\n");
}

void remover_vogais(char string[]) {
  int i, j;
  char sem_vogais[100];
  j = 0;
  for (i = 0; i < strlen(string); i++) {
    if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' &&
        string[i] != 'o' && string[i] != 'u' && string[i] != 'A' &&
        string[i] != 'E' && string[i] != 'I' && string[i] != 'O' &&
        string[i] != 'U') {
      sem_vogais[j++] = string[i];
    }
  }
  sem_vogais[j] = '\0';
  printf("A string sem vogais e: %s\n", sem_vogais);
}

void transformar_maiusculo(char string[]) {
  int i;
  printf("A string em maiusculo e: ");
  for (i = 0; i < strlen(string); i++) {
    printf("%c", toupper(string[i]));
  }
  printf("\n");
}

int contar_caractere(char string[], char caractere) {
  int i, count = 0;
  for (i = 0; i < strlen(string); i++) {
    if (string[i] == caractere) {
      count++;
    }
  }
  return count;
}

void apagar_caractere(char string[], char caractere) {
  int i, j;
  char sem_caractere[100];
  j = 0;
  for (i = 0; i < strlen(string); i++) {
    if (string[i] != caractere) {
      sem_caractere[j++] = string[i];
    }
  }
  sem_caractere[j] = '\0';
  strcpy(string, sem_caractere);
}

int main() {
  char string[100], caractere;
  int count;

  printf("Digite uma string: ");
  scanf("%s", string);

  inverter_string(string);
  remover_vogais(string);
  transformar_maiusculo(string);

  printf("Digite um caractere para ser contado na string: ");
  scanf(" %c", &caractere);
  count = contar_caractere(string, caractere);
  printf("O caractere '%c' aparece %d vezes na string.\n", caractere, count);

  printf("Digite um caractere para ser apagado da string: ");
  scanf(" %c", &caractere);
  apagar_caractere(string, caractere);
  printf("A string apos apagar o caractere '%c' é: %s\n", caractere, string);

return 0;
}