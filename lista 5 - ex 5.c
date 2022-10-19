#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void funcaoRemover(char string[], int pos1, int pos2)
{
	
	int i, j;
	
	for(i=0; i<string[i]; i++)
	{
		if((i > pos1) && (i < pos2))
		{
			for(j=i;j<string[i];j++)
			{
				string[j]=string[j+1];
				
			}
		}
	}
	
}

void main()
{
	char s[20];
	int p1, p2;
	
	
	printf("Insira a string: ");
	fflush(stdin);
	gets(s);
	
	printf("Entre com a p1: ");
	scanf("%d", &p1);
	
	printf("Entre com a p2: ");
	scanf("%d", &p2);
	
     funcaoRemover(s, p1, p2);
     
     printf("String apos remocoes: %s", s);
	
}
