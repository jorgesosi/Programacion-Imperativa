/**
* Crear un programa que mediante un menú admita reservar o cancelar asientos de un avión, 
* así como mostrar qué asientos están ocupados y libres actualmente.
*
* El array tendrá 25 filas y 4 columnas
**/
#include <stdio.h>
#include <stdlib.h>
/* se declara la matriz char para cargar los asientos
 * la mayoria de las variables se declaran de forma global para poder utilizarlas en todas las funciones
 * */
char asiento[4][25];
int x,i,j, butaca;
char a, fila;
/* se declaran las fnciones a se llamadas\
 * esto podria realizarce en crearlas directamente al comienco
 * pero la idea es que primero se trabaje con el programa main
 * y no todas las funciones primero, es una idea de orden y nada 
 * declarado formalmete.
 * */
void iniciar(void);
void reserva(void);
void cancelar (void);
void mostrar (void);

int main (){
	int op1;
	iniciar ();
	for(;;){
		mostrar();
	printf("seleccione una opcion\n");
	printf("1- reservar asiento\n");
	printf("2- cancelar\n");
	printf("3- mostrar asientos\n");
	printf("4- salir");
	scanf("%d",&op1);
	switch (op1){
		case 1:
			reserva();
			break;
		case 2:
			cancelar();
			break;
		case 3:
			mostrar();
			break;
		case 4:
			exit(1);
			break;
		default:break;
	}
}
}
/* funciones
 * */

void iniciar(void){//se inicializa la matriz en '0'
	x=0;
	for(i=0;i<4;i++){
		for (j=0;j<25;j++){
			asiento [i][j]='0';
		}
	}	
}
void reserva(void){//se cargan las reservas
	//mostrar();
	do{
		printf("solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila :\n");
		scanf("%c",&fila);
		//fila=getchar();
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	} while(fila < 'A' || fila > 'D' );
	
	do{
		printf("solo numeros de 1 a 25\n");
		printf("Ingrese numero asiento :\n");
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
	if(asiento[x][butaca-1]=='X'){ // si el asiento esta ocupado nos avisa y pide ingresar otra vez la reserva
		printf("el asiento %c%d Ya esta reservado\n vuelva a ingresar su reserva\n",fila,butaca);
		reserva();
	}else{
		printf("Usted eligio la fila %c numero %d\n", fila, butaca);
		asiento [x][butaca-1]= 'X'; //carga el valor X en la reserva
		//printf("\t");
	}
	//mostrar();
}
void cancelar (void){//igual que enreserva pero cambia el valos X po 0 en el lugar espscifico de la matriz
	do{
		printf("solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila :");
		scanf("%c",&fila);
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	} while(fila < 'A' || fila > 'D' );
	
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
	if(asiento[x][butaca-1]!='X'){
		printf("el asiento %c%d NO esta reservado\n vuealva a ingresar su asiento\n",fila,butaca);
		//cancelar();
	}else{
		printf("Usted elimino el asiento de la fila %c numero %d\n", fila, butaca);
		asiento [x][butaca-1]= '0';
		//printf("\t");
	}
	//mostrar();
}

void mostrar (void){// muestra los valores de la matriz 0 vacio X ocupado
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
