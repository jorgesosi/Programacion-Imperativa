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
int cantidad, precio, num, total, subtotal;
char resp;
int main (){
	total=subtotal=num =0;
	do{
		do{		
			printf("Ingrese una cantidad del producto: ");
			scanf("%d",&cantidad);
			while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero
		}while( !(cantidad)  );// se analiza si el caracter es entero
		do{
			printf("Ingrese una precio de producto: ");
			scanf("%d",&precio);
			while(getchar() != '\n');
		}while( !(precio)  );
		subtotal=cantidad*precio;
		total= total+subtotal;
		num ++;
		cantidad=0;
		precio=0;
		printf("desea ingrar otro producto? (s/n)\n");
		scanf("%c",&resp);
		while(getchar()!='\n');
	}while(resp == 's');
	printf("usted adquirio  %d productos\n", num);
	printf("Total de la factura: %d\n", total);
	cantidad = 0;
	return 0;
}
