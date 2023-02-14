#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j, tamanho, f = 1;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tamanho = strlen(palavra);
    
    for (i = 0, j = tamanho - 1; i < tamanho/2; i++, j--) {
        if (palavra[i] != palavra[j]) {
            f = 0;
            break;
        }
    }
    
    if (f) {
        printf("%s e um palindromo.\n", palavra);
    } else {
        printf("%s nao e um palindromo.\n", palavra);
    }
    
    return 0;
}
