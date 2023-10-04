#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
void Determinar(char *ca1, char *ca2, char longi,int k){
	char tm;
	for (int h=0; h<longi/2; h++) { 
		tm=ca2[h]; 
		ca1[h]=ca1[k]; 
		ca1[k]=tm; 
		k--; 
	} 
	if (strcmp(ca2,ca1)==0){ 
		printf("La palabra es pal ndromo\n"); 
	} 
	else{ 
		printf("La palabra no es pal ndromo\n");
	} 
}

int main() { 
	int i,j,k; 
	char longi,ca1[50],ca2[50]; 
	j=0;
	printf("Introduce un texto(sin mayusculas): "); 
	gets(ca1); 
	longi=strlen(ca1); 
	for (i= 0,j=0; i<=longi; i++) {
		if (ca1[i] != ' ') {
			ca1[j++] = ca1[i];
		}
	}
	strcpy(ca2,ca1);
	longi=strlen(ca2);
	k=longi-1;
	Determinar(ca1,ca2,longi,k);
	system("pause"); 
}