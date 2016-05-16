#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dicotomica(int vector[],int n, int largo);
int secuencial(int vector[],int n, int largo);
int main (){
int vector[100];
int i,cont,resultado ,num, largo=100;
	cont=0;
	for (i=0;i<100;i++){
		//cont ++;
		vector[i] = cont;
		cont ++;
	}
	printf("Ingrese un numero entre 1 y 100:");
	fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);
	resultado= dicotomica(vector,num,largo);
	printf("se encontro el numero depues de  %d pasos\n", resultado);
	resultado = secuencial(vector, num,largo);
	printf("se encontro el numero depues de  %d pasos\n", resultado);
	return 0;
}
int secuencial(int vector[],int num, int n){
	int longitud, i ;
	longitud = n;
	//longitud = strlen(vector[]);
	//longitud= sizeof(vector);
	for (i=0;i<longitud;i++){
		if (vector[i]== num	){
			return i;
			break;
		}
	}
	return -1;
}
int dicotomica(int vector[],int num, int n){
	int centro, inf=0, sup, cont ;
	//sup= strlen(vector[]);
	//sup=sizeof(vector);
	sup=n;
	cont =0;
	while(inf<=sup){
		cont++;
		centro= ((sup-inf)/2)+ inf;
		if (num==vector[centro]){
			return cont;
			break;
		} else if(num <vector[centro]){
			sup=centro-1;
		}else{
		inf =centro+1;
		}
	}
	return -1;
}
	

