/*
	FAETERJ-Rio
	FPR - Manh� - Professor Leonardo Vianna
	Data: 08/09/2022
	
	Lista de Exerc�cios VI (Matrizes):
	
	Desenvolver uma fun��o que gere a seguinte matriz M5x5:

							1 2 3 4 5
							2 3 4 5 6
							3 4 5 6 7
							4 5 6 7 8
							5 6 7 8 9
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 5
#define C 5


void preencherMatriz (float m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = i+j+1;
		}
	}
}


void exibir (float m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			printf ("%5.1f ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

void main ()
{
	//declara��o de vari�veis
	float matriz[L][C];
	
	//preenchendo a matriz
	preencherMatriz (matriz);
	
	//exibindo a matriz
	exibir (matriz);
}
