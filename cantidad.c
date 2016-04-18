#include <stdio.h>
#include <stdlib.h>
/**
 * la idea es generar entrada de enteros
 * para calcular la facturacion, 
 * muy basico, todavia no se guarda en archivo
 * esta version es con bucle do-while
 * @param int cantidad, se carga la cantidad deun priducto 
 * @param int precio guarda el precio del produco
 * @param int total calcula el total de la venta
 * */
int cantidad, precio, num;
int main (){
	do{
		
		printf("Ingrese una cantidad de producto: ");
		scanf("%d",&cantidad);
		
		while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero
	}while( !(cantidad)  );// se analiza si el caracter es entero
	do{
		printf("Ingrese una precio de producto: ");
		scanf("%d",&precio);
		while(getchar() != '\n');
	}while( !(precio)  );
	
	printf("ingreso %d, precio %d", cantidad, precio);
	printf("Total de la factura: %d", cantidad*precio);
	cantidad = 0;
	return 0;
}
