/*
	FAETERJ-Rio
	FPR - Manh� - Professor Leonardo Vianna
	Data: 08/09/2022
	
	Lista de Exerc�cios VI (Matrizes):
	
	QUEST�O 01:
	Fa�a uma fun��o que, dada uma matriz M8�5 de reais, gere a 
	matriz Mt, sua transposta.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 8
#define C 5



void preencherMatriz (float m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	srand (time(NULL));
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100;
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

void matrizTransposta (float m[L][C], float mt[C][L])
{
	//declara��o de vari�veis
	int i, j;
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			mt[j][i] = m[i][j];
		}
	}
	
}

void exibirTransposta (float m[C][L])
{	
	//declara��o de vari�veis
	int i, j;
	
	printf ("\nElementos da matriz transposta:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<C;i++)
	{
		//varrendo as colunas
		for (j=0;j<L;j++)
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
	float matriz[L][C], transposta[C][L];
	
	//preenchendo a matriz original
	preencherMatriz (matriz);
	
	//exibindo a matriz original
	exibir (matriz);
	
	//chamando a fun��o
	matrizTransposta (matriz, transposta);
	
	//exibindo a matriz transposta
	exibirTransposta (transposta);	
	
}
