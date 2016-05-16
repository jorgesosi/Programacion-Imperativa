 /* Crear un programa llamado paresImpares que cree un array de 100 números aleatorios del 1 al 1000. 
 Una vez creado, mostrar el contenido y después organizarlo de forma que estén juntos los elementos pares y los impares. 
 Después, volver a mostrar el array
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MINIM 0
#define MAXIM 4

int x[MAXIM][MAXIM];
int i,j,k,l,min;
int main(){
	srand (time(NULL));//se llama a esta funcion parq que rand(); no sevuelva siempre los mismos numeros
	//se crea una semilla para que rand haga su calculo
	for(i=MINIM;i<MAXIM;i ++){/* se crea el array de forma aleatoria*/
		for (j =MINIM; j<MAXIM;j++){
			x[i][j]= (rand()%1000);//%1000 nos da el rango de numeros de 0 a 999 ya que nos da el valor del modulo de dividir
		}//por 1000, si queremos numero de 0 a 9 lo hacemos %10, de 1 a 10 %11
	}
	for(i=MINIM;i<MAXIM;i ++){/*  se imprime por pantalla el array*/
		for (j =MINIM; j<MAXIM;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	//i=j=k=l=flag=min=0;
	min =x[i][j];
	for(i = MINIM;i < MAXIM;i++){ // se buscan los valores pares y se colocan el el primer 
		for (j = MINIM; j < MAXIM;j++){//lugar
			
			for(k = i;k < MAXIM;k++){/*  se imprime por pantalla el array*/
				for (l = j; l < MAXIM;l++){
					if(x[k][l]< x[i][j]){
						min = x[i][j];
						x[i][j] = x[k][l];
						x[k][l]=min;
						
					}
				}
			}
		}
	}
	printf("\n orden \n");
	for(i=MINIM;i<MAXIM;i ++){/*  se imprime por pantalla el array*/
		for (j =MINIM; j<MAXIM;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	
}

