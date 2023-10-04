#include <stdio.h>
#include <stdlib.h>
int determinar(int num){
	if(num%2!=0)
		return 0;
	else{
		if(num%2==0)
			return 1;
	}	
}
void mostrar(int *vector,int n){
	for(int i=0;i<n;i++){
		printf("-N%d: %d\n",i+1,vector[i]);
	}
}
int main() {
	int pares[20],i,impares[20],num,det,p=0,im=0;
	for(i=0;i<20;i++){
		printf("Ingrese numero N%d: ",i+1);
		scanf("%d",&num);
		if(num==0)
			break;
		det=determinar(num);
		if(det==1){
			pares[p]=num;
			p++;
		}
		else{
			impares[im]=num;
			im++;
		}
	}
	printf("Lista de pares:\n");
	mostrar(pares,p);
	printf("Lista de impares:\n");
	mostrar(impares,im);
	return 0;
}