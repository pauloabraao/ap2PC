// Universidade Federal do Cear�
// Disciplina : Programa��o Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abra�o Teles Lima
// Matr�cula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descri��o : Quest�o 07

#include <stdio.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");  

  int n, div, soma = 0; 

  printf("\nDigite um n�mero inteiro positivo: ");
  scanf("%d", &n);
  
  for (div = 1; div < n; div++){

    if (n % div == 0) {

        soma = soma + div;

    }
      
  }
  
  if (n == soma) {

      printf("\nO n�mero %d � perfeito\n\n", n);

  } else {

      printf("\nO n�mero %d n�o � perfeito\n\n", n);

  } 

  return 0;

}


