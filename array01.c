#include <stdio.h>
//#include<conio.h> no se usa en linux es una libreria de windows
#include <stdlib.h>          /*suma las diagonales*/
#include <time.h>
#define INTMIN 0
#define INTMAX 8

int main(void){
int x[INTMAX][INTMAX];
int a,b,s,result=0,result1=0;
	//clrscr();pertenence a conio.h
	//randomize(); funcion de borland o antigua linux usa rand();
	/* */
	printf("\n");
	for(a=INTMIN;a<INTMAX;a++){/*se genera un array con valores random */
		for(b=INTMIN;b<INTMAX;b++){
		     x[a][b]=(rand()%200)-100;
		     printf(" %d\t",x[a][b]);
		}
		printf("\n\n");

	}
	for(s=INTMIN;s<INTMAX;s++){/* suma la diagonal  0,0;1,1; ... ;4,4*/
		result=result + x[s][s];
	}
	printf("\nLa suma de la diagonal 1 es: %d\n",result);

	for(a=INTMIN,b=INTMAX - 1;a<INTMAX;a++,b--)/*suma la diagonal 2 0,4;1,3;...4,0 */
		result1=result1+x[a][b];
	printf("la suma de la diagonal 2 es: %d",result1);
	//getch(); pertenece a conio.h
}
