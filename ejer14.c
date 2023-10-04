#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Alumno(char *ape, int dif,float prome){
	if((ape[0]>='a') && (ape[0]<='z'))
	{	
		ape[0]=ape[0]-dif;
	}
	printf("Promedio del alumno %s %f\n",ape,prome);
	
}

int main(int argc, char *argv[]) {
	int al,noti,dif='a'-'A';
	char ape[20];
	float nota,prome,promet,acu,acut;
	acu=0;
	acut=0;
	for(al=1;al<4;al++)
	{
		printf("Ingrese apellido: ");
		scanf("%s",&ape);
			
		for(noti=1;noti<6;noti++)
		{
			printf("Ingrese nota: ");
			scanf("%f",&nota);
			acu=acu+nota;
		}
		prome=acu/5;
		Alumno(ape,dif,prome);
		acut=acut+prome;
		acu=0;
	}
	promet=acut/3;
	printf("Promedio total: %f",promet);
	return 0;
}
