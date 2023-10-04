#include <stdio.h>
#include <stdlib.h>
void mostrar(int *vector){
	for(int i=0;i<7;i++){
		printf("Valor N%d: %d\n",i+1,vector[i]);
	}
}
void orden(int *vector){
	int acen=1,desn=1;
	for(int i=1;i<7;i++){
		if (vector[i]>vector[i-1])
			acen=0;
		else{
			if(vector[i]<vector[i-1])
				desn=0;
		}
	}
	if((acen==0 && desn==0) || (acen==1 && desn==1) )
		printf("Se ingreso de manera desordenada");
	else{
		if(desn==0){
			printf("Se ingreso de manera descendente");
		}
		else
		   printf("Se ingreso de manera ascendente");
	}
}

int main(int argc, char *argv[]) {
	int vector[7],i,mayor=0;
	for(i=0;i<7;i++){
		printf("Ingrese valor N%d: ",i+1);
		scanf("%d",&vector[i]);
		while(vector[i]<=0){
			printf("Ingrese valor N%d positivo: ",i+1);
			scanf("%d",&vector[i]);
		}
		if(vector[i]>mayor)
			  mayor=vector[i];
	}
	system("CLS");
	printf("Mayor numero es: %d\n", mayor);
	mostrar(vector);
	orden(vector);
	return 0;
}
