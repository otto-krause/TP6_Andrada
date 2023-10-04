#include <stdio.h>
int Primero(float *corredores){
	float tiem=0;
	int pri=0;
	for(int i=0;i<10;i++){
		if(i==0){
			tiem=corredores[i];
			pri=i;
		}
		else{
			if(corredores[i]<tiem){
				tiem=corredores[i];
				pri=i;
			}
		}
	}
	return pri;
}
int Ultimo(float *corredores){
	int ulti=0;
	float tiem=0;
	for(int i=0;i<10;i++){
		if(corredores[i]>tiem){
			tiem=corredores[i];
			ulti=i;
		}
	}
	return ulti;
}
int Segundo(float *corredores, int pri){
	int seg=100;
	float tiem=1000;
	for(int i=0;i<10;i++){
		if(pri==0){
			if(corredores[i]<tiem && corredores[i]!=corredores[pri]){
				tiem=corredores[i];
				seg=i;
			}
		}
		else{
			if (i==0 && pri!=0 ){
				tiem=corredores[i];
				seg=i;
			}
			else{
				if(corredores[i]<tiem && corredores[i]!=corredores[pri]){
					tiem=corredores[i];
					seg=i;
				}
			}
			
		}
	}
	return seg;
}
float Sumar(float *corredores){
	float total=0,total1;
	for(int i=0;i<10;i++){
		total+=corredores[i];
	}
	total1=total/10;
	return total1;
}
int main(int argc, char *argv[]) {
	int i,pri,segun,ulti;
	float corredores[10],total=0;
	for(i=0;i<10;i++){
		printf("Ingrese el corredor N%d: ",i+1);
		scanf("%f",&corredores[i]);
	}
	pri=Primero(corredores);
	printf("Primero: %d\n",pri+1);
	segun=Segundo(corredores,pri);
	printf("Segundo: %d\n",segun+1);
	ulti=Ultimo(corredores);
	printf("Ultimo: %d\n",ulti+1);
	total=Sumar(corredores);
	printf("Promedio de tiempo: %.2f",total);
	return 0;
}