// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 05

#include <stdio.h>

int main()
{
    int dd, mm, yy;

    printf("Insira uma data no formato DD/MM/YYYY: ");
    scanf_s("%d/%d/%d", &dd, &mm, &yy);

    if (yy >= 1900 && yy <= 9999)
    {
        
        if (mm >= 1 && mm <= 12)
        {
            
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)){

                printf("Data invalida.\n");

            }
    
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11)){

                printf("Data invalida.\n");

            }
                
            else if ((dd >= 1 && dd <= 28) && (mm == 2)){

                printf("Data invalida.\n");

            }
                
            else if (dd == 29 && mm == 2 && (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0))){

                printf("Data invalida.\n");

            }
                
            else {

                printf("Dia invalido.\n");
            }
      
        }
        else {

            printf("Mes invalido.\n");

        }
    }
    else
    {
        printf("Ano invalido.\n");
    }

    return 0;
} 