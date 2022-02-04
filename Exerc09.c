// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 09

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