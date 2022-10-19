/*
	FAETERJ-Rio
	FPR - Manhã - Professor Leonardo Vianna
	Data: 08/09/2022
	
	Lista de Exercícios VI (Matrizes):
	
	QUESTÃO 02:
	Desenvolver uma função que, dada uma matriz M15×20, determine 
	se um número X se encontra na linha L da matriz.
	
	VERSÃO 2: percorre apenas a linha passada por parâmetro.
*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definição de constantes
#define L 15
#define C 10

#define TRUE 1
#define FALSE 0


void preencherMatriz (float m[L][C])
{
	//declaração de variáveis
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
	//declaração de variáveis
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
	//declaração de variáveis
	int i, j;
	
	//tranformando linha de 1 a L (usuário) para 0 a L-1 (linguagem C)
	linha--;
	
	//varrendo a matriz
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			//verificando se a linha 'i' é a linha desejada
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
	//declaração de variáveis
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
	
	//chamando a função
	if (buscarElemento (matriz, valor, linha) == TRUE)
	{
		printf ("\nO valor %.1f foi encontrado na linha %d da matriz!", valor, linha);
	}
	else
	{
		printf ("\nO valor %.1f NAO foi encontrado na linha %d da matriz!", valor, linha);
	}	
}
