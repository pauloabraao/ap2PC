// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 03

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define qntQuestoes 10

int isValid(char item) {

	if (tolower(item) == 'a' || tolower(item) == 'b' || tolower(item) == 'c' || tolower(item) == 'd'){

        return 1;

    } else {

        return 0;

    }
}


int main()
{
    int qntalunos, nota, i, ordinal;
    char gabarito[10];
    char resp[10];

    // Leitura do Gabarito
	printf("Digite o gabarito: \n");
	for (i = 1; i <= qntQuestoes; i++) {
		do {
			printf("Questao %d: ", i);
			scanf(" %c", &gabarito[i]);
		} while(!isValid(gabarito[i]));
	}

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qntalunos);

    for(ordinal = 1; ordinal <= qntalunos; ordinal++){

        nota=0;

        for(i = 0; i < 10; i++){

            printf("Informe a resposta da questao %d: ", i+1);
            scanf("%s", &resp[i]);
        }

        for(i = 0; i < 10; i++){

            if(resp[i] == gabarito[i]){

                nota = nota + 1;

            }
        }
        printf("A nota do %d° aluno eh: %d\n\n", ordinal, nota);
    }

    getch();
}