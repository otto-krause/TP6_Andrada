#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Vocales(char *text,char longitud){
	int a=0,e=0,i=0,o=0,u=0;
	for (int p=0;p<=longitud;p++)
	{
		if (text[p]=='a'|| text[p]=='A')
		{
			a=a+1;
		}
		else
		{
			if(text[p]=='e' || text[p]=='E')
			{
				e=e+1;
			}
			else
			{
				if(text[p]=='i'|| text[p]=='I')
				{
					i=i+1;
				}
				else
				{
					if(text[p]=='o' || text[p]=='O')
					{
						o=o+1;
					}
					else
					{
						if(text[p]=='u' || text[p]=='U' )
						{
							u=u+1;
						}
					}
				}
			}
		}
	}
	printf("Las a son %d\n",a);
	printf("Las e son %d\n",e);
	printf("Las i son %d\n",i);
	printf("Las o son %d\n",o);
	printf("Las u son %d",u);
}
int main(int argc, char *argv[]) {
	char text[50],longitud;
	printf("Ingrese texto: ");
	gets(text);
	longitud=strlen(text);
	Vocales(text,longitud);
	return 0;
}
