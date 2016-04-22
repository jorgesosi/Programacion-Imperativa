#include <stdio.h>
#include <stdlib.h>
int cantidad ();
void producto();
int totales();
	//char op, op1;
	int  total;
int main (){
	char op1;
	for(;;){
	printf("seleccione una opcion\n");
	printf("1- cargar productos\n");
	printf("2- calcular total\n");
	printf("3 salir\n");
	scanf("%c",&op1);
	switch (op1){
		case '1':
			producto();
			break;
		case '2':
			totales();
			break;
		case '3':
			break;
		default:break;
	}
}
	//total= total + producto();
	//printf("%d", total);
}
int totales(){return 0;}
int cantidad(){
	system("clear");
	int cantidad;
 do{		
			printf("Ingrese una cantidad del producto: ");
			scanf("%d",&cantidad);
			while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero
		}while( !(cantidad)  );// se analiza si el caracter es entero
		return cantidad	;
}
void producto(){
	int op;
	//int limones=0;
	system("clear");
	for(;;){		
		printf("Seleccione Un producto\n");
		printf("1- Limones\n");
		printf("2- Manzanas\n");
		printf("3- Naranjas\n");
		printf("4- Duraznos\n");
		printf("5- salir\n");
		//op = getchar();
		scanf("%d", &op);
		while (getchar()!='\n');
		if(op == 1)
			limones = printf("limon\n");
		else if(op == 2)
				printf("manzana\n");
		else if (op == 3)
				printf("naranja\n");
		else if( op == 4)
				printf("durazno\n");
		else if(op == 5){
			system("clear");
			break;
		}
		else
			printf("seleccione un producto valido\n");
	}
}
