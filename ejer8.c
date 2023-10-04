#include <stdio.h>
void Orden(int *lista){
	int i,j,temp;
	for(i=0;i<7;i++){
		for(j=i+1;j<7;j++){
			if(lista[i]>lista[j]){
				temp=lista[i];
				lista[i]=lista[j];
				lista[j]=temp;
			}
		}
	}
	for(i=0;i<7;i++){
		printf("-%d\n ",lista[i]);
	}
}
int main(int argc, char *argv[]) {
	int lista[7],i;
	for(i=0;i<7;i++){
		printf("Ingrese el valor N%d: ",i+1);
		scanf("%d",&lista[i]);
		while(lista[i]<=0){
			printf("Ingrese el valor positivo: ");
			scanf("%d",&lista[i]);
		}
	}
	Orden(lista);
	return 0;
}

