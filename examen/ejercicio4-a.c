/* Muestre un menú con las opciones sumar, restar, multiplicar y dividir, el programa solicitará una opción, 
 * luego el ingreso de dos números, y realizará la tarea elegida.
 *   Se debe usar una función para mostrar el menú, pedir los datos en el main.
 *   También usar funciones para realizar los cálculos.
 * */
#include <stdio.h>
#include <stdlib.h>
int suma(int x, int y);
int multi (int x , int y);
int resta (int x , int y);
float dividir (float z, float u);
int a,b ;
float c,d;

int main(){
	int sumar, restar, mult;
	float divi;
	int opt;
	for (;;){
		printf("Seleccione una opcion\n");
		
		printf("1-Sumar\n");
		printf("2-restar\n");
		printf("3- Multiplicar\n");
		printf("4- Dividir\n");
		printf("5- salir\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				sumar =0;
				printf("Ingrese primer numero:");
				fflush(stdout);
				scanf("%d", &a);
				fflush(stdin);
				printf("\nIngrese segundo numero: ");
				fflush(stdout);
				scanf("%d", &b);
				fflush(stdin);
				
				sumar = suma(a,b);
				printf(" \nel resultado es %d\n",sumar);
			break;
			case 2:
				printf("Ingrese primer numero:");
				fflush(stdout);;
				scanf("%d", &a);
				fflush(stdin);
				printf("Ingrese segundo numero: ");
				fflush(stdout);
				scanf("%d", &b);
				fflush(stdin);
				printf("Ingrese segundo numero: ");
				restar = resta(a,b);
				printf(" \nel resultado es %d\n",restar);
			break;
			case 3:
				printf("Ingrese primer numero:");
				fflush(stdout);
				scanf("%d", &a);
				fflush(stdin);
				printf("Ingrese segundo numero: ");
				fflush(stdout);
				scanf("%d", &b);
				fflush(stdin);
				printf("Ingrese segundo numero: ");
				mult = multi(a,b);
				printf(" \nel resultado es %d\n",mult);
				
			break;
			case 4:
				do{ 
				printf("Ingrese primer numero:");
				//fflush(stdout);
				scanf("%f", &c);
				//fflush(stdin);
				printf("Ingrese segundo numero: ");
				
				scanf("%f", &d);
				//fflush(stdin);
				if (d==0){
					system("clear");
					printf("El segundo valor 0\n");
					}
				} while (d==0);
				divi= dividir(c,d);
				printf(" \nel resultado es %f\n",divi);
			break;
			case 5:
			exit(1);
			default: break;
		}
	}
	
}
int suma(int x, int y){
	int result;
	result = x+y;
	return result;
	
}
int resta(int x, int y){
	int result;
	result = x-y;
	return result;
	
}
int multi(int x, int y){
	int result;
	result = x*y;
	return result;
	
}
float dividir (float z, float u){
	 float result;
	 result=(float)z/(float)u;
	return result;
	
}
