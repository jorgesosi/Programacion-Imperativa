/* 
 * busqueda en arrays, guardarlas en una matriz
 * ofrecer realizar una busqueda
 * por letras o silabas
 * busqueda por like
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	char prim[25]; 
	char buscar[25];
	int num,i;
	
	//char prim[6] ={'j','o','r','g','e'};
		printf("ingrese una palabra: ");
		fflush(stdout);
		scanf("%s",prim);
		//fflush(stdin);
		num= strlen(prim);
		//printf("%d",num);
		printf("ingrese el caracter a buscar");
		//fflush(stdout);
		scanf("%s", buscar);
		//while (getchar()!='\n');
		//fflush(stdin);
		printf("%s",buscar);
		//for (i=0;i<num;i++)//{
			//if(buscar==prim[i]){
				//printf("%s",prim);
				//break;
			//}
		//}
	

	return 0;	
}
