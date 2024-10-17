/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char palavras[10];
    sprintf(palavras, "MELANCIA");
    printf("%s\n", palavras); 
    printf("%c\n", palavras[0]);
    
    
    /*
    int notas[10];
    notas[0] = 7;
    printf("%d", notas[0]); */
    
    // %c é apenas para um caracter
    
    /*
    palavras[0] = 'M';
    palavras[1] = 'E';
    palavras[2] = 'L';
    palavras[3] = 'A';
    palavras[4] = 'N';
    palavras[5] = 'C';
    palavras[6] = 'I';
    palavras[7] = 'A';
    */
    
    
    // \0 tem significado de ponto de parada
    
    char teste[] = "exemplo\0 meu nome é maryane";
    printf("%s", teste);  // Vai imprimir 'e'

    
    
    

    return 0;
}