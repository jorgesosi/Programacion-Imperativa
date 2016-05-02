#include <stdio.h>
#include <stdlib.h>
#define LAP 3
   
//productos[15])[10] ;
int cantidad[10];
int unidad[10];
int subtotal[10];
int total=0;


int op;
int main (){
	for (int i=0;i< LAP;i++){
	printf("Seleccione Un producto\n");
		printf("1- Limones\n");
		printf("2- Manzanas\n");
		printf("3- Naranjas\n");
		printf("4- Duraznos\n");
		printf("5- salir\n");
		//op = getchar();
		scanf("%d", &op);
		while (getchar()!='\n');
		switch (op){
			case 1:
			subtotal [i]=0;
			unidad[i]=25;
			printf("Ingrese la cantidad: \n");
			scanf("%d", &cantidad[i]);
			subtotal [i]= cantidad[i] * unidad[i];
			total =total + subtotal[i];
			break;
			case 2:
			//producto [i][]="Manzanas";
			subtotal [i]=0;
			unidad[i]=30;
			printf("Ingrese la cantidad: \n");
			scanf("%d", &cantidad[i]);
			subtotal [i]= cantidad[i] * unidad[i];
			total =total + subtotal[i];
			break;
			case 3:
			//producto [i][]="Naranjas";
			subtotal [i]=0;
			unidad [i]=35;
			printf("Ingrese la cantidad: \n");
			scanf("%d", &cantidad[i]);
			subtotal [i]= cantidad[i] * unidad[i];
			total =total + subtotal[i];
			break;
			case 4:
			//producto [i][]="Duraznos";
			subtotal [i]=0;
			unidad [i]=15;
			printf("Ingrese la cantidad: ");
			scanf("%d", &cantidad[i]);
			subtotal [i]= cantidad[i] * unidad[i];
			total =total + subtotal[i];
			break;
			case 5:
				break;
			default:
			printf ("ingrese una opcion valida");
		
		}
		system("clear");
	}
printf("producto\tcantidad\t unidad\tsubtotal\n");
for (int j=0; j< LAP; j++)
	printf("\t\t%d\t\t%d\t\t%d\n",cantidad[j],unidad[j],subtotal[j]);
	
printf("\t\t\t\t\ttotal:\t%d\n",total);

}

