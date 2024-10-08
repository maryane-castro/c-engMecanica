#include <stdio.h>  // biblioteca


// declarar constantes
#define NUMERO_DE_TENTATIVAS 5

int main() {
    printf("\nBem vindo ao nosso jogo de adivinhação\n");

    int numero_secreto = 42;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {  // i++ *
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);


        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            i--;

            continue;  // faz o fluxo voltar direto para o i++ *  - para a próxima interação do loop
        } 

        int acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;


        else if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }
        else {
            if(maior) {
                printf("Seu chute foi maior que o número secreto\n");
            } else {
                printf("Seu chute foi menor que o número secreto\n");

            }
        }
    }

    printf("\n\n");
}