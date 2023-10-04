#include <stdio.h>
void comparar1(int *lista, int *lista2){
	int posicion[10],j=0;
	for (int i=0;i<8;i++){
		if (lista[i]==lista2[0]){
			posicion[j]=i;
			j++;
		}
	}
	printf("El N %d se repite %d veces en la lista\n",lista2[0],j);
	printf("Las pocisiones en la que se repite:\n");
		for(int i=0;i<j;i++){
		printf("Posicion: N%d\n",posicion[i]);
	}
}
void comparar2(int *lista, int *lista2){
	int posicion[10],j=0;
	for (int i=0;i<8;i++){
		if (lista[i]==lista2[1]){
			posicion[j]=i;
			j++;
		}
	}
	printf("El N %d se repite %d veces en la lista\n",lista2[1],j);
	printf("Las pocisiones en la que se repite:\n");
	for(int i=0;i<j;i++){
		printf("Posicion: N%d\n",posicion[i]);
	}
}

int main(int argc, char *argv[]) {
	int lista[8],lista2[2],i;
	for(i=0;i<8;i++){
		printf("Ingrese el N%d: ",i+1);
		scanf("%d",&lista[i]);
	}
	for(i=0;i<2;i++){
		printf("Ingrese el N: ");
		scanf("%d",&lista2[i]);
	}
	comparar1(lista,lista2);
	comparar2(lista,lista2);
	return 0;
}