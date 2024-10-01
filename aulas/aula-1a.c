#include <stdio.h>  // biblioteca

int main() {
    printf("\nBem vindo ao nosso jogo de adivinhação\n");

    int numero_secreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);        // recebe valor para a variavel
    printf("Seu chute foi %d \n\n", chute);

    if (chute == numero_secreto){  // condicionais
        printf("Parabéns você acertou!");
    }
    else{
        if(chute > numero_secreto) {
             printf("Seu chute foi maior que o número secreto\n");
        }

        if(chute < numero_secreto) {
             printf("Seu chute foi menor que o número secreto\n");
        }
    }


    printf("\n\n");
    
    

}
