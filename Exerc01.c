// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 01

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i;
    int Q[10];
    int maior;
    int soma;
    int menor;
    int qtd = 0;

    for(i = 0; i < 10; i++){
        
        printf("Digite o elemento da posição %d: ", i);
        scanf("%d", &Q[i]);
            
    }

    void itemA (void) {

        printf("\na) Elementos do Vetor: ");
        
        for(i = 0; i < 10; i++){

            printf("%d ", Q[i]);

        }
            
        return;

    }

    itemA();
    
    printf("\n\n");

    void itemB (void) {

        for(i=0; i<10; i++){

            soma = soma + Q[i];

        }

        printf("b) Soma: %d", soma);

        return;

    }

    itemB();

    printf("\n\n");

    void itemC (void) {
    
    for (int i = 0; i < 10; i++) {

        if (i < 10 && Q[i] > maior)

            maior = Q[i];

    }
    printf ("c) Maior elemento: %d", maior);

    }

    itemC();

    printf("\n\n");

    void itemD (void) {

        for (i = 0; i < 10; i++) {

            if (i == 0) {

                menor = Q[i];

            } else {

                if (Q[i] < menor) {

                    menor = Q[i];

                }
            }
        }

        printf("d) Menor elemento: %d", menor);

        return;
    }

    itemD();

    printf("\n\n");

    void itemE(void) {

        for (i = 0; i < 10; i++) {

            if (i == 0) {

                maior = Q[i];
                menor = Q[i];

            } else {

                if (Q[i] > maior) {

                    maior = Q[i];
                }

                if (Q[i] < menor) {

                    menor = Q[i];

                }
            }
        }

        printf("e) Maior elemento: %d\n   Menor elemento: %d", maior, menor);
    
    }

    itemE();

    printf("\n\n");

    void itemF(void){

        printf("f) Elementos maiores que 50 são: ");
        
        for (i = 0; i < 10; i++) {

            if (Q[i] > 50) {

               printf("%d ", Q[i]); 

            }   
            
        }

    }
    
    itemF();

    printf("\n\n");

    void itemG(void){

        printf("g) Elementos pares são: ");
        
        for (i = 0; i < 10; i++) {

            if (Q[i]%2 == 0) {

               printf("%d ", Q[i]); 

            }   
            
        }

    }

    itemG();

    printf("\n\n");

    void itemH(void){
        
        for (i = 0; i < 10; i++) {

            if (Q[i]%2 == 0) {

               qtd++; 

            }   
            
        }

        printf("h) A quantidade de elementos pares é: %d", qtd);

    }

    itemH();

    printf("\n\n");

    return 0;
}