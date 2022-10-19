#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int busca (char st[], char ch)
{
	
	int i;
	
	for(i=0;st[i];i++)
	{
		if(st[i]==ch)
		{
			return i;
		}
	}
	return -1;
	
}

void funcaoCriaString(char string1[], char string2[], char string3[])
{
	int i, j=0; string3[0]='\0';
	
	for(i=0;i<string1[i];i++)
	{
		
		 if((busca(string2, string1[i])<0)&& (busca(string3, string1[i])<0))
		{
			string3[j]=string1[i];
			string3[j+1]='\0';
			j++;
		}
		
	}
	
	
}

void main()
{
	
	char s1[10], s2[10], s3[10];
	
     printf("digite a primeira string: ");
     fflush(stdin);
     gets(s1);
     
     printf("Digite a segunda string: ");
     fflush(stdin);
     gets(s2);
   
   funcaoCriaString(s1, s2, s3);
   
   printf("String 1 : %s\n", s1);
   printf("String 2 : %s\n", s2);
   printf("String 3 : %s", s3);
}
