// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 06

#include <stdio.h>
#include <locale.h>

#define TRUE 1
#define FALSE 0

int segmento(int a, int b) {
  
  while (b != 0 && a % 10 == b % 10) {

    a = a / 10;
    b = b / 10;

  }

  if (b == 0) {

      return TRUE;

  } else {

    return FALSE;

  }
  
}

int main() {

  setlocale(LC_ALL, "Portuguese");

  int a, b, subseq, maior, menor;

  printf("\nDigite o número a: ");
  scanf("%d", &a);

  printf("\nDigite o número b: ");
  scanf("%d", &b);
  
  if (a > b) {

    maior = a;
    menor = b;

  }
  else {

    maior = b;
    menor = a;

  }    

  subseq = FALSE;

  while (maior >= menor) {

    if (segmento(maior,menor) == TRUE) {

        subseq = TRUE;

    }

    maior = maior/10;

  }

  if (subseq == TRUE) {

      printf("\n%d é segmento de %d\n", b, a);

  } else {

      printf("\n%d nao é segmento de %d\n", b, a);

  }

  return 0;

}


