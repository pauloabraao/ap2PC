// Universidade Federal do Cear�
// Disciplina : Programa��o Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abra�o Teles Lima
// Matr�cula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descri��o : Quest�o 02

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char frase[500], caractere;
    int count = 0;

    printf("\nInforme a frase: ");
    gets(frase);

    printf("\nInforme o caractere: ");
    scanf("%c", &caractere);

    for (int i = 0; frase[i] != '\0'; ++i) {

        if (tolower(frase[i]) == tolower(caractere))

            ++count;
    }

    printf("\n\"%c\" se repete %d vezes na frase \"%s\"", caractere, count, frase);

    printf("\n\n");

    return 0;
    
}
