#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int funcaoPalindromo(char string[])
{
	
	int i, j;
	
	 
	 for(i=0, j=strTamanho(string)-1; i< j; i++, j--)
	 {
	 	if(string[i]!=string[j])
	 	{
	 		return 0;
	 		
		 }
	 }
	 
	 return 1;
	
	
}
int strTamanho (char s[])
{
	//declaração de variáveis
	int i;//, cont = 0;
	
	//percorrendo toda a string
	for (i=0;s[i]/*!='\0'*/;i++);
	//{
		//cont++;
	//}
	
	//retornando o resultado
	return i;//cont;
}

void main()
{
	char s[10];
	int resposta;
	
	printf("Digite a string: ");
	fflush(stdin);
	gets(s);
	
	resposta =  funcaoPalindromo(s);
	
	if (resposta==0)
	{
		printf("nao Palindromo.");
	}
	else
	{
		printf("e palindromo");
	}
	
}


