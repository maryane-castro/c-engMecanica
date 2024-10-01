//Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado da multiplicação entre essas duas variáveis.


#include <stdio.h>

int main(){
    // definição de váriaveis inteiras - x,y
    int x;
    int y;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &x);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &y);


    int multiplicacao = x * y;

    printf("O resultado da multiplicação é: %d\n\n", multiplicacao);


}