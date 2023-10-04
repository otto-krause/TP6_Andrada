#include <stdio.h>
int Mayor(int *lista){
	int ma=0;
	for(int i=0;i<10;i++){
		if(lista[i]>ma){
			ma=lista[i];
		}
	}
	return ma;
}
int Menor(int *lista){
	int me=0;
	for(int i=0;i<10;i++){
		if(i==0){
			me=lista[i];
		}
		else{
			if(lista[i]<me){
				me=lista[i];
			}
		}
	}
	return me;
	
}
void repiticiones(int *lista, int me, int ma){
	int cont1=0,cont2=0;
	for(int i=0;i<10;i++){
		if(lista[i]==ma){
			cont1++;
		}
		else{
			if(lista[i]==me){
				cont2++;
			}
		}
	}
	printf("El mayor se repite %d veces\n",cont1);
	printf("El menor se repite %d veces\n",cont2);
}
int main(int argc, char *argv[]) {
	int lista[10],i,me=0,ma=0;
	for(i=0;i<10;i++){
		printf("Ingrese el valor N%d: ",i+1);
		scanf("%d",&lista[i]);
	}
	ma=Mayor(lista);
	printf("El mayor: %d\n",ma);
	me=Menor(lista);
	printf("El menor: %d\n",me);
	repiticiones(lista,me,ma);
	return 0;
}
