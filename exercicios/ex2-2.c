// Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o resultado de 1+2+3+4+...+100.

#include <stdio.h>


int main(){
    int soma = 0;
    for (int i=1; i <= 100; i++){
        soma = soma + i;
    }

    printf("%d", soma);




    printf("\n\n");
}