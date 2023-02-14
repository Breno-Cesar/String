#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

int main() {
    char s1[MAX_SIZE+1], s2[MAX_SIZE+1], c1, c2;
    int opcao, posicao, tam, i, j, cont, comp;

    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("(a) Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("(b) Imprimir o tamanho da string S1\n");
        printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao\n");
        printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao\n");
        printf("(e) Imprimir a string S1 de forma reversa\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
        printf("(h) Verificar se uma string S2 e substring de S1\n");
        printf("(i) Retornar uma substring da string S1\n");
        printf("(0) Sair\n");
        printf("Opcao escolhida: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                printf("Saindo do programa...\n");
                return 0;

            case 1:
                printf("Digite uma string S1 (tamanho maximo %d): ", MAX_SIZE);
                scanf("%s", s1);
                break;

            case 2:
                printf("O tamanho da string S1 e %d\n", strlen(s1));
                break;

            case 3:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                comp = strcmp(s1, s2);
                if (comp == 0) {
                    printf("As strings sao iguais.\n");
                } else if (comp < 0) {
                    printf("A string S1 vem antes da string S2.\n");
                } else {
                    printf("A string S2 vem antes da string S1.\n");
                }
                break;

            case 4:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("A concatenacao resultante e: %s\n", s1);
                break;

            case 5:
                printf("A string S1 de forma reversa e: ");
                for (i = strlen(s1) - 1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Digite o caractere a ser contado: ");
                scanf(" %c", &c1);
                cont = 0;
                for (i = 0; s1[i] != '\0'; i++) {
                    if (s1[i] == c1) {
                        cont++;
                    }
                }
                printf("O caractere %c aparece %d vezes na string S1.\n", c1, cont);
                break;

            case 7:
                printf("Digite o caractere a ser substituido: ");
                scanf(" %c", &c1);
                            printf("Digite o novo caractere: ");
            scanf(" %c", &c2);
            for (i = 0; s1[i] != '\0'; i++) {
                if (s1[i] == c1) {
                    s1[i] = c2;
                    break;
                }
            }
            printf("A string resultante e: %s\n", s1);
            break;

        case 8:
            printf("Digite uma nova string S2: ");
            scanf("%s", s2);
            tam = strlen(s2);
            for (i = 0; s1[i] != '\0'; i++) {
                if (s1[i] == s2[0]) {
                    comp= 1;
                    for (j = 1; j < tam; j++) {
                        if (s1[i+j] != s2[j]) {
                            comp = 0;
                            break;
                        }
                    }
                    if (comp) {
                        printf("A string S2 e substring de S1 a partir da posicao %d.\n", i);
                        break;
                    }
                }
            }
            if (!comp) {
                printf("A string S2 nao e substring de S1.\n");
            }
            break;

        case 9:
            printf("Digite a posicao inicial da substring: ");
            scanf("%d", &posicao);
            printf("Digite o tamanho da substring: ");
            scanf("%d", &tam);
            printf("A substring resultante e: ");
            for (i = posicao; i < posicao + tam && s1[i] != '\0'; i++) {
                printf("%c", s1[i]);
            }
            printf("\n");
            break;

        default:
            printf("Opcao invalida.\n");
            break;
        }
    }

return 0;
}

               
