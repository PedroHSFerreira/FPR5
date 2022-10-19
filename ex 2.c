/*
	FAETERJ-Rio
	FPR - Manh� - Professor Leonardo Vianna
	Data: 08/09/2022
	
	Lista de Exerc�cios VI (Matrizes):
	
	QUEST�O 02:
	Desenvolver uma fun��o que, dada uma matriz M15�20, determine 
	se um n�mero X se encontra na linha L da matriz.
	
	VERS�O 2: percorre apenas a linha passada por par�metro.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 15
#define C 10

#define TRUE 1
#define FALSE 0


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
int buscarElemento (float m[L][C], float numero, int linha)
{
	//declara��o de vari�veis
	int i, j;
	
	//tranformando linha de 1 a L (usu�rio) para 0 a L-1 (linguagem C)
	linha--;
	
	//varrendo a matriz
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			//verificando se a linha 'i' � a linha desejada
			if (i == linha)
			{
				//verificando se o elemento foi encontrado
				if (m[i][j] == numero)
				{
					return TRUE;
				}
			}
		}
	}
	
	return FALSE;
}


void main ()
{
	//declara��o de vari�veis
	float matriz[L][C];
	float valor;
	int linha;
	
	//preenchendo a matriz original
	preencherMatriz (matriz);
	
	//exibindo a matriz original
	exibir (matriz);
	
	//perguntando o valor a ser buscado
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%f", &valor);
	
	//perguntando a linha ser percorrida
	printf ("Em qual linha deve ser feita a busca? ");
	scanf ("%d", &linha);
	
	//chamando a fun��o
	if (buscarElemento (matriz, valor, linha) == TRUE)
	{
		printf ("\nO valor %.1f foi encontrado na linha %d da matriz!", valor, linha);
	}
	else
	{
		printf ("\nO valor %.1f NAO foi encontrado na linha %d da matriz!", valor, linha);
	}	
}
