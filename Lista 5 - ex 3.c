#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int funcaoStrings(char str[], char str1[], char str2[], int p)
{
	int i, j=0, k=0, quant, total;
	
	quant = p-1;
	
	total = strlen(str);
	
	if((p<total) || (p>total))
	{
		return 0;
	}
	    else
	   {
	        for(i=0; i<=p-1; i++)
	        {
		      str1[j]=str[i];
		      j++;
		
    	    }
	            str1[j]='\0';
	
	        for(i=p;i<str[i];i++)
  	        {
		       str2[k]=str[i];
		       k++;
	        }
	            str2[k]='\0';
	            
	            return 1;
	            
	   }
}
 
void main()
{
	char string[10], s1[10], s2[10];
	int pos, resposta;
	
	printf("Entre com a string desejada: ");
	fflush(stdin);
	gets(string);
	
	printf("Entre com a posicao: ");
	scanf("%d", &pos);
	
    resposta = funcaoStrings(string, s1, s2, pos);
	
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	
	
	
}
