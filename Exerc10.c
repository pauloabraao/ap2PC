// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 10

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 5, n = 4;
    int i, j, matriz[m][n], matTrans[n][m];

    do {

            printf("\nInsira o tamanho de m (coluna): ");
            scanf("%d", &m);

            printf("\nInsira o tamanho de n (linha): ");
            scanf("%d", &n);

        } while (m > 100 || m < 0 || n > 100 || n < 0 );


    for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {

                printf ("\nElemento[%d][%d] = ", i, j);
                scanf ("%d", &matriz[i][j]);

            }
            printf("\n");
        }

    printf("\nMatriz original:\n");

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            matTrans[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz transposta:\n");
    
    for(i = 0; i < n;i++){
        for(j = 0; j < m; j++){
            printf("%d ", matTrans[i][j]);
        }
        printf("\n");
    }

    return 0;
}