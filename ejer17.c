#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int calcularEdad(int dia, int mes, int anio) {
	int diaA=3,mesA=10,anioA=2023,edad;
	edad=anioA-anio;
	if (mesA<mes||(mesA==mes&&diaA<dia)) {
		edad--;
	}
	return edad;
}
void cargarFecha(int *dia, int *mes, int *anio) {
	printf("Ingrese el día de nacimiento: ");
	scanf("%d", dia);
	printf("Ingrese el mes de nacimiento: ");
	scanf("%d", mes);
	printf("Ingrese el año de nacimiento: ");
	scanf("%d", anio);
	while (*anio>2023||*anio<0||*mes<1||*mes>12||*dia < 1 ||((*mes==2 && *anio%4==0 && *dia>29)||(*mes==2 && *anio%4!=0 && *dia>28))) {
		printf("Fecha inválida. Ingrese nuevamente.\n");
		printf("Ingrese el día de nacimiento: ");
		scanf("%d", dia);
		printf("Ingrese el mes de nacimiento: ");
		scanf("%d", mes);
		printf("Ingrese el año de nacimiento: ");
		scanf("%d", anio);
	}
}
int main() {
	char nombres[3][20],tempNombre[20],nombreModificar[20];
	int dias[3], meses[3], anios[3], edades[3],tempEdad,tempDia,tempMes,tempAnio,i;
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el nombre de la persona %d: ", i + 1);
		scanf("%s", nombres[i]);
		cargarFecha(&dias[i], &meses[i], &anios[i]);
		edades[i]=calcularEdad(dias[i], meses[i], anios[i]);
	}
	for (int i = 0; i < 2; i++) {
		for (int j=0;j<2-i;j++) {
			if (edades[j]>edades[j+1]||(edades[j]==edades[j+1]&& meses[j]>meses[j+1])||(edades[j]==edades[j+1]&&meses[j]==meses[j+1]&& dias[j]>dias[j+1])){ 
				tempEdad = edades[j];
				edades[j] = edades[j + 1];
				edades[j + 1] = tempEdad;
				strcpy(tempNombre, nombres[j]);
				strcpy(nombres[j], nombres[j + 1]);
				strcpy(nombres[j + 1], tempNombre);
				tempDia = dias[j];
				dias[j] = dias[j + 1];
				dias[j + 1] = tempDia;
				tempMes = meses[j];
				meses[j] = meses[j + 1];
				meses[j + 1] = tempMes;
				tempAnio = anios[j];
				anios[j] = anios[j + 1];
				anios[j + 1] = tempAnio;
			}
		}
	}
	printf("\nPersonas ordenadas por edad:\n");
	for ( i = 0; i < 3; i++) {
		printf("Nombre: %s, Edad: %d\n", nombres[i], edades[i]);
	}
	nombreModificar[20];
	printf("\nIngrese el nombre de la persona a la que desea modificar la fecha: ");
	scanf("%s", nombreModificar);
	for ( i = 0; i < 3; i++) {
		if (strcmp(nombreModificar, nombres[i])==0) {
			printf("Nueva fecha para %s:\n", nombres[i]);
			cargarFecha(&dias[i], &meses[i], &anios[i]);
			edades[i] = calcularEdad(dias[i], meses[i], anios[i]);
		}
	}
	printf("\nPersonas después de la modificación:\n");
	for ( i = 0; i < 3; i++) {
		printf("Nombre: %s, Edad: %d\n", nombres[i], edades[i]);
	}
	return 0;
}