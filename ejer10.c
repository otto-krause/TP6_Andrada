#include <stdio.h>
void OrdenN(int *lista,int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(lista[i]>lista[j]){
				temp=lista[i];
				lista[i]=lista[j];
				lista[j]=temp;
			}
		}
	}
	printf("Lista de Negativos:\n");
	for(i=0;i<n;i++){
		printf(" %d\n ",lista[i]);
	}
}
void OrdenP(int *lista, int p){
	int i,j,temp;
	for(i=0;i<p;i++){
		for(j=i+1;j<p;j++){
			if(lista[i]<lista[j]){
				temp=lista[i];
				lista[i]=lista[j];
				lista[j]=temp;
			}
		}
	}
	printf("Lista de Pares:\n");
	for(i=0;i<p;i++){
		printf("%d\n ",lista[i]);
	}
}

int main(int argc, char *argv[]) {
	int num,i,posi[8],p=0,nega[8],n=0;
	for(i=0;i<8;i++){
		printf("Ingrese el valor N%d: ",i+1);
		scanf("%d",&num);
		while(num==0){
			printf("Ingrese el valor distinto a 0: ");
			scanf("%d",&num);
		}
		if(num>0){
			posi[p]=num;
			p++;
		}
		else{
			if(num<0){
				nega[n]=num;
				n++;
			}
		}
	}
	OrdenP(posi,p);
	OrdenN(nega,n);
	return 0;
}