#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void strCopiar (char s1[], char s2[], int p)
{
	//declaração de variáveis
	int i, j, quant;
	quant = strlen(s1);
	
	//percorrendo s2
	for(i=p, j=0 ;i<=quant;i++)
	{
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
}

void main()
{
	char origem[10], destino[30];
	int pos;
	
	printf("Digite a string.");
	fflush(stdin);
	gets(origem);
	
	printf("Digite a posicao q a segunda string comecara: ");
	scanf("%d", &pos);

	printf ("\nExibindo as duas strings antes da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
	
	//copiando a string origem para destino
	strCopiar (origem, destino, pos);
	
	//exibindo as duas strings depois da cópia
	printf ("\n\nExibindo as duas strings depois da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
	
}
