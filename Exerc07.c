// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 07

#include <stdio.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");  

  int n, div, soma = 0; 

  printf("\nDigite um número inteiro positivo: ");
  scanf("%d", &n);
  
  for (div = 1; div < n; div++){

    if (n % div == 0) {

        soma = soma + div;

    }
      
  }
  
  if (n == soma) {

      printf("\nO número %d é perfeito\n\n", n);

  } else {

      printf("\nO número %d não é perfeito\n\n", n);

  } 

  return 0;

}


