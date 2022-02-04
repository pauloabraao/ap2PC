// Universidade Federal do Ceará
// Disciplina : Programação Computacional
// Professor : Joniel Barreto
// Autor : Paulo Abraão Teles Lima
// Matrícula: 511330
// Data : 09/02/2022
// IDE : Visual Studio Code
// Descrição : Questão 04

#include <stdio.h>
#include <locale.h>

float calcMedia(float n[4]) {

	int i;
	float media, soma = 0;
	
	for(i = 0; i < 4; i++) {

		soma += n[i];

	}
	
	return (soma / 4);
}

float menorNota(float n[4]) {

	int i;
	float menor;
	
	for(i = 0; i < 4; i++) {

		if(i == 0) {

			menor = n[i];

		} else {

			if (menor > n[i]) {

				menor = n[i];

			}
				
		}
	}
	
	return menor;
}

int verifSituacao(float m) {

	if (m >= 7.0) {

		return 1;

	} else {

		return 0;

	}
}

void relatorio(int totalAlunos, float b[totalAlunos][5]) {

	int i, j;
	
	for(j = 0; j < 4; j++) {

		printf("Nota %d\t", j+1);

	}

	printf("Média\t");

	printf("Menor\t");

	printf("Situação\n");
	
	for(i = 0; i < totalAlunos; i++) {
		
		for(j = 0; j < 4; j++) {

			printf("%.1f\t", b[i][j]);

		}
		
		printf("%.1f\t", calcMedia(b[i]));
		
		printf("%.1f\t", menorNota(b[i]));
		
		printf(verifSituacao(calcMedia(b[i])) ? "Aprovado" : "Reprovado");
		
		printf("\n");
	}
	
}

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int totalAlunos, i, j;
	
	do {

		printf("\nInforme quantos alunos a turma possui: ");
		scanf("%d", &totalAlunos);

		if(totalAlunos > 100 || totalAlunos < 0){

			printf("\nAviso:\nA quantidade de alunos não pode exceder 100 e nem ser menor que 1\n");

		}

	} while(totalAlunos > 100 || totalAlunos < 0);
	
	
	float boletim[totalAlunos][5];
	
	for(i = 0; i < totalAlunos; i++) {

		printf("\nAluno %d - Notas: \n", i+1);

		for(j = 0; j < 4; j++) {

			printf("Nota %d: ", j+1);
			scanf("%f", &boletim[i][j]);

		}

		printf("\n");
	}	
	
	relatorio(totalAlunos, boletim);

	printf("\n\n");
	
  return 0;
}




    
