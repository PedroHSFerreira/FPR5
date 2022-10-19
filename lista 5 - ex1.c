#include <stdio.h>
#include <string.h>

void funcaoDistintos(char s[])
{
	
	int i, j, cont=0, distinto=0;
	
	for(i=0;i<s[i];i++)
	{
		cont=0;
		
		for(j=i+1;j<s[i];j++)
		{
			if(s[j]==s[i])
			{
				cont++;
			}
			
		}
		if(cont<=0)
		{
			distinto++;
		}
	}
	
	printf("Total de distintos= %d", distinto);
}

void main()
{
	char string[10];
	
	
	printf("Digite a string:");
	fflush(stdin);
	gets(string);
	
	
	funcaoDistintos(string);
	
}
