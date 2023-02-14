#include <stdio.h>

int main() {
    char mensagem[1000];
    int i, chave = 3;

    printf("Digite a mensagem a ser cifrada: ");
    fgets(mensagem, 1000, stdin);

    for(i = 0; mensagem[i] != '\0'; ++i) {
        if(mensagem[i] >= 'a' && mensagem[i] <= 'z') {
            mensagem[i] = (mensagem[i] + chave - 'a') % 26 + 'a';
        }
        else if(mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = (mensagem[i] + chave - 'A') % 26 + 'A';
        }
    }

    printf("Mensagem cifrada: %s", mensagem);

    return 0;
}
