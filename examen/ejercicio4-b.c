/*
 * Que pida 10 números por teclado, los almacene en un array y muestre la suma.
 * */
#include <stdio.h>

int  main (){
	int suma[10];
	int i,total;
	total=0;
	for (i=0;i<10;i++){
		printf("%d -Ingrese el numero: ",i);
		fflush(stdout);
		scanf("%d",&suma[i]); 
		fflush(stdin);
	}
	for (i=0;i<10;i++){
		total=total+suma[i];
	}
	printf("la suma la matriz es: %d\n", total);
}
