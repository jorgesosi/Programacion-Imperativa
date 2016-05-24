#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * primer trabajo con estructuras
 * cargando un conjunto de libros con sus autores
 * titulos e identificador
 * se utiliza un bucle for solo para cargar una cantidad limitada de libros
 * @param char titulo[50] se ingresa el string para titulo maximo 50 caracteres
 * @param char autor[50] se ingresa el nombre y apellido del autor/es 
 * @param char tema[50] se ingresa un tema de libro, igual que los anteriores con um maximod e 50 caracteres
 * @param int id_libro recibe un valor numerico entero
 * por ahora no tiene ninguna validacion soloq eu el id _libro sea un numero y no cadena de caracteres
 * */
struct Libros {
   char  titulo[50];
   char  autor[50];
   char  temas[100];
   int  id_libro;
};
int main(){
	int i;
	
	struct Libros Libro1[10];
	for(i=0;i<4;i++){
		printf("Ingrese el Titulo del Libro: \n");
		fgets(Libro1[i].titulo, 50, stdin);// se usa para cargar string con espacios asigna nombre de la variable, longitaud  y forma de ingreso
		printf("Ingrese el Autor del Libro: \n");
		fgets(Libro1[i].autor, 50, stdin);
		printf("Ingrese el Tema del Libro: \n");
		fgets(Libro1[i].temas, 50, stdin);
		printf("Ingrese el Id del Libro: \n");
		fflush(stdout);
		while(scanf("%d",&Libro1[i].id_libro)!=1){ //escanea o recibe un valor, si no es entero lo hace hasta que se ingrese un numero interger
			printf("vuelva a intentarlo con un numero:  ");
			while(getchar() != '\n');// sentencia que permite salir de un bucle infiniro del bucle anterior espera hasta que hay un cambio de linea
		}
		getchar();// toma el enter despues del interger, sino es tomado por el primer fgets() o scanf() siguente como valor vacio
		system("clear");// limpia la pantalla para cargar el nuevo libro
	}
	
	for(i=0;i<4;i++){
		printf( "Nombre de libro : %s", Libro1[i].titulo);
   printf( "Autor : %s", Libro1[i].autor);
   printf( "Tematica : %s", Libro1[i].temas);
   printf( "Identificadorr : %d\n\n", Libro1[i].id_libro);
	}
   
   
}
