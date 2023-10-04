#include <stdio.h>
#include <stdlib.h>
float monto_total(float *compras){
	int acu=0;
	for(int i=0;i<10;i++){
		acu+=compras[i];
	}
	return acu;
}
float Mayor(float *compras){
	int mayor=0;
	for(int i=0;i<10;i++){
		if(compras[i]>mayor)
			mayor=compras[i];
	}
	return mayor;
}
int main() {
	float compras[10],mayor,monto;
	int i;
	for(i=0;i<10;i++){
		printf("Ingrese compra del del dia %d: ",i+1);
		scanf("%f",&compras[i]);
		while(compras[i]<=0){
			printf("Ingrese precio positivo: ");
			scanf("%f",&compras[i]);
		}
		
	}
	system("CLS");
	monto=monto_total(compras);
	mayor=Mayor(compras);
	printf("Monto total: %.2f\n",monto);
	printf("Mayor numero es: %.2f\n", mayor);
	return 0;
}