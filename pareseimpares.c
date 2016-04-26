 /* Crear un programa llamado paresImpares que cree un array de 100 números aleatorios del 1 al 1000. 
 Una vez creado, mostrar el contenido y después organizarlo de forma que estén juntos los elementos pares y los impares. 
 Después, volver a mostrar el array
 */
#include <stdio.h>
#include <stdlib.h>
#define MINIM 0
#define MAXIM 10

int x[MAXIM][MAXIM];
int i,j,k,l,flag;
int main(){
	
	for(i=MINIM;i<10;i ++){/* se crea el array de forma aleatoria*/
		for (j =MINIM; j<10;j++){
			x[i][j]= (rand()%1000);
		}
	}
	for(i=MINIM;i<10;i ++){/*  se imprime por pantalla el array*/
		for (j =MINIM; j<10;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	k=l=flag=0;
	for(i=MINIM;i<10;i ++){ // se buscan los valores pares y se colocan el el primer 
		for (j =MINIM; j<10;j++){//lugar
			if((x[i][j])%2==0){
				flag = x[k][l];
				x[k][l]=x[i][j];
				x[i][j]=flag;
				l++;
				if(l!=0 && l%10==0){
					k++;
					l=0;
				}
			} 
				
		}
	}
	printf("\n Pares e impares\n");
	for(i=MINIM;i<10;i ++){/*  se imprime por pantalla el array*/
		for (j =MINIM; j<10;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}

