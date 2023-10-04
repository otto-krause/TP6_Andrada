#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char nom[20],nomm[20];
	int dia,mes,anio,i,dm,mm,am,n;
	float sueldo,suelm;
	dm=0;
	mm=0;
	am=0;
	n=0;
	for (i=1;i<=3;i++)
	{
		printf("Ingrese nombre: ");
		scanf("%s",&nom);
		printf("Ingrese sueldo: ");
		scanf("%f",&sueldo);
		
		while (n!=1)
		{	
			printf("Ingrese un correcto dia de ingreso: ");
			scanf("%d",&dia);
			printf("Ingrese un correcto mes de ingreso: ");
			scanf("%d",&mes);
			printf("Ingrese un correcto anio de ingreso: ");
			scanf("%d",&anio);
			if (anio >= 1 && anio <= 9999) {
				if (mes >= 1 && mes <= 12) {
					if (dia >= 1 && dia <= 31) {
						if ((mes == 2 && dia <= 28) || (mes == 2 && dia == 29 && (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0)))) {
							n=1;
						} else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia <= 30) {
							n=1;
						} else if (dia <= 31) {
							n=1;
						} else {
							n=0;
						}
					} else {
						n=0;
					}
				} else {
					n=0;
				}
			} else {
				n=0;
			}
		}
		if(i==1)
		{
			if (dia>dm && mes>mm && anio>am)
			{
				strcpy(nomm,nom);
				suelm=sueldo;
				dm=dia;
				mm=mes;
				am=anio;			
			}
			
		}
		else
		{
			if (am>anio||(am==anio && mm>mes )||(am==anio && mm==mes  && dm>dm ))
			{
				strcpy(nomm,nom);
				suelm=sueldo;
				dm=dia;
				mm=mes;
				am=anio;			
			}
		}
		n=0;
	}
	printf("Nombres: %s\n",nomm);
	printf("Sueldo: %.2f",suelm);
	return 0;
}