/*
 * ordenar un arreglo determinado
 * orden ascendente y desendente
 * */

#include <stdio.h>
//int arr [7];
int main(){

	int i,j,min;
	int arr [] = {11,13,24,10,7,30,1};
	int arr1 [] = {11,13,24,10,7,30,1};
	/*se  imprime por pantalla el arreglo arr */
	printf("Arreglo Desordenado\n");
	for (i=0;i<7;i++)
		printf("%d, ", arr[i]);
	printf("\n");
	/* se ordena el arreglo de menor a mayor*/	
	for (i=0;i<7;i++){
		for (j=0;j<7;j++){
			if (arr[i]< arr[j]){
				min = arr[i];
				arr[i]=arr[j];
				arr[j]=min;
				
			}
		}
	}
		/*se  imprime por pantalla el arreglo arr ordenado */
		printf("Arreglo Ordenado Ascendente\n");
	for (i=0;i<7;i++)
		printf("%d, ", arr[i]);
	printf("\n");
	/* se ordena el arreglo de mayor a menor*/	
	min=0;
	for (i=0;i<7;i++){
		for (j=0;j<7;j++){
			if (arr1[i]> arr1[j]){
				min = arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=min;
				
			}
		}
	}
		/*se  imprime por pantalla el arreglo arr ordenado */
		printf("Arreglo Ordenado Decendente\n");
	for (i=0;i<7;i++)
		printf("%d, ", arr1[i]);
		
	printf("Length: %d\n",sizeof(arr));
	printf("Length: %d\n",sizeof(arr)/sizeof(int));
}
