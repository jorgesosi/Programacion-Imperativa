#include <stdio.h>

int main()
{

int *puntero[5]; //array de puntero
int a[5][5]; //Array bidimensional.
int i,j; 
for(i=0;i<5;i++){
		for (j=0;j<5;j++){
			a[i][j]=i+j;
		}
}

for (i=0;i<5;i++){
	puntero[i]=a[i]; //Asignamos las filas al puntero.
	for (j=0;j<5;j++){
			//a[i][j]=i+j+2;
			printf("%d",(puntero[i][j]));
		}
	
	printf("\n");	
}
//Pueden imprimir tambien en un ciclo
//Tambien pueden acceder mediante un ciclo anidado a la variables del puntero[i][j]

}
