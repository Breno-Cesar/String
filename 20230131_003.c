#include <stdio.h>
#include <stdlib.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%s", &data);

    if (data[2] != '/' || data[5] != '/') {
        printf("Formato inválido!\n");
        return 1;
    }

    dia = atoi(&data[0]);
    mes = atoi(&data[3]);
    ano = atoi(&data[6]);

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1) {
        printf("Data invalida!\n");
        return 1;
    }

    printf("Dia: %d\nMes: %d\nAno: %d\n", dia, mes, ano);

    return 0;
}
