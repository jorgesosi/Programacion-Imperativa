/**
* Crear un programa que mediante un menú admita reservar o cancelar asientos de un avión, 
* así como mostrar qué asientos están ocupados y libres actualmente.
*
* El array tendrá 25 filas y 4 columnas
**/
#include <stdio.h>
#include <stdlib.h>
//void inicial();
char asiento[4][25];

int x,i,j, butaca;
char a, fila;
int main(){
	a ='A';
	x=0;
	printf("\t");
	for (j=1;j<26;j++){
			printf("%d ",j);
		}
		printf("\n");
    for(i=0;i<4;i++){
		printf("%c\t", a);
		a= a+1;
		for (j=0;j<25;j++){
			asiento [i][j]='0';
			if (j<10)
				printf("0 ");
			else
				printf(" 0 ");
		}
	printf("\n");
	}
	
	do{
		printf("solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila :");
		scanf("%c",&fila);
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}while(fila < 'A' || fila > 'D' ) ;
	
	do{
		printf("solo numeros de 1 a 25\n");
		printf("Ingrese numero asiento :");
		scanf("%d",&butaca);
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}while(butaca < 1 || butaca > 25) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("clear");
	printf("Usted eligio la fila %c numero %d\n", fila, butaca);
	asiento [x][butaca-1]= 'X';
	a='A';
	printf("\t");
	for (j=1;j<26;j++){
			printf("%d ",j);
		}
		printf("\n");
    for(i=0;i<4;i++){
		printf("%c\t", a);
		a= a+1;
		for (j=0;j<25;j++){
			if (j<10)
				printf("%c ",asiento[i][j]);
			else
				printf(" %c ",asiento[i][j]);
		}
	printf("\n");
	}
}
int asientos(){
		return 0;
}
