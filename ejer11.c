#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Inverso(char *ca1, char longi,int j){
	char tm;
	for (int i=0; i<longi/2; i++)
	{
		tm=ca1[i];
		ca1[i]=ca1[j];
		ca1[j]=tm;
		j--;
	}
	printf("Resultado: %s\n", ca1);
}
int main()
{
	int j;
	char longi,ca1[50];
	printf("Introduce un texto (menos de 50 caracteres): ");
	gets(ca1);
	longi=strlen(ca1);
	j=longi-1;
	Inverso(ca1,longi,j);
	system("pause");
}

