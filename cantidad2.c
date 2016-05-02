#include <stdio.h>
#include <stdlib.h>
/**
 * la idea es generar entrada de enteros
 * para calcular la facturacion, 
 * muy basico, todavia no se guarda en archivo
 * esta version es con bucle while
 * @param int cantidad, se carga la cantidad deun priducto 
 * @param int precio guarda el precio del produco
 * @param int total calcula el total de la venta
 * */
 
int main()
{
    int cantidad, precio;
    printf("Ingrese una cantidad de producto: ");
    while(scanf("%d",&cantidad) != 1)
    {
        printf("%*s\n",40,"caracter no valido\n");
        printf("Ingrese una cantidad de producto: ");
        while(getchar() != '\n');
    }
    fflush(stdin);
    printf("Ingrese el presio del producto ");
    while (scanf("%d", &precio)!=1){
		printf("caracter no valido\n");
		printf("Ingrese el precio del producto ");
		while(getchar() != '\n');
	}
	system("clear");
    printf("cantidad %d, precio: %d", cantidad, precio);
	//cantidad = 0;
	return 0;
}

