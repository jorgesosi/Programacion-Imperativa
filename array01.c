#include <stdio.h>
//#include<conio.h> no se usa en linux es una libreria de windows
#include <stdlib.h>          /*suma las diagonales*/
#include <time.h>

int main(void){
int x[5][5];
int a,b,s,result=0,result1=0;
	//clrscr();pertenence a conio.h
	//randomize(); funcion de borland o antigua linux usa rand();
	/* */
	printf("\n");
	for(a=0;a<5;a++){/*se genera un array con valores random */
		for(b=0;b<5;b++){
		     x[a][b]=(rand()%200)-100;
		     printf(" %d\t",x[a][b]);
		}
		printf("\n\n");

	}
	for(s=0;s<5;s++){/* suma la diagonal  0,0;1,1; ... ;4,4*/
		result=result + x[s][s];
	}
	printf("\nLa suma de la diagonal 1 es: %d\n",result);

	for(a=0,b=4;a<5;a++,b--)/*suma la diagonal 2 0,4;1,3;...4,0 */
		result1=result1+x[a][b];
	printf("la suma de la diagonal 2 es: %d",result1);
	//getch(); pertenece a conio.h
}
