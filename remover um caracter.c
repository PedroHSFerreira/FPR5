#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void funcaoRemover(char s[], char ch);

void main()
{
	char string[20], caracter;
	
	
	printf("Digite a string:");
	fflush(stdin);
	gets(string);
	
	printf("String antes: %s\n", string);
	
	printf("Digite o caracter a ser removido: ");
	scanf("%c", &caracter);
	
	funcaoRemover(string, caracter);
	
	printf("String depois: %s", string);
	
}
void funcaoRemover(char s[], char ch)
{
	int i, j, quant;
	
	quant = strlen(s);
	
	for(i=0;i<quant;i++)
	{
		if(s[i]==ch)
		{
		  for(j=i+1;j<quant;j++)	
		  {
		  	s[j-1] = s[j];
		  }

		  i--;
		  
		  s[quant-1] = '\0';
		}
		
	
	}
	
}
