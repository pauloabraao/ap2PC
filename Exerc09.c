// Universidade Federal do Cear�
// Disciplina : Programa��o Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abra�o Teles Lima
// Matr�cula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descri��o : Quest�o 09

#include <stdio.h>

int main() {
  int n, 
    fant, fatual, fprox,                             
    contador; 
               
  printf("Digite um numero n: ");
  scanf("%d", &n);
  
  fant   = 0;
  fatual = 1;
  contador = 1;
  
  while (contador < n) {
    fprox  = fatual + fant;  
    fant   = fatual;
    fatual = fprox;
    contador = contador + 1;
  }
  printf("Numero %d de Finobacci = %d\n", n, fatual);
  
  return 0;
}