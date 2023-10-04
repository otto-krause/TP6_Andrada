#include<stdio.h>
#include<stdlib.h>
void Inverso(char *pala, int dif, int daf){
	int i=0;
	while (pala[i])
	{
		if (pala[i]>='a' && pala[i]<='z')
			pala[i]=pala[i]-dif;
		else
		{	
			if (pala[i]>='A' && pala[i]<='Z')
				pala[i]=pala[i]-daf;
		}
		i++;
	}
printf("Su nombre en mayusculas es %s. \n", pala);
}
int main ()
{
	int dif='a'-'A', daf='A'-'a';
	char pala[50];
	printf("Por favor ingrese palabra: ");
	gets(pala);
	Inverso(pala,dif,daf);
	system("pause");
}
