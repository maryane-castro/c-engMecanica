#include <stdio.h>  // biblioteca


int main() {
    printf("\nBem vindo ao nosso jogo de adivinhação\n");

    int numero_secreto = 42;
    int chute;
    int tentativas = 1;


    while(1) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);


        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue; 
        } 

        int acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;


        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;

        } else if(maior) {
                printf("Seu chute foi maior que o número secreto\n");

        } else {
                printf("Seu chute foi menor que o número secreto\n");
        }
        
        
        tentativas++;
        }

        printf("Você acetou e %d\n\n", tentativas);
    }
