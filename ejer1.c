#include <stdio.h>
#include <stdlib.h>
void mostrar(int *vector){
	for(int i=0;i<6;i++){
		printf("Valor N%d: %d\n",i+1,vector[i]);
	}
	
}
int main(int argc, char *argv[]) {
	int vector[6],i;
	for(i=0;i<6;i++){
		printf("Ingrese valor N%d: ",i+1);
		scanf("%d",&vector[i]);
	}
	system("CLS");
	mostrar(vector);
	return 0;
}
