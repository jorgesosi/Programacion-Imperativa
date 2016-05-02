/*
* Crear un programa llamado vendedores que cree un array de 18 X 10 indicando,
* que poseemos una empresa de 18 vendedores cada uno de los cuales vende 10 productos.
*
* El array almacena los ingresos obtenidos por cada vendedor en cada producto, 
* de modo que un menú permite almacenar los ingresos, revisar el total de cada vendedor, 
* y obtener los ingresos totales
*
 * */

#include <stdio.h>
#include <stdlib.h>
int ventas[18][10];
char *vendedores []={"Arturo","Alan","Beto","Bruno","Carlos","Coco","Cacho","Dido","Dodo","Dudy","Ema","Elba","Facu","Fede","Fefe","Gato","Gago","Juan"};
char *producto[]={"Limon","Manzana","Durazno","Pera","Frutilla","Frambuesa","Banana","kiwi","Damazco","Melon"};
void venta();
void totalproducto();
void totalvendedor();
void total();

int main() {
	int opt;
	for(;;){
	printf("ingrese una opcion\n");
	printf("1- Venta\n");
	printf("2- Sub total Producto\n");
	printf("3- Sub total Vendedor\n");
	printf("4- Total Ventas\n");
	printf("5- salir\n");
	scanf("%d",&opt);
	
		switch(opt){
			case 1:
				venta();
				break;
			case 2:
				totalproducto();
				break;
			case 3:
				totalvendedor();
				break;
			case 4:
				total();
				break;
			case 5:
				exit(1);
			default: break;
		}
	}
}
void venta(){
	int count = 0;
	int vend , prod, vent;
	while (vendedores[count] !='\0'){
		printf("%d\t%s\n", count, vendedores[count]);
		count++;
	}
	
	do{
		printf("Ingrese el numero del vendedor: \n");
		scanf("%d",&vend);
		while(getchar() !='\n');
	}while(vend < 0 ||vend >18);
	count=0;
	while (producto[count] !='\0'){
		printf("%d\t%s\n", count, producto[count]);
		count++;
	}
	do{
		printf("Ingrese el numero del producto: \n");
		scanf("%d",&prod);
		while(getchar() !='\n');
	}while(prod < 0 ||prod >10);
	
	system("clear");
	do{
		printf("Ingrese importe de la venta: \n");
		scanf("%d",&vent);
		while(getchar() !='\n');
	}while(!(vent));
	
		ventas[vend][prod]=ventas[vend][prod]+vent;
		printf("el vendedor %s vendio %s a %d",vendedores[vend],producto[prod],vent);
}

void totalproducto(){
	int prod,i,sumatotal;
	int count=0;
	while (producto[count] !='\0'){
		printf("%d\t%s\n", count, producto[count]);
		count++;
	}
	do{
		printf("Ingrese el numero del producto: \n");
		scanf("%d",&prod);
		while(getchar() !='\n');
	}while(prod < 0 ||prod >10);
	
	for(i=0;i<18;i++){
		sumatotal= sumatotal+ventas[i][prod];
	}
	printf("las ventas totales de %s es %d",producto[prod],sumatotal);
}

void totalvendedor(){
	int vend,i,sumatotal;
	int count=0;
	while (vendedores[count] !='\0'){
		printf("%d\t%s\n", count, vendedores[count]);
		count++;
	}
	do{
		printf("Ingrese el numero del Vendedor: \n");
		scanf("%d",&vend);
		while(getchar() !='\n');
	}while(vend < 0 ||vend >18);
	
	for(i=0;i<10;i++){
		sumatotal= sumatotal+ventas[vend][i];
	}
	printf("las ventas totales de %s es %d",vendedores[vend],sumatotal);
}

void total(){
	int i,j,totales;
	totales=0;
	for (i=0;i<18;i++){
		for(j=0;j<10;j++){
			printf("%d\t\t",ventas[i][j]);
			totales=totales+ventas[i][j];
			if(j>0 &&j%9 ==0)
				printf("\n");
		}
		
	}
	printf("\nlas ventas totales son: %d\n",totales);
}
